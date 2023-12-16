module parking_fee_calculator(
    input clock,
    input reset,
	 input [15:0] license_plate, // JYH: use license plate for determining car type, handicapped status, fee per cycle
    input enable_counting,
    output reg [7:0] fee
);

    reg [31:0] cycle_count; // Assuming 32-bit counter for simplicity

    always @(posedge clock or posedge reset) begin
        if (reset) begin
            cycle_count <= 0;
            fee <= 0;
        end
        else if (enable_counting) begin // JYH: logic for fee calculation
				cycle_count <= cycle_count + 1;
				if (license_plate[15:12] == 4'b1001) fee <= 0; // fee = 0 for handicapped vehicles
				else if (license_plate[15:12] == 4'b1000) fee <= cycle_count; // fee = 1 per cycle for hybrid vehicles
            else fee <= cycle_count*2;  // fee = 2 for other vehicles
        end
    end

endmodule

module target_floor(
    input [15:0] license_plate,
    input in_mode,
    input out_mode,
    input leakage,
    input [2:0] leakage_floor,
    input [31:0] parked_1,
    input [31:0] parked_2,
    input [31:0] parked_3,
    input [31:0] parked_4,
    input [31:0] parked_5,
    input [31:0] parked_6,
    input [31:0] parked_7,
    input [2:0] current_floor,
    input full_sedan
    input [15:0] moving,
    output reg [2:0] destination_floor
);
    //finding_closest_floor
    wire disabled = (license_plate[15:12] == 4'b1001);
    wire sedan =    (license_plate[0] == 0); // even number = sedan
    wire suv =      (license_plate[0] == 1); // odd number = suv
    wire [2:0] closest_floor
    
    wire [7:0] possible
    // one-hot for each parking space
    // possible[i] = 1 : i floor parkable
    // possible[i] = 0 : i floor cannot park
    wire[0] = 1 //always reachable
    wire[1] = (suv || full_sedan) & ((parked_1[31:16]==0)&(disabled) | (parked_1[15:0] ==0))
    wire[2] = (sedan) &             ((parked_2[31:16]==0)&(disabled) | (parked_2[15:0] ==0))
    wire[3] = (suv || full_sedan) & ((parked_3[31:16]==0)            | (parked_3[15:0] ==0))
    wire[4] = (sedan) &             ((parked_4[31:16]==0)            | (parked_4[15:0] ==0))
    wire[5] = (suv || full_sedan) & ((parked_5[31:16]==0)            | (parked_5[15:0] ==0))
    wire[6] = (sedan) &             ((parked_6[31:16]==0)            | (parked_6[15:0] ==0))
    wire[7] = (suv || full_sedan) & ((parked_7[31:16]==0)            | (parked_7[15:0] ==0))
        
    possible [2:0] n0 = 1'b000
    possible [2:0] n1 = 1'b001
    possible [2:0] n2 = 1'b010
    possible [2:0] n3 = 1'b011
    possible [2:0] n4 = 1'b100
    possible [2:0] n5 = 1'b101
    possible [2:0] n6 = 1'b110
    possible [2:0] n7 = 1'b111
    
    wire[20:0] visit // visit sequence
    case(current_floor)
        3'000 : visit[20:0] = {n1,n2,n3,n4,n5,n6,n7}
        3'001 : visit[20:0] = {n2,n3,n4,n5,n6,n7,n0}
        3'010 : visit[20:0] = {n1,n3,n4,n5,n6,n7,n0}
        3'011 : visit[20:0] = {n2,n4,n1,n5,n6,n7,n0}
        3'100 : visit[20:0] = {n3,n5,n2,n6,n1,n7,n0}
        3'101 : visit[20:0] = {n4,n6,n3,n7,n2,n1,n0}
        3'110 : visit[20:0] = {n5,n7,n4,n3,n2,n1,n0}
        3'111 : visit[20:0] = {n6,n5,n4,n3,n2,n1,n0}
    endcase
    
    if(possible[visit[20:18]]) begin
        closest_floor=visit[20:18]
    end
    else if(possible[visit[17:15]]) begin
        closest_floor=visit[17:15]
    end
    else if(possible[visit[14:12]]) begin
        closest_floor=visit[14:12]
    end
    else if(possible[visit[11:9]]) begin
        closest_floor=visit[11:9]
    end
    else if(possible[visit[8:6]]) begin
        closest_floor=visit[8:6]
    end
    else if(possible[visit[5:3]]) begin
        closest_floor=visit[5:3]
    end
    else if(possible[visit[2:0]]) begin
        closest_floor=visit[2:0]
    end
    
    always @(in_mode or out_mode or leakage) begin
        if(in_mode) begin
            case(moving)
                0 : 3b'000; // no car -> go to 0 floor
                default : destination_floor = closest_floor; // car -> find closest_floor
            endcase
        else if(out_mode) begin
            case(moving)
                0 : destination_floor = closest_floor; // no car -> go to floor with car to move
                default : 3b'000;
            endcase
        else if(leakage) begin
            case(leakage_floor)
                3'000 : destination_floor = 0;
                3'001 : destination_floor = (moving==0)? (parked_1[31:16]==0&parked_1[15:0]==0?0:3'001) : closest_floor;
                3'010 : destination_floor = (moving==0)? (parked_2[31:16]==0&parked_2[15:0]==0?0:3'010) : closest_floor;
                3'011 : destination_floor = (moving==0)? (parked_3[31:16]==0&parked_3[15:0]==0?0:3'011) : closest_floor;
                3'100 : destination_floor = (moving==0)? (parked_4[31:16]==0&parked_4[15:0]==0?0:3'100) : closest_floor;
                3'101 : destination_floor = (moving==0)? (parked_5[31:16]==0&parked_5[15:0]==0?0:3'101) : closest_floor;
                3'110 : destination_floor = (moving==0)? (parked_6[31:16]==0&parked_6[15:0]==0?0:3'110) : closest_floor;
                3'111 : destination_floor = (moving==0)? (parked_7[31:16]==0&parked_7[15:0]==0?0:3'111) : closest_floor;
            endcase
        endcase
    end

endmodule
// JYH: ORDER QUEUE
module order_queue(
	input [15:0] license_plate,
	input in_mode,
	input out_mode,
	input ready, // SYSTEM READY TO ACCEPT ORDER, STATE =  STARE_RESET
	input clock,
	input reset,
	
	//output reg [CARS_BUFF_SIZE-1:0] license_plates;
	//output reg [ORDER_BUFF_SIZE-1:0] orders;
	output reg in_mode_internal, out_mode_internal,
	output reg [15:0] order_license_plate
);
	parameter CARS_BUFF_SIZE = 112; //16*7
	parameter ORDER_BUFF_SIZE = 14; // order: in=1 out=2 -> 2 bits required * 7  = 14 bit
	
	reg [CARS_BUFF_SIZE-1:0] license_plates;
	reg [ORDER_BUFF_SIZE-1:0] orders;
	reg [2:0] tail; //# of orders in QUEUE, used for tail
	
	always @(reset) begin
		if (reset) begin
			license_plates = 0;
			orders = 0;
			tail = 0;
		end
	end

	// Using Dual Edge
	always @(posedge clock) begin // At POSEDGE, push order
      if (in_mode || out_mode) begin //                         
			orders[2*tail+1:2*tail] = {out_mode, in_mode};
			license_plates[15+tail*16:tail*16] = license_plate[15:0];
			
			tail = tail + 1;
		end
   end
	
	always @(negedge clock) begin // At NEGEDGE, fetch order
		  
		if (ready and tail != 0) begin // SYSTEM READY TO ACCEPT ORDER and ORRDER QUEUE not empty, POP
			tail = tail - 1;
		
			//license_plates POP
			order_license_plate[15:0] = license_plates[15:0];
			
			license_plates[15:0] = license_plates[31:16];
			license_plates[31:16] = license_plates[47:32];
			license_plates[47:32] = license_plates[63:48];
			license_plates[63:48] = license_plates[79:64];
			license_plates[79:64] = license_plates[95:80];
			license_plates[95:80] = license_plates[111:96];
			license_plates[111:96] = 0;
			
			//orders POP
			in_mode_internal = orders[0] // in = 2'b01, out = 2'b10
			out_mode_internal = orders[1] // in = 2'b01, out = 2'b10
			
			orders[1:0] = orders[3:2];
			orders[3:2] = orders[5:4];
			orders[5:4] = orders[7:6];
			orders[7:6] = orders[9:8];
			orders[9:8] = orders[11:10];
			orders[11:10] = orders[13:12];
			orders[13:12] = 0;
		end
		
		else begin //SYSTEM NOT READY FOR NEW ORDER
			in_mode_internal = 0;
			out_mode_internal = 0;
			order_license_plate[15:0] = 0;
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
        STATE_CAR_IN = 3'b001, // JYH: elevator is moving car into parking lot
        STATE_CAR_OUT_SEARCH = 3'b010, // JYH: elevator is going to car designated for removal
		  STATE_CAR_OUT_EXPORT = 3'b010, // JYH: elevator is removing car from parking lot
		  STATE_NO_ORDER = 3'b011 // JYH: awaiting next order (if current_floor != 0, elevator should go to floor 0)
        STATE_CAR_REASSIGN = 3'b011, // JYH: change elevator plate (sedan <-> SUV)
    } state_type;

    state_type current_state, next_state;
	 
	 reg [2:0] next_floor; // JYH: next floor elevator will go to

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
			// NOTE: STATE_RESET can go to either STATE_CAR_IN if in_mode = 1, or STATE_CAR_OUT if out_mode = 1
			//       Otherwise, stay in STATE_RESET
            STATE_RESET: next_state = in_mode ? STATE_CAR_IN : out_mode? STATE_CAR_OUT : STATE_RESET;

			// NOTE: STATE_CAR_IN
            STATE_CAR_IN: 
					if (current_floor == target_floor) begin 
						// Designated parking spot now contains car
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
						
						moving[15:0] = 0; // car has left elevator (now parked)
						next_state = in_mode ? STATE_CAR_IN : out_mode? STATE_CAR_OUT : STATE_NO_ORDER; //CJY: next_state = leakage&!leak_empty ? STATE_CAR_OUT_SEARCH : in_mode ? STATE_CAR_IN : out_mode? STATE_CAR_OUT : STATE_NO_ORDER; (~leak_emapty === binary value representing if leakage floor is empty. empty=1)
					end
					
					else if (current_floor > target_floor) begin
						next_floor = current_floor - 1; // current floor > target floor
						next_state = STATE_CAR_IN;
					end
					else begin
						next_floor = current_floor + 1; // current floor < target floor
						next_state = STATE_CAR_IN;
					end	

			// NOTE: STATE_CAR_OUT_SEARCH
			// 		 In STATE_CAR_OUT_SEARCH, target_floor & target_place denote position of car to be removed from parking lot
			STATE_CAR_OUT_SEARCH: //CJY: out_mode==1, moving==0
					if (current_floor == target_floor) begin
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
						next_floor = current_floor - 1; // current floor > target floor
						next_state = STATE_CAR_OUT_SEARCH;
					end

					else begin
						next_floor = current_floor + 1; // current floor < target floor
					   	next_state = STATE_CAR_OUT_SEARCH;
					end	
			
			// NOTE: STATE_CAR_OUT_EXPORT
	    	STATE_CAR_OUT_EXPORT:
					if (current_floor == target_floor) begin  // target_floor = 0 for STATE_CAR_OUT_EXPORT
						next_floor = current_floor;
						if(in_mode==out_mode && (leakage~&leak_empty)) begin // no order, leakage or leakage + leak_floor_empty 
						     next_state = STATE_NO_ORDER;
						end
						else if(license_plate[0] != plate_type) begin // plate needs to be changed
						     next_state = STATE_CAR_REASSIGN;
						end
						else if(in_mode && (license_plate[0] != plate_type)) begin // incoming car and no leakage
						     next_state = STATE_CAR_IN;
						end
						else begin
						     next_state = STATE_CAR_OUT_SEARCH;
						end
					end
						
					else if (current_floor > target_floor) begin
						next_floor = current_floor - 1; // current floor > target floor
						next_state = STATE_CAR_OUT_EXPORT;
					end

					else begin
						next_floor = current_floor + 1; // SHOULD NOT HAPPEN since target floor = 0
						next_state = STATE_CAR_OUT_EXPORT;
					end	

			// NOTE: STATE_CAR_REASSIGN
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
			
			// NOTE: Default case to ensure combinational logic
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
    output [3:0] empty_suv, // max value of empty_suv is 4'b0111
    output [3:0] empty_sedan, // max value of empty_sedan is 4'b0101
    output full_suv,
    output full_sedan
);
    // Internal signals for inter-module communication
    wire [7:0] fee_internal;
    wire [2:0] current_floor_internal;
    wire [15:0] moving_internal;
    wire leak_detected_internal;

	wire in_mode_internal; // JYH
	wire out_mode_internal; // JYH
	wire [15:0] license_plate_internal; // JYH
	 
	 
	 // Custom variables
	 reg current_work_done; // current task complete
	 reg in_car_waiting; // car awaiting parking exists (in_mode only lasts 1 CLK cycle)
	 reg out_car_waiting; // car awaiting removal exists (out_mode only lasts 1 CLK cycle)
	 
	 // JYH: Destination Plate
	 wire [2:0] destination_floor;
	 
	 
	 // JYH: Logic for fee calculation at each parking spot
	 // Parking Fee wire -> 15:8 (left), 7:0 (right)
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
	 
	 // JYH: LOGIC of full_suv, full_sedan, empty_suv, empty_sedan
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
		  .in_mode(in_mode), // FIXME: change to in_car_waiting since in_mode only lasts one CLK cycle
        .target_floor( /* Logic to determine target floor */ ),
        .current_floor(current_floor_internal),
        .moving(moving_internal)
    );

	// JYH ORDER QUEUE
	order_queue ORDERS (
		// inputs
		.clock(clock),
		.reset(reset),
		.in_mode(in_mode),
		.out_mode(out_mode),
		.ready(current_work_done), //current_work_done LOGIC needed, Elevator takes state to output,  current_work_done = (state == STATE_RESET || state == STATE_NO_ORDER);
		.license_plate(license_plate),
		
		// outputs
		.in_mode_internal(in_mode_internal),
		.out_mode_internal(out_mode_internal),
		.license_plate_internal(license_plate_internal)
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
	 
	 // JYH: Fee output logic
	 reg car_out_ready; // elevator_controller needs signal that car is ready to be removed
	 wire fee;
	 assign fee = car_out_ready ? fee_internal : 0;
	 
endmodule
