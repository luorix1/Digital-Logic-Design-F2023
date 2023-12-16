module parking_fee_calculator(
    input clock,
    input reset,
	 input [15:0] license_plate, // JYH: 차종 및 장애인 차량 여부에 따른 요금 계산을 위해
    input enable_counting,
    output reg [7:0] fee
);

    reg [31:0] cycle_count; // Assuming 32-bit counter for simplicity

    always @(posedge clock or posedge reset) begin
        if (reset) begin
            cycle_count <= 0;
            fee <= 0;
        end
        else if (enable_counting) begin // JYH: fee 계산 logic 추가
				cycle_count <= cycle_count + 1;
				if (license_plate[15:12] == 4'b1001) fee <= 0; // 장애인 차량 fee 0 
				else if (license_plate[15:12] == 4'b1000) fee <= cycle_count; // Hybrid 차량 cycle 당 1 cent
            else fee <= cycle_count*2;  // 일반 차량 cycle 당 2 cent
        end
    end

endmodule


module elevator_controller(
    input clock,
    input reset,
    input in_mode,
    input out_mode,
    input leakage,
	 input [2:0] target_floor, // destination floor
	 input target_place, // destination left or right? 0 -> left / 1 -> right
    output reg [2:0] current_floor,
    output reg [15:0] moving,
    output reg state_car_in,
    output reg state_car_out,
    output reg state_car_reassign
);

    // States
    typedef enum reg [2:0] {
        STATE_RESET = 3'b000,
        STATE_CAR_IN = 3'b001, // JYH: 차량 입고 작업 '중' state
        STATE_CAR_OUT_SEARCH = 3'b010, // JYH: 차량 출고 작업 중 해당 차량을 찾으러 가는 state
		  STATE_CAR_OUT_EXPORT = 3'b010, // JYH: 차량 출고 작업 중 해당 차량을 내보내는 state
		  STATE_NO_ORDER = 3'b011 // JYH: 명령 대기 '중' state, 어떠한 명령도 없는데 current_floor != 0 인 경우 0층으로 내려감
        STATE_CAR_REASSIGN = 3'b011, // plate 바꾸기
        STATE_WAIT_FOR_LEAKAGE = 3'b100 // JYH: 이건 왜 필요한거야? 
    } state_type;

    state_type current_state, next_state;
	 
	 reg [2:0] next_floor; // JYH: 엘레베이터가 다음으로 이동할 층

    // State transition logic
    always @(posedge clock or posedge reset) begin
        if (reset)
            current_state <= STATE_RESET;
        else
            current_state <= next_state;
    end

    // Next state logic
    always @(*) begin
        case (current_state)
            STATE_RESET: next_state = in_mode ? STATE_CAR_IN : out_mode? STATE_CAR_OUT : STATE_RESET; // in/out 어디로든 갈 수 있도록
            STATE_CAR_IN: 
					if (current_floor == target_floor) begin 
						case ({target_floor, target_place})
							4'b0010: parked_1[31:16] = moving[15:0];
							4'b0011: parked_1[15:0] = moving[15:0];
							4'b0100: parked_2[31:16] = moving[15:0];
							4'b0101: parked_2[15:0] = moving[15:0];
							4'b0110: parked_3[31:16] = moving[15:0];
							4'b0111: parked_3[15:0] = moving[15:0];
							4'b1000: parked_4[31:16] = moving[15:0];
							4'b1001: parked_4[15:0] = moving[15:0];
							4'b1010: parked_5[31:16] = moving[15:0];
							4'b1011: parked_5[15:0] = moving[15:0];
							4'b1100: parked_6[31:16] = moving[15:0];
							4'b1101: parked_6[15:0] = moving[15:0];
							4'b1110: parked_7[31:16] = moving[15:0];
							4'b1111: parked_7[15:0] = moving[15:0];
							default: parked_1[31:16] = moving[15:0];
						endcase
						
						moving[15:0] = 0; //차 내림
						next_state = in_mode ? STATE_CAR_IN : out_mode? STATE_CAR_OUT : STATE_NO_ORDER; //CJY: next_state =  leakage&!leak_empty ? STATE_CAR_OUT_SEARCH : in_mode ? STATE_CAR_IN : out_mode? STATE_CAR_OUT : STATE_NO_ORDER; (~leak_emapty === binary value representing if leakage floor is empty. empty=1)
					end
					
					else if (current_floor > target_floor) begin
						next_floor = current_floor - 1; // 현재 층이 타켓 층보다 높은 경우
						next_state = STATE_CAR_IN;
					end
					else begin
						next_floor = current_floor + 1;
						next_state = STATE_CAR_IN;
					end	

	    STATE_CAR_OUT_SEARCH: //CJY: out_mode==1, moving==0
					if (current_floor == target_floor) begin  // 출고 모드에서는 target_floor 및 target place를 출고 차량의 층으로, 
						case ({target_floor, target_place}) // CJY : moving = parked car, parked car = 0
							4'b0010: begin
							            moving[15:0] = parked_1[31:16];
							            parked_1[31:16] = 0;
							         end
							4'b0011: begin
							            moving[15:0] = parked_1[15:0];
							            parked_1[15:0]=0;
							         end
							4'b0100: begin
							            moving[15:0] = parked_2[31:16];
							            parked_2[31:16]=0;
							         end
							4'b0101: begin
							            moving[15:0] = parked_2[15:0];
							            parked_2[15:0]=0;
							         end
							4'b0110: begin
							            moving[15:0] = parked_3[31:16];
							            parked_3[31:16]=0;
							         end
							4'b0111: begin
							            moving[15:0] = parked_3[15:0];
							            parked_3[15:0]=0;
							         end
							4'b1000: begin
							            moving[15:0] = parked_4[31:16];
							            parked_4[31:16]=0;
							         end
							4'b1001: begin
							            moving[15:0] = parked_4[15:0];
							            parked_4[15:0]=0;
							         end
							4'b1010: begin
							            moving[15:0] = parked_5[31:16];
							            parked_5[31:16]=0;
							         end
							4'b1011: begin
							            moving[15:0] = parked_5[15:0];
							            parked_5[15:0]=0;
							         end
							4'b1100: begin
							            moving[15:0] = parked_6[31:16];
							            parked_6[31:16]=0;
							         end
							4'b1101: begin
							            moving[15:0] = parked_6[15:0];
							            parked_6[15:0]=0;
							         end
							4'b1110: begin
							            moving[15:0] = parked_7[31:16];
							            parked_7[31:16]=0;
							         end
							4'b1111: begin
							            moving[15:0] = parked_7[15:0];
							            parked_7[15:0]=0;
							         end
							default: begin
							            moving[15:0] = parked_1[31:16];
							            parked_1[31:16]=0;
							         end
						endcase
						next_state = STATE_CAR_OUT_EXPORT;
					end
						
					else if (current_floor > target_floor) begin
						next_floor = current_floor - 1; // 현재 층이 타켓 층보다 높은 경우
						next_state = STATE_CAR_OUT_SEARCH;
					end
					else begin
						next_floor = current_floor + 1;
					   	next_state = STATE_CAR_OUT_SEARCH;
					end	
	    STATE_CAR_OUT_EXPORT:
			            	if (current_floor == target_floor) begin  // target_floor는 0층, 
						next_floor = current_floor;
						if(in_mode==out_mode && (leakage~&leak_empty)) begin // no order,leakage or leakage+leak_floor_empty 
						     next_state = STATE_NO_ORDER;
						end
						else if(license_plate[0] != plate_type) begin // plate needs change
						     next_state = STATE_CAR_REASSIGN;
						end
						else if(in_mode && (license_plate[0] != plate_type)) begin // leak 처리할 것 없고 in
						     next_state = STATE_CAR_IN;
						end
						else begin
						     next_state = STATE_CAR_OUT_SEARCH;
						end
					end
						
					else if (current_floor > target_floor) begin
						next_floor = current_floor - 1; // 현재 층이 타켓 층보다 높은 경우
						next_state = STATE_CAR_OUT_EXPORT;
					end
					else begin
						next_floor = current_floor + 1; // SHOULD NOT HAPPEN
						next_state = STATE_CAR_OUT_EXPORT;
					end	
	    STATE_CAR_REASSIGN:
        		                if (current_floor == target_floor) begin  // target_floor ==0;
						plate_type = ~plate_type;
						next_floor = current_floor;
						next_state = (!leakage && in_mode)? STATE_CAR_IN : STATE_CAR_OUT_SEARCH;
				        end
						
					else if (current_floor > target_floor) begin
						next_floor = current_floor - 1;
						next_state = STATE_CAR_REASSIGN;
					end
					else begin
						next_floor = current_floor - 1; //CJY : default, should not happen
						next_state = STATE_CAR_REASSIGN;
					end	
                       
            //STATE_WAIT_FOR_LEAKAGE: next_state = /* Logic to handle leakage */;
	    default: next_state = STATE_RESET;
        endcase
    end

    // Output logic
    always @(posedge clock) begin
        if (current_state == STATE_CAR_IN) begin
            // Logic for car_in
        end
        // ... other states
    end

endmodule


module leakage_detection_system(
    input clock,
    input reset,
    input leakage,
    input [2:0] leakage_floor,
    output reg leak_detected
);

    // Leakage detection logic
    // ...

endmodule


module parking_lot_top(
    input reset,
    input clock,
    input [15:0] license_plate,
    input in_mode,
    input out_mode,
    input leakage,
    input [2:0] leakage_floor,
    output [31:0] parked_1,
    output [31:0] parked_2,
    output [31:0] parked_3,
    output [31:0] parked_4,
    output [31:0] parked_5,
    output [31:0] parked_6,
    output [31:0] parked_7,
    output [2:0] current_floor,
    output [15:0] moving,
    output plate_type,
    output [7:0] fee,
    output [3:0] empty_suv, //PPT에선 4-bit binary 요구해서 고침, test bench에선 1bit, 머가 맞는진 몰루
    output [3:0] empty_sedan, //PPT에선 4-bit binary 요구해서 고침, test bench에선 1bit, 머가 맞는진 몰루
    output full_suv,
    output full_sedan
);
    // Internal signals for inter-module communication
    wire [7:0] fee_internal;
    wire [2:0] current_floor_internal;
    wire [15:0] moving_internal;
    wire leak_detected_internal;
	 
	 
	 // 필요할 것으로 예상되는 변수들
	 reg current_work_done; // 현재 작업 완료
	 reg in_car_waiting; // 입고 차량 대기중 (in_mode 신호가 1 cycle만 주어지므로)
	 reg out_car_waiting; //출고 차량 대기중 (out_mode 신호가 1 cycle만 주어지므로)
	 
	 // JYH: Destination Plate
	 wire [2:0] destination_floor;
	 
	 
	 // JYH: 주차 요금 계산 로직, 각 주차 자리별 주차 요금 정산기 배정. Parking Fee wire, 15:8 left parking fee, 7:0 right parking fee
	 wire [15:0] parked_1_fee, parked_2_fee, parked_3_fee, parked_4_fee, parked_5_fee, parked_6_fee, parked_7_fee;
	 
	 parking_fee_calculator parked_1_left ( .clock(clock), .reset(reset), .license_plate(parked_1[31:16]), .enable_counting(parked_1[31:16]==0), .fee(parked_1_fee[15:8])); // 장애인 자리라 사실 enable counting 꺼도 될려나1
	 parking_fee_calculator parked_2_left ( .clock(clock), .reset(reset), .license_plate(parked_2[31:16]), .enable_counting(parked_2[31:16]==0), .fee(parked_2_fee[15:8])); // 장애인 자리라 사실 enable counting 꺼도 될려나2
	 parking_fee_calculator parked_3_left ( .clock(clock), .reset(reset), .license_plate(parked_3[31:16]), .enable_counting(parked_3[31:16]==0), .fee(parked_3_fee[15:8])); // 별개로 이 짓이 가능한지는 몰?루...? .enable_counting(parked_2[31:16]==0) wire에 따로 assign을 하는게 나을라나... 
	 parking_fee_calculator parked_4_left ( .clock(clock), .reset(reset), .license_plate(parked_4[31:16]), .enable_counting(parked_4[31:16]==0), .fee(parked_4_fee[15:8])); 
	 parking_fee_calculator parked_5_left ( .clock(clock), .reset(reset), .license_plate(parked_5[31:16]), .enable_counting(parked_5[31:16]==0), .fee(parked_5_fee[15:8])); 
	 parking_fee_calculator parked_6_left ( .clock(clock), .reset(reset), .license_plate(parked_6[31:16]), .enable_counting(parked_6[31:16]==0), .fee(parked_6_fee[15:8])); 
	 parking_fee_calculator parked_7_left ( .clock(clock), .reset(reset), .license_plate(parked_7[31:16]), .enable_counting(parked_7[31:16]==0), .fee(parked_7_fee[15:8])); 
	 
	 parking_fee_calculator parked_1_right ( .clock(clock), .reset(reset), .license_plate(parked_1[15:0]), .enable_counting(parked_1[15:0]==0), .fee(parked_1_fee[7:0])); 
	 parking_fee_calculator parked_2_right ( .clock(clock), .reset(reset), .license_plate(parked_2[15:0]), .enable_counting(parked_2[15:0]==0), .fee(parked_2_fee[7:0])); 
	 parking_fee_calculator parked_3_right ( .clock(clock), .reset(reset), .license_plate(parked_3[15:0]), .enable_counting(parked_3[15:0]==0), .fee(parked_3_fee[7:0]));
	 parking_fee_calculator parked_4_right ( .clock(clock), .reset(reset), .license_plate(parked_4[15:0]), .enable_counting(parked_4[15:0]==0), .fee(parked_4_fee[7:0]));  
	 parking_fee_calculator parked_5_right ( .clock(clock), .reset(reset), .license_plate(parked_5[15:0]), .enable_counting(parked_5[15:0]==0), .fee(parked_5_fee[7:0])); 
	 parking_fee_calculator parked_6_right ( .clock(clock), .reset(reset), .license_plate(parked_6[15:0]), .enable_counting(parked_6[15:0]==0), .fee(parked_6_fee[7:0])); 
	 parking_fee_calculator parked_7_right ( .clock(clock), .reset(reset), .license_plate(parked_7[15:0]), .enable_counting(parked_7[15:0]==0), .fee(parked_7_fee[7:0])); 
	 
	 // JYH: LOGIC of full_suv, full_sedan, empty_suv, empty_sedan 테스트벤치 파일에선 empty_suv, empty_sedan가 1bit짜리 True False인데 PPT 에선 4-bit binary 요구... 멀까
	 wire full_suv, full_sedan;
	 wire [3:0] empty_suv, empty_sedan;
	 assign empty_suv = (parked_1[15:0]==0) + (parked_3[31:16]==0 + parked_3[15:0]==0) + (parked_5[31:16]==0 + parked_5[15:0]==0) + (parked_7[31:16]==0 + parked_7[15:0]==0);
	 assign empty_sedan = (parked_2[15:0]==0) + (parked_4[31:16]==0 + parked_4[15:0]==0) + (parked_6[31:16]==0 + parked_6[15:0]==0);
	 assign full_suv = (empty_suv == 0);
	 assign full_sedan = (empty_sedan == 0);

    // Instantiate Parking Fee Calculator
    parking_fee_calculator fee_calc (
        .clock(clock),
        .reset(reset),
        .license_plate(license_plate),
        .in_mode(in_mode),
        .out_mode(out_mode),
        .fee(fee_internal)
    );

    // Instantiate Elevator Controller
    elevator_controller elevator_ctrl (
        .clock(clock),
        .reset(reset),
		  .in_mode(in_mode), // JYH: 여기 단순히 in_mode 하면 안될듯. in_mode가 1 cycle만 유지되어서 in_car_waiting 따로 만들어야할듯
        .target_floor( /* Logic to determine target floor */ ),
        .current_floor(current_floor_internal),
        .moving(moving_internal)
    );

    // Instantiate Leakage Detection System
    leakage_detection_system leak_detect (
        .clock(clock),
        .reset(reset),
        .leakage(leakage),
        .leakage_floor(leakage_floor),
        .leak_detected(leak_detected_internal)
    );

    // JYH: RESET logic here
	 always @(*) begin
        if (reset) begin
            parked_1[31:0] = 0;
				parked_2[31:0] = 0;
				parked_3[31:0] = 0;
				parked_4[31:0] = 0;
				parked_5[31:0] = 0;
				parked_6[31:0] = 0;
				parked_7[31:0] = 0;
				current_floor[2:0] = 0;
				moving[15:0] = 0;
				plate_type = 0;
				fee[7:0] = 0;
				empty_suv = 1;
				empty_sedan = 1;
				full_suv = 0;
				full_sedan = 0;
        end
        else begin
            
        end
    end
	 
	 // JYH: Fee 출력 logic
	 reg car_out_ready; // elevator_controller에서 차량 출고 준비 완료 signal이 필요할듯
	 wire fee;
	 assign fee = car_out_ready ? fee_internal : 0;
	 
endmodule
