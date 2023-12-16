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
    input full_sedan,
    input [15:0] moving,
    output reg [2:0] target_floor,
    output reg target_place
);
    reg disabled, sedan, suv;
    reg [2:0] closest_floor;
    
	 reg [2:0] n0 = 3'b000;
	 reg [2:0] n1 = 3'b001;
	 reg [2:0] n2 = 3'b010;
	 reg [2:0] n3 = 3'b011;
	 reg [2:0] n4 = 3'b100;
	 reg [2:0] n5 = 3'b101;
	 reg [2:0] n6 = 3'b110;
	 reg [2:0] n7 = 3'b111;
	 
    reg [7:0] possible; // one-hot for each parking space
    reg [20:0] visit; // visit sequence

    always @(*) begin
       // finding_closest_floor
       disabled = (license_plate[15:12] == 4'b1001);
       sedan =    (license_plate[0] == 0); // even number = sedan
       suv =      (license_plate[0] == 1); // odd number = suv
       
       // possible[i] = 1 : i floor parkable
       // possible[i] = 0 : i floor cannot park
       possible [0] = 1'b1; //always reachable
       possible [1] = (suv | full_sedan) & ((parked_1[31:16]==0)&(disabled) | (parked_1[15:0]==0));
       possible [2] = (sedan) &             ((parked_2[31:16]==0)&(disabled) | (parked_2[15:0]==0));
       possible [3] = (suv | full_sedan) & ((parked_3[31:16]==0)            | (parked_3[15:0]==0));
       possible [4] = (sedan) &             ((parked_4[31:16]==0)            | (parked_4[15:0]==0));
       possible [5] = (suv | full_sedan) & ((parked_5[31:16]==0)            | (parked_5[15:0]==0));
       possible [6] = (sedan) &             ((parked_6[31:16]==0)            | (parked_6[15:0]==0));
       possible [7] = (suv | full_sedan) & ((parked_7[31:16]==0)            | (parked_7[15:0]==0));
       
       case(current_floor)
           3'b000 : visit[20:0] = {n1,n2,n3,n4,n5,n6,n7};
           3'b001 : visit[20:0] = {n2,n3,n4,n5,n6,n7,n0};
           3'b010 : visit[20:0] = {n1,n3,n4,n5,n6,n7,n0};
           3'b011 : visit[20:0] = {n2,n4,n1,n5,n6,n7,n0};
           3'b100 : visit[20:0] = {n3,n5,n2,n6,n1,n7,n0};
           3'b101 : visit[20:0] = {n4,n6,n3,n7,n2,n1,n0};
           3'b110 : visit[20:0] = {n5,n7,n4,n3,n2,n1,n0};
           3'b111 : visit[20:0] = {n6,n5,n4,n3,n2,n1,n0};
			  default: visit[20:0] = {n1,n2,n3,n4,n5,n6,n7}; // Useless defualt case for combinational logic
       endcase
       
        //setting target_place
        target_place =0; //default
		  closest_floor = 0; // FIXME: default value, temporary fix for latch creation
        if(out_mode) begin
            if(license_plate[15:0]==parked_1[15:0]) begin
                target_place = 1;
            end
            else if(license_plate[15:0]==parked_2[15:0]) begin
                target_place = 1;
            end
            else if(license_plate[15:0]==parked_3[15:0]) begin
                target_place = 1;
            end
            else if(license_plate[15:0]==parked_4[15:0]) begin
                target_place = 1;
            end
            else if(license_plate[15:0]==parked_5[15:0]) begin
                target_place = 1;
            end
            else if(license_plate[15:0]==parked_6[15:0]) begin
                target_place = 1;
            end
            else if(license_plate[15:0]==parked_7[15:0]) begin
                target_place = 1;
            end
            else begin
                target_place = 0;
            end
        end
        else if(in_mode) begin
            if(possible[visit[20:18]]) begin
                closest_floor=visit[20:18];
                target_place = (parked_1[31:16]==0)&(disabled) ? 0:1;
            end
            else if(possible[visit[17:15]]) begin
                closest_floor=visit[17:15];
                target_place = (parked_2[31:16]==0)&(disabled) ? 0:1;
            end
            else if(possible[visit[14:12]]) begin
                closest_floor=visit[14:12];
                target_place = (parked_3[31:16]==0) ? 0:1;
            end
            else if(possible[visit[11:9]]) begin
                closest_floor=visit[11:9];
                target_place = (parked_4[31:16]==0) ? 0:1;
            end
            else if(possible[visit[8:6]]) begin
                closest_floor=visit[8:6];
                target_place = (parked_5[31:16]==0) ? 0:1;
            end
            else if(possible[visit[5:3]]) begin
                closest_floor=visit[5:3];
                target_place = (parked_6[31:16]==0) ? 0:1;
            end
            else if(possible[visit[2:0]]) begin
                closest_floor=visit[2:0];
                target_place = (parked_7[31:16]==0) ? 0:1;
            end
				// FIXME: Temporary fix for latch creation
				else begin // should NEVER happen!
					closest_floor = 0;
					target_place = 0;
				end
       end
       else begin
            closest_floor = 0;
       end

    end
    always @(in_mode or out_mode or leakage) begin // FIXME: missing signals in sensitivity list. maybe replace with "*"?
        if(in_mode) begin
            case(moving)
                0 : target_floor = 3'b000; // no car -> go to 0 floor
                default : target_floor = closest_floor; // car -> find closest_floor
            endcase
        end
        else if(out_mode) begin
            case(moving)
                0 : target_floor = closest_floor; // no car -> go to floor with car to move
                default : target_floor = 3'b000;
            endcase
        end
        else if(leakage) begin
            case(leakage_floor)
                3'b000 : target_floor = 0;
                3'b001 : target_floor = (moving==0)? (parked_1[31:16]==0&parked_1[15:0]==0?0:3'b001) : closest_floor;
                3'b010 : target_floor = (moving==0)? (parked_2[31:16]==0&parked_2[15:0]==0?0:3'b010) : closest_floor;
                3'b011 : target_floor = (moving==0)? (parked_3[31:16]==0&parked_3[15:0]==0?0:3'b011) : closest_floor;
                3'b100 : target_floor = (moving==0)? (parked_4[31:16]==0&parked_4[15:0]==0?0:3'b100) : closest_floor;
                3'b101 : target_floor = (moving==0)? (parked_5[31:16]==0&parked_5[15:0]==0?0:3'b101) : closest_floor;
                3'b110 : target_floor = (moving==0)? (parked_6[31:16]==0&parked_6[15:0]==0?0:3'b110) : closest_floor;
                3'b111 : target_floor = (moving==0)? (parked_7[31:16]==0&parked_7[15:0]==0?0:3'b111) : closest_floor;
					 default: target_floor = 0; // Useless default case for combinational logic
            endcase
        end
		  else begin // FIXME: should NEVER happen! temporary fix for latch creation
				target_floor = 0;
		  end
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
	reg [111:0] license_plates;
	reg [13:0] orders;
	reg [2:0] tail; //# of orders in QUEUE, used for tail

	// Using Dual Edge
	always @(posedge clock or negedge reset) begin // At POSEDGE, push order
		if (!reset) begin
			license_plates = 0;
			orders = 0;
			tail = 0;
		end
		
		else if (clock) begin
			if (in_mode | out_mode) begin
				case (tail)
					0: begin
							orders[1:0] = {out_mode, in_mode};
							license_plates[15:0] = license_plate;
						end
					1: begin
							orders[3:2] = {out_mode, in_mode};
							license_plates[31:16] = license_plate;
						end
					2: begin
							orders[5:4] = {out_mode, in_mode};
							license_plates[47:32] = license_plate;
						end
					3: begin
							orders[7:6] = {out_mode, in_mode};
							license_plates[63:48] = license_plate;
						end
					4: begin
							orders[9:8] = {out_mode, in_mode};
							license_plates[79:64] = license_plate;
						end
					5: begin
							orders[11:10] = {out_mode, in_mode};
							license_plates[95:80] = license_plate;
						end
					6: begin
							orders[13:12] = {out_mode, in_mode};
							license_plates[111:96] = license_plate;
						end
					default: begin
							orders[1:0] = {out_mode, in_mode};
							license_plates[15:0] = license_plate;
						end
				endcase
				
				tail = tail + 1;
			end
		end
		
		else begin
			if (ready & tail != 0) begin // SYSTEM READY TO ACCEPT ORDER and ORRDER QUEUE not empty, POP
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
				in_mode_internal = orders[0]; // in = 2'b01, out = 2'b10
				out_mode_internal = orders[1]; // in = 2'b01, out = 2'b10
				
				orders[1:0] = orders[3:2];
				orders[3:2] = orders[5:4];
				orders[5:4] = orders[7:6];
				orders[7:6] = orders[9:8];
				orders[9:8] = orders[11:10];
				orders[11:10] = orders[13:12];
				orders[13:12] = 0;
			end
			
			else begin //SYSTEM NOT READY FOR NEW ORDER
				//in_mode_internal = 0;
				//out_mode_internal = 0;
				//order_license_plate[15:0] = 0;
			end
		end
	end
endmodule


module elevator_controller(
    input clock,
    input reset,
    input in_mode,
    input out_mode,
	 input [15:0] license_plate,
	 input [31:0] parked_1,
	 input [31:0] parked_2,
	 input [31:0] parked_3,
	 input [31:0] parked_4,
	 input [31:0] parked_5,
	 input [31:0] parked_6,
	 input [31:0] parked_7,
    input leakage,
	 input [2:0] leakage_floor,
	 input leak_empty, // variable to track whether leakage floor is empty
	 input [2:0] target_floor, // destination floor
	 input target_place, // destination left or right? 0 -> left / 1 -> right
    output reg car_out_ready,
	 output reg [2:0] current_floor,
    output reg [15:0] moving,
	 output reg newly_parked,
	 output reg [15:0] newly_parked_license_plate,
	 output reg [3:0] newly_parked_spot // first 3 bits are floor, last 1 bit is spot
);
    // States
	 reg [2:0] STATE_RESET = 3'b000;
	 reg [2:0] STATE_CAR_IN = 3'b001; // JYH: elevator is moving car into parking lot
	 reg [2:0] STATE_CAR_OUT_SEARCH = 3'b010; // JYH: elevator is going to car designated for removal
	 reg [2:0] STATE_CAR_OUT_EXPORT = 3'b011; // JYH: elevator is removing car from parking lot
	 reg [2:0] STATE_NO_ORDER = 3'b100; // JYH: awaiting next order (if current_floor != 0, elevator should go to floor 0)
	 reg [2:0] STATE_CAR_REASSIGN = 3'b101; // JYH: change elevator plate (sedan <-> SUV)

    reg [2:0] current_state, next_state;
	 
	 reg [2:0] next_floor; // JYH: next floor elevator will go to
	 
	 reg plate_type;

    // State transition logic
    always @(posedge clock or posedge reset) begin
        if (reset) begin
					current_state <= STATE_RESET;
					current_floor = 0;
				end
        else
            current_state <= next_state;
    end

    // Next state logic
    always @(*) begin
        case (current_state)
			// NOTE: STATE_RESET can go to either STATE_CAR_IN if in_mode = 1, or STATE_CAR_OUT if out_mode = 1
			//       Otherwise, stay in STATE_RESET
            STATE_RESET: begin
					newly_parked = 0;
					car_out_ready = 1; // this means that the system is ready to process new requests
					next_state = in_mode ? STATE_CAR_REASSIGN : out_mode? STATE_CAR_OUT_SEARCH : STATE_RESET;
				end
				
			// NOTE: STATE_CAR_IN
            STATE_CAR_IN: begin
					if (current_floor == 0 & moving[15:0] == 0) begin
						// Move car onto plate
						moving = license_plate;
						next_state = STATE_CAR_IN;
						newly_parked = 0;
					end
					else if (current_floor == target_floor) begin 
						// Designated parking spot now contains car
						newly_parked = 1; // only allowed to be TRUE in this case!
						newly_parked_license_plate = moving[15:0];
						newly_parked_spot[3:1] = target_floor;
						newly_parked_spot[0] = target_place;
						
						moving[15:0] = 0; // car has left elevator (now parked)
						next_state = in_mode ? STATE_CAR_IN : out_mode? STATE_CAR_OUT_SEARCH : STATE_NO_ORDER; //CJY: next_state = leakage&!leak_empty ? STATE_CAR_OUT_SEARCH : in_mode ? STATE_CAR_IN : out_mode? STATE_CAR_OUT : STATE_NO_ORDER; (~leak_emapty === binary value representing if leakage floor is empty. empty=1)
					end
					
					else if (current_floor > target_floor) begin
						newly_parked = 0;
						next_floor = current_floor - 1; // current floor > target floor
						next_state = STATE_CAR_IN;
					end
					else begin
						newly_parked = 0;
						next_floor = current_floor + 1; // current floor < target floor
						next_state = STATE_CAR_IN;
					end	
			end

			// NOTE: STATE_CAR_OUT_SEARCH
			// 		 In STATE_CAR_OUT_SEARCH, target_floor & target_place denote position of car to be removed from parking lot
			STATE_CAR_OUT_SEARCH: begin //CJY: out_mode==1, moving==0
					car_out_ready = 0;
					if (current_floor == target_floor) begin
						newly_parked = 1;
						newly_parked_license_plate = 0;
						newly_parked_spot = {target_floor, target_place};
						
						case ({target_floor, target_place})
							4'b0010: moving = parked_1[31:16];
							4'b0011: moving = parked_1[15:0];
							4'b0100: moving = parked_2[31:16];
							4'b0101: moving = parked_2[15:0];
							4'b0110: moving = parked_3[31:16];
							4'b0111: moving = parked_3[15:0];
							4'b1000: moving = parked_4[31:16];
							4'b1001: moving = parked_4[15:0];
							4'b1010: moving = parked_5[31:16];
							4'b1011: moving = parked_5[15:0];
							4'b1100: moving = parked_6[31:16];
							4'b1101: moving = parked_6[15:0];
							4'b1110: moving = parked_7[31:16];
							4'b1111: moving = parked_7[15:0];
							default: moving = parked_1[15:0]; // Useless default case for combinational logic
						endcase
						
						next_state = STATE_CAR_OUT_EXPORT;
					end
						
					else if (current_floor > target_floor) begin
						newly_parked = 0;
						next_floor = current_floor - 1; // current floor > target floor
						next_state = STATE_CAR_OUT_SEARCH;
					end

					else begin
						newly_parked = 0;
						next_floor = current_floor + 1; // current floor < target floor
						next_state = STATE_CAR_OUT_SEARCH;
					end	
			end
			
			// NOTE: STATE_CAR_OUT_EXPORT
	    	STATE_CAR_OUT_EXPORT: begin
					newly_parked = 0;
					if (current_floor == target_floor) begin  // target_floor = 0 for STATE_CAR_OUT_EXPORT
						next_floor = current_floor;
						car_out_ready = 1; // Means that the car is ready to be removed from parking lot
						if((in_mode == out_mode) & ~(leakage & leak_empty)) begin // no order, leakage NAND leak_floor_empty 
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
						car_out_ready = 0;
						next_floor = current_floor - 1; // current floor > target floor
						next_state = STATE_CAR_OUT_EXPORT;
					end

					else begin
						car_out_ready = 0;
						next_floor = current_floor + 1; // SHOULD NOT HAPPEN since target floor = 0
						next_state = STATE_CAR_OUT_EXPORT;
					end	
			end

			// NOTE: STATE_CAR_REASSIGN
	    	STATE_CAR_REASSIGN: begin
					newly_parked = 0;
					car_out_ready = 0;
					if (current_floor == target_floor) begin  // target_floor ==0;
						plate_type = ~plate_type;
						next_floor = current_floor;
						next_state = (!leakage && in_mode) ? STATE_CAR_IN : STATE_CAR_OUT_SEARCH;
				        end
						
					else if (current_floor > target_floor) begin
						next_floor = current_floor - 1;
						next_state = STATE_CAR_REASSIGN;
					end

					else begin
						next_floor = current_floor - 1; //CJY : default, should not happen
						next_state = STATE_CAR_REASSIGN;
					end
			end
			
			// NOTE: Default case to ensure combinational logic
	    	default: begin
				newly_parked = 0;
				car_out_ready = 0;
				next_state = STATE_RESET;
			end
        endcase
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
    output reg [31:0] parked_1,
    output reg [31:0] parked_2,
    output reg [31:0] parked_3,
    output reg [31:0] parked_4,
    output reg [31:0] parked_5,
    output reg [31:0] parked_6,
    output reg [31:0] parked_7,
    output [2:0] current_floor,
    output [15:0] moving,
    output reg plate_type,
    output reg [7:0] fee,
    output [3:0] empty_suv, // max value of empty_suv is 4'b0111
    output [3:0] empty_sedan, // max value of empty_sedan is 4'b0101
    output full_suv,
    output full_sedan
);
	 wire in_mode_internal; // JYH
	 wire out_mode_internal; // JYH
	 wire [15:0] license_plate_internal; // JYH
	 
	 
	 // Custom variables
	 reg current_work_done; // current task complete
	 
	 // JYH: Destination position
	 wire [2:0] target_floor;
	 wire target_place;
	 
	 // HJW: Wires for newly parked car info
	 wire newly_parked;
	 wire [15:0] newly_parked_license_plate;
	 wire [3:0] newly_parked_spot;
	 
	 // JYH: Logic for fee calculation at each parking spot
	 // Parking Fee wire -> 15:8 (left), 7:0 (right)
	 wire [15:0] parked_1_fee, parked_2_fee, parked_3_fee, parked_4_fee, parked_5_fee, parked_6_fee, parked_7_fee;
	 
	 parking_fee_calculator parked_1_left ( .clock(clock), .reset(reset), .license_plate(parked_1[31:16]), .enable_counting(parked_1[31:16]!=0), .fee(parked_1_fee[15:8])); // 장애인 자리라 사실 enable counting 꺼도 될려나1
	 parking_fee_calculator parked_2_left ( .clock(clock), .reset(reset), .license_plate(parked_2[31:16]), .enable_counting(parked_2[31:16]!=0), .fee(parked_2_fee[15:8])); // 장애인 자리라 사실 enable counting 꺼도 될려나2
	 parking_fee_calculator parked_3_left ( .clock(clock), .reset(reset), .license_plate(parked_3[31:16]), .enable_counting(parked_3[31:16]!=0), .fee(parked_3_fee[15:8])); // 별개로 이 짓이 가능한지는 몰?루...? .enable_counting(parked_2[31:16]==0) wire에 따로 assign을 하는게 나을라나... 
	 parking_fee_calculator parked_4_left ( .clock(clock), .reset(reset), .license_plate(parked_4[31:16]), .enable_counting(parked_4[31:16]!=0), .fee(parked_4_fee[15:8])); 
	 parking_fee_calculator parked_5_left ( .clock(clock), .reset(reset), .license_plate(parked_5[31:16]), .enable_counting(parked_5[31:16]!=0), .fee(parked_5_fee[15:8])); 
	 parking_fee_calculator parked_6_left ( .clock(clock), .reset(reset), .license_plate(parked_6[31:16]), .enable_counting(parked_6[31:16]!=0), .fee(parked_6_fee[15:8])); 
	 parking_fee_calculator parked_7_left ( .clock(clock), .reset(reset), .license_plate(parked_7[31:16]), .enable_counting(parked_7[31:16]!=0), .fee(parked_7_fee[15:8])); 
	 
	 parking_fee_calculator parked_1_right ( .clock(clock), .reset(reset), .license_plate(parked_1[15:0]), .enable_counting(parked_1[15:0]==0), .fee(parked_1_fee[7:0])); 
	 parking_fee_calculator parked_2_right ( .clock(clock), .reset(reset), .license_plate(parked_2[15:0]), .enable_counting(parked_2[15:0]==0), .fee(parked_2_fee[7:0])); 
	 parking_fee_calculator parked_3_right ( .clock(clock), .reset(reset), .license_plate(parked_3[15:0]), .enable_counting(parked_3[15:0]==0), .fee(parked_3_fee[7:0]));
	 parking_fee_calculator parked_4_right ( .clock(clock), .reset(reset), .license_plate(parked_4[15:0]), .enable_counting(parked_4[15:0]==0), .fee(parked_4_fee[7:0]));  
	 parking_fee_calculator parked_5_right ( .clock(clock), .reset(reset), .license_plate(parked_5[15:0]), .enable_counting(parked_5[15:0]==0), .fee(parked_5_fee[7:0])); 
	 parking_fee_calculator parked_6_right ( .clock(clock), .reset(reset), .license_plate(parked_6[15:0]), .enable_counting(parked_6[15:0]==0), .fee(parked_6_fee[7:0])); 
	 parking_fee_calculator parked_7_right ( .clock(clock), .reset(reset), .license_plate(parked_7[15:0]), .enable_counting(parked_7[15:0]==0), .fee(parked_7_fee[7:0])); 
	 
	 // JYH: LOGIC of full_suv, full_sedan, empty_suv, empty_sedan
	 assign empty_suv = (leakage_floor != 1 & parked_1[15:0]==0) + (leakage_floor != 3 & parked_3[31:16]==0) + (leakage_floor != 3 & parked_3[15:0]==0) + (leakage_floor != 5 & parked_5[31:16]==0) + (leakage_floor != 5 & parked_5[15:0]==0) + (leakage_floor != 7 & parked_7[31:16]==0) + (leakage_floor != 7 & parked_7[15:0]==0); // FIXME: Apply leakage
	 assign empty_sedan = (leakage_floor != 2 & parked_2[15:0]==0) + (leakage_floor != 4 & parked_4[31:16]==0) + (leakage_floor != 4 & parked_4[15:0]==0) + (leakage_floor != 6 & parked_6[31:16]==0) + (leakage_floor != 6 & parked_6[15:0]==0); // FIXME: Apply leakage
	 assign full_suv = (empty_suv == 0);
	 assign full_sedan = (empty_sedan == 0);
	 
	 // NOTE: Add logic for checking if leakage floor has parked cars
	 //       Parked cars must be removed!
	 reg leak_empty;
	 
	 wire car_out_ready; // elevator_controller needs signal that car is ready to be removed
	 
	 always @(*) begin
		case(leakage_floor)
			3'b001: leak_empty = parked_1[31:0] == 0;
			3'b010: leak_empty = parked_2[31:0] == 0;
			3'b011: leak_empty = parked_3[31:0] == 0;
			3'b100: leak_empty = parked_4[31:0] == 0;
			3'b101: leak_empty = parked_5[31:0] == 0;
			3'b110: leak_empty = parked_6[31:0] == 0;
			3'b111: leak_empty = parked_7[31:0] == 0;
			default: leak_empty = parked_1[31:0] == 0;
		endcase
	 end
	 
	 target_floor target_flr (
		// Inputs
		.license_plate(license_plate_internal),
		.in_mode(in_mode_internal),
		.out_mode(out_mode_internal),
		.leakage(leakage),
		.leakage_floor(leakage_floor),
		
		// Outputs
		.parked_1(parked_1),
		.parked_2(parked_2),
		.parked_3(parked_3),
		.parked_4(parked_4),
		.parked_5(parked_5),
		.parked_6(parked_6),
		.parked_7(parked_7),
		.current_floor(current_floor),
		.full_sedan(full_sedan),
		.moving(moving),
		.target_floor(target_floor),
		.target_place(target_place)
	 );

    // Instantiate Elevator Controller
    elevator_controller elevator_ctrl (
		  // Inputs
        .clock(clock),
        .reset(reset),
		  .parked_1(parked_1),
		  .parked_2(parked_2),
		  .parked_3(parked_3),
		  .parked_4(parked_4),
		  .parked_5(parked_5),
		  .parked_6(parked_6),
		  .parked_7(parked_7),
		  .license_plate(license_plate_internal),
		  .in_mode(in_mode_internal),
		  .out_mode(out_mode_internal),
        .target_floor(target_floor),
		  .target_place(target_place),
		  .leak_empty(leak_empty),
		  .leakage(leakage),
		  .leakage_floor(leakage_floor),
        .current_floor(current_floor),
        .moving(moving),
		  
		  // Outputs
		  .car_out_ready(car_out_ready),
		  .newly_parked(newly_parked),
		  .newly_parked_license_plate(newly_parked_license_plate),
		  .newly_parked_spot(newly_parked_spot)
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
				end
        else begin
            if (newly_parked) begin
					case (newly_parked_spot)
						4'b0010: parked_1[31:16] = newly_parked_license_plate[15:0];
						4'b0011: parked_1[15:0] = newly_parked_license_plate[15:0];
						4'b0100: parked_2[31:16] = newly_parked_license_plate[15:0];
						4'b0101: parked_2[15:0] = newly_parked_license_plate[15:0];
						4'b0110: parked_3[31:16] = newly_parked_license_plate[15:0];
						4'b0111: parked_3[15:0] = newly_parked_license_plate[15:0];
						4'b1000: parked_4[31:16] = newly_parked_license_plate[15:0];
						4'b1001: parked_4[15:0] = newly_parked_license_plate[15:0];
						4'b1010: parked_5[31:16] = newly_parked_license_plate[15:0];
						4'b1011: parked_5[15:0] = newly_parked_license_plate[15:0];
						4'b1100: parked_6[31:16] = newly_parked_license_plate[15:0];
						4'b1101: parked_6[15:0] = newly_parked_license_plate[15:0];
						4'b1110: parked_7[31:16] = newly_parked_license_plate[15:0];
						4'b1111: parked_7[15:0] = newly_parked_license_plate[15:0];
						default: parked_1[31:16] = newly_parked_license_plate[15:0];
					endcase
				end
        end
    end

	// JYH ORDER QUEUE
	order_queue ORDERS (
		// inputs
		.clock(clock),
		.reset(reset),
		.in_mode(in_mode),
		.out_mode(out_mode),
		.ready(car_out_ready), //current_work_done LOGIC needed, Elevator takes state to output,  current_work_done = (state == STATE_RESET | state == STATE_NO_ORDER);
		.license_plate(license_plate),
		
		// outputs
		.in_mode_internal(in_mode_internal),
		.out_mode_internal(out_mode_internal),
		.order_license_plate(license_plate_internal)
	);
	 
	 // JYH: Fee output logic
	 always @(*) begin
		if (car_out_ready) begin
			case (newly_parked_spot)
				4'b0010: fee = parked_1_fee[15:8];
				4'b0011: fee = parked_1_fee[7:0];
				4'b0100: fee = parked_2_fee[15:8];
				4'b0101: fee = parked_2_fee[7:0];
				4'b0110: fee = parked_3_fee[15:8];
				4'b0111: fee = parked_3_fee[7:0];
				4'b1000: fee = parked_4_fee[15:8];
				4'b1001: fee = parked_4_fee[7:0];
				4'b1010: fee = parked_5_fee[15:8];
				4'b1011: fee = parked_5_fee[7:0];
				4'b1100: fee = parked_6_fee[15:8];
				4'b1101: fee = parked_6_fee[7:0];
				4'b1110: fee = parked_7_fee[15:8];
				4'b1111: fee = parked_7_fee[7:0];
				default: fee = parked_1_fee[15:8]; // Useless default case for combinational logic
			endcase
		end
		
		else fee = 0;
	 end
endmodule