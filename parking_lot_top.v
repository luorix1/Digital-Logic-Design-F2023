module parking_fee_calculator(
    input clock,
    input reset,
	 input [15:0] license_plate, // JYH: ���� �� ����� ���� ���ο� ���� ��� ����� ����
    input enable_counting,
    output reg [7:0] fee
);

    reg [31:0] cycle_count; // Assuming 32-bit counter for simplicity

    always @(posedge clock or posedge reset) begin
        if (reset) begin
            cycle_count <= 0;
            fee <= 0;
        end
        else if (enable_counting) begin // JYH: fee ��� logic �߰�
				cycle_count <= cycle_count + 1;
				if (license_plate[15:12] == 4'b1001) fee <= 0; // ����� ���� fee 0 
				else if (license_plate[15:12] == 4'b1000) fee <= cycle_count; // Hybrid ���� cycle �� 1 cent
            else fee <= cycle_count*2;  // �Ϲ� ���� cycle �� 2 cent
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
        STATE_CAR_IN = 3'b001, // JYH: ���� �԰� �۾� '��' state
        STATE_CAR_OUT_SEARCH = 3'b010, // JYH: ���� ��� �۾� �� �ش� ������ ã���� ���� state
		  STATE_CAR_OUT_EXPORT = 3'b010, // JYH: ���� ��� �۾� �� �ش� ������ �������� state
		  STATE_NO_ORDER = 3'b011 // JYH: ��� ��� '��' state, ��� ��ɵ� ���µ� current_floor != 0 �� ��� 0������ ������
        STATE_CAR_REASSIGN = 3'b011, // plate �ٲٱ�
        STATE_WAIT_FOR_LEAKAGE = 3'b100 // JYH: �̰� �� �ʿ��Ѱž�? 
    } state_type;

    state_type current_state, next_state;
	 
	 reg [2:0] next_floor; // JYH: ���������Ͱ� �������� �̵��� ��

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
            STATE_RESET: next_state = in_mode ? STATE_CAR_IN : out_mode? STATE_CAR_OUT : STATE_RESET; // in/out ���ε� �� �� �ֵ���
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
						
						moving[15:0] = 0; //�� ����
						next_state = in_mode ? STATE_CAR_IN : out_mode? STATE_CAR_OUT : STATE_NO_ORDER;
					end
					
					else if (current_floor > target_floor) begin
						next_floor = current_floor - 1; // ���� ���� Ÿ�� ������ ���� ���
						next_state = STATE_CAR_IN;
					end
					else begin
						next_floor = current_floor + 1;
						next_state = STATE_CAR_IN;
					end	

            STATE_CAR_OUT: 
					if (current_floor == target_floor) begin  // ��� ��忡���� target_floor �� target place�� ��� ������ ������, 
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
							
							moving[15:0] = 0; //�� ����
							next_state = in_mode ? STATE_CAR_IN : out_mode? STATE_CAR_OUT : STATE_NO_ORDER;
						end
						
						else if (current_floor > target_floor) begin
							next_floor = current_floor - 1; // ���� ���� Ÿ�� ������ ���� ���
							next_state = STATE_CAR_IN;
						end
						else begin
							next_floor = current_floor + 1;
							next_state = STATE_CAR_IN;
						end	
				next_state = /* Logic to transition from car_out */;
            STATE_CAR_REASSIGN: next_state = /* Logic to transition from car_reassign */;
            STATE_WAIT_FOR_LEAKAGE: next_state = /* Logic to handle leakage */;
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
    output [3:0] empty_suv, //PPT���� 4-bit binary �䱸�ؼ� ��ħ, test bench���� 1bit, �Ӱ� �´��� ����
    output [3:0] empty_sedan, //PPT���� 4-bit binary �䱸�ؼ� ��ħ, test bench���� 1bit, �Ӱ� �´��� ����
    output full_suv,
    output full_sedan
);
    // Internal signals for inter-module communication
    wire [7:0] fee_internal;
    wire [2:0] current_floor_internal;
    wire [15:0] moving_internal;
    wire leak_detected_internal;
	 
	 
	 // �ʿ��� ������ ����Ǵ� ������
	 reg current_work_done; // ���� �۾� �Ϸ�
	 reg in_car_waiting; // �԰� ���� ����� (in_mode ��ȣ�� 1 cycle�� �־����Ƿ�)
	 reg out_car_waiting; //��� ���� ����� (out_mode ��ȣ�� 1 cycle�� �־����Ƿ�)
	 
	 // JYH: Destination Plate
	 wire [2:0] destination_floor;
	 
	 
	 // JYH: ���� ��� ��� ����, �� ���� �ڸ��� ���� ��� ����� ����. Parking Fee wire, 15:8 left parking fee, 7:0 right parking fee
	 wire [15:0] parked_1_fee, parked_2_fee, parked_3_fee, parked_4_fee, parked_5_fee, parked_6_fee, parked_7_fee;
	 
	 parking_fee_calculator parked_1_left ( .clock(clock), .reset(reset), .license_plate(parked_1[31:16]), .enable_counting(parked_1[31:16]==0), .fee(parked_1_fee[15:8])); // ����� �ڸ��� ��� enable counting ���� �ɷ���1
	 parking_fee_calculator parked_2_left ( .clock(clock), .reset(reset), .license_plate(parked_2[31:16]), .enable_counting(parked_2[31:16]==0), .fee(parked_2_fee[15:8])); // ����� �ڸ��� ��� enable counting ���� �ɷ���2
	 parking_fee_calculator parked_3_left ( .clock(clock), .reset(reset), .license_plate(parked_3[31:16]), .enable_counting(parked_3[31:16]==0), .fee(parked_3_fee[15:8])); // ������ �� ���� ���������� ��?��...? .enable_counting(parked_2[31:16]==0) wire�� ���� assign�� �ϴ°� ������... 
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
	 
	 // JYH: LOGIC of full_suv, full_sedan, empty_suv, empty_sedan �׽�Ʈ��ġ ���Ͽ��� empty_suv, empty_sedan�� 1bit¥�� True False�ε� PPT ���� 4-bit binary �䱸... �ֱ�
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
		  .in_mode(in_mode), // JYH: ���� �ܼ��� in_mode �ϸ� �ȵɵ�. in_mode�� 1 cycle�� �����Ǿ in_car_waiting ���� �������ҵ�
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
	 
	 // JYH: Fee ��� logic
	 reg car_out_ready; // elevator_controller���� ���� ��� �غ� �Ϸ� signal�� �ʿ��ҵ�
	 wire fee;
	 assign fee = car_out_ready ? fee_internal : 0;
	 
endmodule
