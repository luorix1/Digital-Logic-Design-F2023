// Parking fee calculator
// Module for calculating parking fee for each parking space
module parking_fee_calculator(
	// Inputs
	input clock,
	input reset,
	input [15:0] license_plate, // JYH: use license plate for determining car type, handicapped status, fee per cycle
	input enable_counting, // use logic to start counting when car is parked and end counting when car removal request occurs
	
	// Outputs
	output reg [7:0] fee
);
	reg [31:0] cycle_count; // Assuming 32-bit counter for simplicity

	// Next state logic
   always @(posedge clock) begin
		// If RESET signal given, cycle_count = 0 and fee = 0
		if (reset) begin
			cycle_count = 0;
         fee = 0;
      end
      
		// While enable_counting = 1, cycle_count += 1 per CLK cycle & fee calculated
		else if (enable_counting) begin // JYH: logic for fee calculation
			$display("FEE ACTUALLY INCREASED");
			// Increase cycle_count
			cycle_count = cycle_count + 1;
			// If handicapped vehicle, fee = 0
			if (license_plate[15:12] == 4'b1001) fee = 0;
			
			// If hybrid vehicle, fee = 1 per CLK cycle
			else if (license_plate[15:12] == 4'b1000) fee = cycle_count;
			
			// For all other vehicles, fee = 2 per CLK cycle
         else fee = cycle_count*2;
		end
		
		else begin
			cycle_count = 0;
		end
	end
endmodule

// Return position
// Module for returning position of car based on license plate
module return_position(
	input out_mode,
	input [15:0] license_plate,
	input [31:0] parked_1,
	input [31:0] parked_2,
	input [31:0] parked_3,
	input [31:0] parked_4,
	input [31:0] parked_5,
	input [31:0] parked_6,
	input [31:0] parked_7,
	output reg [3:0] position
);
	always @(*) begin
		if (out_mode) begin
			if(license_plate[15:0] == parked_1[15:0]) begin
				position = 4'b0011;
			end
			
			else if(license_plate[15:0]==parked_1[31:16]) begin
				position = 4'b0010;
			end

			else if(license_plate[15:0]==parked_2[15:0]) begin
				position = 4'b0101;
			end

			else if(license_plate[15:0]==parked_2[31:16]) begin
				position = 4'b0100;
			end

			else if(license_plate[15:0]==parked_3[15:0]) begin
				position = 4'b0111;
			end

			else if(license_plate[15:0]==parked_3[31:16]) begin
				position = 4'b0110;
			end

			else if(license_plate[15:0]==parked_4[15:0]) begin
				position = 4'b1001;
			end

			else if(license_plate[15:0]==parked_4[31:16]) begin
				position = 4'b1000;
			end

			else if(license_plate[15:0]==parked_5[15:0]) begin
				position = 4'b1011;
			end

			else if(license_plate[15:0]==parked_5[31:16]) begin
				position = 4'b1010;
			end

			else if(license_plate[15:0]==parked_6[15:0]) begin
				position = 4'b1101;
			end

			else if(license_plate[15:0]==parked_6[31:16]) begin
				position = 4'b1100;
			end

			else if(license_plate[15:0]==parked_7[15:0]) begin
				position = 4'b1111;
			end

			else if(license_plate[15:0]==parked_7[31:16]) begin
				position = 4'b1110;
			end
		end
		else begin
			position = 4'b0000;
		end
	end
endmodule

// Target floor
// Module for calculating target floor of elevator (used for parking car, removing car, and moving car to deal with leakage)
module target_floor(
	// Inputs
	input clock,
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
	
	// Outputs
   output reg [2:0] target_floor,
   output reg target_place
);
	// Registers
   reg disabled, sedan, suv; // Keep track of car type using license_plate
	// FIXME: Does closest_floor work if parking lot full and elevator moving car to deal with leakage?
   reg [2:0] closest_floor; // Find closest floor to use as destination for elevator
   
	// Registers used for marking states
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

   always @(posedge clock) begin
		// finding_closest_floor
      disabled = (license_plate[15:12] == 4'b1001);
      sedan =    (license_plate[0] == 0); // even number = sedan
      suv =      (license_plate[0] == 1); // odd number = suv
       
      // possible[i] = 1 : ith floor empty & without leakage
      // possible[i] = 0 : ith floor occupied
      possible [0] = 1'b1; //always reachable
      possible [1] = (leakage_floor != 3'b001) & ((suv | full_sedan) & ((parked_1[31:16] == 0) & (disabled) | (parked_1[15:0] == 0)));
      possible [2] = (leakage_floor != 3'b010) & ((sedan) & ((parked_2[31:16]==0) & (disabled) | (parked_2[15:0] == 0)));
      possible [3] = (leakage_floor != 3'b011) & ((suv | full_sedan) & ((parked_3[31:16] == 0) | (parked_3[15:0] == 0)));
      possible [4] = (leakage_floor != 3'b100) & ((sedan) & ((parked_4[31:16] == 0) | (parked_4[15:0] == 0)));
      possible [5] = (leakage_floor != 3'b101) & ((suv | full_sedan) & ((parked_5[31:16] == 0) | (parked_5[15:0] == 0)));
      possible [6] = (leakage_floor != 3'b110) & ((sedan) & ((parked_6[31:16] == 0) | (parked_6[15:0] == 0)));
      possible [7] = (leakage_floor != 3'b111) & ((suv | full_sedan) & ((parked_7[31:16] == 0) | (parked_7[15:0] == 0)));
      
		// Case statement to define ordering of floors based on close to far
      case(current_floor)
			3'b000 : visit[20:0] = {n1,n2,n3,n4,n5,n6,n7};
         3'b001 : visit[20:0] = {n2,n3,n4,n5,n6,n7,n0};
         3'b010 : visit[20:0] = {n1,n3,n4,n5,n6,n7,n0};
         3'b011 : visit[20:0] = {n2,n4,n1,n5,n6,n7,n0};
         3'b100 : visit[20:0] = {n3,n5,n2,n6,n1,n7,n0};
         3'b101 : visit[20:0] = {n4,n6,n3,n7,n2,n1,n0};
         3'b110 : visit[20:0] = {n5,n7,n4,n3,n2,n1,n0};
         3'b111 : visit[20:0] = {n6,n5,n4,n3,n2,n1,n0};
			default: visit[20:0] = {n1,n2,n3,n4,n5,n6,n7}; // Useless default case for combinational logic
      endcase
       
      // Set target_place, either 0 or 1, denoting parking spot on target_floor
      //target_place = 0; //default
	   //closest_floor = 0; // FIXME: default value, temporary fix for latch creation
		 
		// For out_mode, we use target_floor, target_place as parking spot occupied by desired car
		if(out_mode) begin
			if(license_plate[15:0]==parked_1[15:0]) begin
				target_place = 1;
				closest_floor = 3'b001;
			end
         
			else if(license_plate[15:0]==parked_1[31:16]) begin
				target_place = 0;
				closest_floor = 3'b001;
			end
			
         else if(license_plate[15:0]==parked_2[15:0]) begin
				target_place = 1;
            closest_floor = 3'b010;
			end
			
			else if(license_plate[15:0]==parked_2[31:16]) begin
				target_place = 0;
				closest_floor = 3'b010;
			end
			
			else if(license_plate[15:0]==parked_3[15:0]) begin
				target_place = 1;
				closest_floor = 3'b011;
			end
			
			else if(license_plate[15:0]==parked_3[31:16]) begin
				target_place = 0;
				closest_floor = 3'b011;
			end
			
			else if(license_plate[15:0]==parked_4[15:0]) begin
				target_place = 1;
				closest_floor = 3'b100;
			end
			
			else if(license_plate[15:0]==parked_4[31:16]) begin
				target_place = 0;
				closest_floor = 3'b100;
			end
			
			else if(license_plate[15:0]==parked_5[15:0]) begin
				target_place = 1;
				closest_floor = 3'b101;
			end
			
			else if(license_plate[15:0]==parked_5[31:16]) begin
				target_place = 0;
				closest_floor = 3'b101;
			end
			
			else if(license_plate[15:0]==parked_6[15:0]) begin
				target_place = 1;
				closest_floor = 3'b110;
			end
			
			else if(license_plate[15:0]==parked_6[31:16]) begin
				target_place = 0;
				closest_floor = 3'b110;
			end
			
			else if(license_plate[15:0]==parked_7[15:0]) begin
				target_place = 1;
				closest_floor = 3'b111;
			end
			
			else if(license_plate[15:0]==parked_7[31:16]) begin
				target_place = 0;
				closest_floor = 3'b111;
			end
			
			else begin
				closest_floor=0;
			end
		end
        
		// For in_mode, find the target_place to park incoming car
		else if(in_mode) begin
			if(possible[visit[20:18]]) begin
				$display("This should happen!");
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
	 
	 // Output logic
	 always @(*) begin
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

// Order queue
// Module to maintain a queue with max length 7 for the license plate and required task for input not immediately executable
module order_queue(
	// Inputs
	input [15:0] license_plate,
   input in_mode,
   input out_mode,
   input ready, // SYSTEM READY TO ACCEPT ORDER, STATE =  STATE_RESET
   input clock,
	input reset,
	
	// Outputs
   output reg in_mode_internal, out_mode_internal,
   output reg [15:0] order_license_plate
);
	reg [15:0] license_plates [0:7];
   reg [1:0] orders [0:7];
   reg [2:0] front, rear; //# of orders in QUEUE, used for tail
   reg empty_reg;

   always @(posedge clock) begin
		if (reset) begin
			// license_plates <= 0;
         // orders <= 0;
         front = 3'b0;
         rear = 3'b0;
         // full_reg = 1'b0;
         // empty_reg = 1'b1;
         {in_mode_internal, out_mode_internal} = 2'b0;
         order_license_plate = 16'b0;
		end

      else begin
			if ((out_mode | in_mode)) begin
				$display("Enqueue");
				license_plates[rear] = license_plate;
            orders[rear] = {out_mode, in_mode};
            rear = rear + 1;
         end
         
			// full_reg = (rear == front + 8);
         empty_reg = (front == rear);
         
			if (ready && !empty_reg) begin
				$display("Dequeue");
				{out_mode_internal, in_mode_internal} = orders[front];
            order_license_plate = license_plates[front];
            front = front + 1;
         end
			
			if (ready && empty_reg) begin
				$display("Dequeue zeros");
				{out_mode_internal, in_mode_internal} = 2'b0;
            order_license_plate = 16'b0;
            //front = front + 1;dd
         end

		end
	end
endmodule

// Elevator controller
// Module for moving elevator, changing plate, and loading/offloading car from elevator
module elevator_controller(
	 // Inputs
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
	 
	 // Outputs
	 output reg current_work_done,
    output reg car_out_ready,
	 output reg [2:0] current_floor,
    output reg [15:0] moving,
	 output reg plate_type,
	 output reg newly_parked,
	 output reg [15:0] newly_parked_license_plate,
	 output reg [3:0] newly_parked_spot, // first 3 bits are floor, last 1 bit is spot
	 output [2:0] curr_state_for_test
);
	// States
	reg [2:0] STATE_RESET = 3'b000;
	reg [2:0] STATE_CAR_IN = 3'b001; // JYH: elevator is moving car into parking lot
	reg [2:0] STATE_CAR_OUT_SEARCH = 3'b010; // JYH: elevator is going to car designated for removal
	reg [2:0] STATE_CAR_OUT_EXPORT = 3'b011; // JYH: elevator is removing car from parking lot
	reg [2:0] STATE_NO_ORDER = 3'b100; // JYH: awaiting next order (if current_floor != 0, elevator should go to floor 0)
	reg [2:0] STATE_CAR_REASSIGN = 3'b101; // JYH: change elevator plate (sedan <-> SUV)

   reg [2:0] current_state, next_state;
	 
	assign curr_state_for_test = current_state;
	reg [2:0] next_floor; // JYH: next floor elevator will go to
	
   // State transition logic
   always @(posedge clock or posedge reset) begin
		if (current_state!=next_state) $display("Elevator module state transition %d -> %d", current_state, next_state);
		else $display("Elevator module same state %d -> %d", current_state, next_state);
		
		if (reset) begin
			current_state <= STATE_RESET;
			current_floor <= 0;
			//moving = 0;
			//plate_type = 0;
			//next_floor =0 ;
		end
		else begin
			current_state <= next_state;
			current_floor <= next_floor;
		end
	end

   // Next state logic
   always @(*) begin
		case (current_state)
			// NOTE: STATE_RESET can go to either STATE_CAR_IN if in_mode = 1, or STATE_CAR_OUT if out_mode = 1
			//       Otherwise, stay in STATE_RESET
			STATE_RESET: begin
				moving = 0;
				//current_floor = 0;
				newly_parked = 0;
				//car_out_ready = 1;
				plate_type = 0;
				if (in_mode | out_mode) current_work_done = 0;
				else current_work_done = 1;
				next_state = in_mode ? STATE_CAR_REASSIGN : out_mode? STATE_CAR_OUT_SEARCH : STATE_RESET;
				next_floor = current_floor ;
			end
					
			// NOTE: STATE_CAR_IN
			STATE_CAR_IN: begin
				if (current_floor == 0 && moving[15:0] == 0) begin
					$display("1st");
					if (license_plate == 0) begin
						current_work_done = 1;
					end
					else if (license_plate[0] != plate_type) begin
						// Move car onto plate
						if (in_mode | out_mode) current_work_done = 0;
						else current_work_done = 1;
						plate_type = ~plate_type;
					end
					else begin
						// Move car onto plate
						if (in_mode | out_mode) current_work_done = 0;
						else current_work_done = 1;
						moving = license_plate;
					end
					next_state = STATE_CAR_IN;
					next_floor = current_floor;
				end
				
				else if (current_floor == target_floor) begin
					$display("2nd");
					// Designated parking spot now contains car
					if (moving != 0) begin
						newly_parked = 1; // only allowed to be TRUE in this case!
						newly_parked_license_plate = moving[15:0];
						newly_parked_spot[3:1] = target_floor;
						newly_parked_spot[0] = target_place;
						current_work_done = 1;
						
						moving[15:0] = 0; // car has left elevator (now parked)
						next_state = ((leakage && !leak_empty) || out_mode ) ? STATE_CAR_OUT_SEARCH : STATE_NO_ORDER;
					end
					
					else begin
						newly_parked = 0;
						current_work_done = 0;
						
						moving = license_plate;
						next_state = ((leakage && !leak_empty) || out_mode ) ? STATE_CAR_OUT_SEARCH : STATE_NO_ORDER;
						//next_state = STATE_CAR_IN;
					end
					
					next_floor = current_floor;
					//current_work_done = 1;
				end
				
				else if (current_floor > target_floor) begin
					$display("3rd");
					newly_parked = 0;
					next_floor = current_floor - 1; // current floor > target floor
					if (in_mode) next_state = STATE_CAR_IN;
					else if (out_mode) next_state = STATE_CAR_OUT_SEARCH; 
					else next_state = STATE_NO_ORDER;
					//next_state = (in_mode | out_mode) ? STATE_CAR_IN : STATE_NO_ORDER;
				end

				else begin
					$display("4th");
					current_work_done = 0;
					newly_parked = 0;
					next_floor = current_floor + 1; // current floor < target floor
					if (next_floor == target_floor) begin
						//car_out_ready=1;
					end
					if (in_mode) next_state = STATE_CAR_IN;
					else if (out_mode) next_state = STATE_CAR_OUT_SEARCH;
					else next_state = STATE_NO_ORDER;
					//next_state = (in_mode | out_mode) ? STATE_CAR_IN : STATE_NO_ORDER;
				end	
			end

			// NOTE: STATE_CAR_OUT_SEARCH
			// 		 In STATE_CAR_OUT_SEARCH, target_floor & target_place denote position of car to be removed from parking lot
			STATE_CAR_OUT_SEARCH: begin //CJY: out_mode==1, moving==0
				current_work_done = 0;
				car_out_ready = 0;
				if (target_floor == 0) begin
					//current_work_done = 1;
				end
				else if (current_floor != 0 & plate_type != license_plate[0]) begin
					next_state = STATE_CAR_OUT_SEARCH;
					next_floor = current_floor - 1;
				end
				
				else if (current_floor == 0 && license_plate[0] != plate_type) begin
					plate_type = ~plate_type;
					next_floor = current_floor;
				end
				
				else if (current_floor == target_floor) begin
					newly_parked = 1;
					newly_parked_license_plate = 0;
					newly_parked_spot = {target_floor, target_place};
					
					case ({target_floor, target_place})
						4'b0010: moving = parked_1[31:16];
						4'b0011: moving = parked_1[15:0];
						4'b0100: moving = parked_2[31:16];
						4'b0101: moving = parked_2[15:0];
						4'b0110: moving = parked_3[31:16];
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
					next_floor = current_floor;
				end
				
				else if (moving == 0 & current_floor > target_floor) begin
					newly_parked = 0;
					next_floor = current_floor - 1; // current floor > target floor
					next_state = STATE_CAR_OUT_SEARCH;
				end
				
				else if (moving == 0 & current_floor < target_floor) begin
					newly_parked = 0;
					next_floor = current_floor + 1; //current floor < target floor
					next_state = STATE_CAR_OUT_SEARCH;
				end

				else begin
					newly_parked = 0;
					next_floor = current_floor;
					next_state = STATE_CAR_OUT_EXPORT;
				end	
			end
				
			// NOTE: STATE_CAR_OUT_EXPORT
			STATE_CAR_OUT_EXPORT: begin
				current_work_done = 0;
				newly_parked = 0;
				if (current_floor == target_floor) begin  // target_floor = 0 for STATE_CAR_OUT_EXPORT
					current_work_done = 1;
					moving = 0;
					
					next_floor = current_floor;
					car_out_ready = 1; // Means that the car is ready to be removed from parking lot
					
					if((in_mode == out_mode) & !(leakage & !leak_empty)) begin // no order, no leak or leak but empty
						  next_state = STATE_NO_ORDER;
					end
					
					else if(leakage & !leak_empty) begin
						next_state = STATE_CAR_OUT_SEARCH;
					end
					
					else if(in_mode) begin
						next_state = STATE_CAR_IN;
					end
					
					else if(out_mode) begin
						next_state = STATE_CAR_OUT_SEARCH;
					end
					
					else begin
						  next_state = STATE_NO_ORDER;
					end
				end
						
				else if (current_floor > target_floor) begin
					car_out_ready = 0;
					next_floor = current_floor - 1; // current floor > target floor
					if (next_floor == target_floor) begin
						car_out_ready = 1;
					end
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
				current_work_done = 0;
				newly_parked = 0;
				car_out_ready = 0;
				
				if (current_floor == target_floor) begin  // target_floor ==0;
					if(license_plate[0] != plate_type) begin
						plate_type = ~plate_type;
					end
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
			
			// NOTE: STATE_NO_ORDER
			STATE_NO_ORDER: begin
				//car_out_ready=1;
				if(current_floor!=0) begin // Has already started returning to floor 0
					next_floor = current_floor-1;
					current_work_done = 1;
					next_state=STATE_NO_ORDER;
				end
				
				else if(in_mode) begin
					next_floor = current_floor;
					current_work_done = 0;
					next_state=STATE_CAR_IN;
				end
				
				else if(out_mode) begin
					next_floor=current_floor;
					current_work_done = 0;
					next_state = STATE_CAR_OUT_SEARCH;
				end
				
				else begin
					next_floor = current_floor;
					current_work_done = 1;
					next_state = STATE_NO_ORDER;
				end
			end
				
			// NOTE: Default case to ensure combinational logic
			default: begin
				current_work_done = 0;
				newly_parked = 0;
				car_out_ready = 0;
				next_state = STATE_RESET;
			end
		endcase
	end
endmodule

// Parking lot top
// Module for running the entire program
module parking_lot_top(
	// Inputs
   input reset,
   input clock,
   input [15:0] license_plate,
   input in_mode,
   input out_mode,
   input leakage,
   input [2:0] leakage_floor,
   
	// Outputs
	output reg [31:0] parked_1,
   output reg [31:0] parked_2,
   output reg [31:0] parked_3,
   output reg [31:0] parked_4,
   output reg [31:0] parked_5,
   output reg [31:0] parked_6,
   output reg [31:0] parked_7,
   output [2:0] current_floor,
   output [15:0] moving,
   output plate_type,
   output reg [7:0] fee,
   output [3:0] empty_suv, // max value of empty_suv is 4'b0111
   output [3:0] empty_sedan, // max value of empty_sedan is 4'b0101
   output full_suv,
   output full_sedan,
	output in_mode_internal, // JYH
	output out_mode_internal, // JYH
	output [15:0] license_plate_internal,
	output [2:0] curr_state_for_test,
	output [2:0] target_floor,
	output target_place
);
	//wire in_mode_internal; // JYH
	//wire out_mode_internal; // JYH
	//wire [15:0] license_plate_internal; // JYH 
	 
	// Custom variables
	wire current_work_done; 
	// current task complete
	 
	// JYH: Destination position
	//wire [2:0] target_floor;
	//wire target_place;
	
	// HJW: Wires for newly parked car info
	wire newly_parked;
	wire [15:0] newly_parked_license_plate;
	wire [3:0] newly_parked_spot;
	 
	// JYH: Logic for fee calculation at each parking spot
	// Parking Fee wire -> 15:8 (left), 7:0 (right)
	wire [15:0] parked_1_fee, parked_2_fee, parked_3_fee, parked_4_fee, parked_5_fee, parked_6_fee, parked_7_fee;
	
	// Registers for checking if we should stop counting for a certain parking spot
	reg stop_count_1_left, stop_count_1_right;
	reg stop_count_2_left, stop_count_2_right;
	reg stop_count_3_left, stop_count_3_right;
	reg stop_count_4_left, stop_count_4_right;
	reg stop_count_5_left, stop_count_5_right;
	reg stop_count_6_left, stop_count_6_right;
	reg stop_count_7_left, stop_count_7_right;
	
	// [3:0] register for position at which to stop counting
	wire [3:0] stop_count_pos;
	
	always @(*) begin
		if (reset) begin
			stop_count_1_left = 0;
			stop_count_1_right = 0;
			stop_count_2_left = 0;
			stop_count_2_right = 0;
			stop_count_3_left = 0;
			stop_count_3_right = 0;
			stop_count_4_left = 0;
			stop_count_4_right = 0;
			stop_count_5_left = 0;
			stop_count_5_right = 0;
			stop_count_6_left = 0;
			stop_count_6_right = 0;
			stop_count_7_left = 0;
			stop_count_7_right = 0;
		end
		
		else begin
			case (stop_count_pos)
				4'b0010: stop_count_1_left = 1;
				4'b0011: stop_count_1_right = 1;
				4'b0100: stop_count_2_left = 1;
				4'b0101: stop_count_2_right = 1;
				4'b0110: stop_count_3_left = 1;
				4'b0111: stop_count_3_right = 1;
				4'b1000: stop_count_4_left = 1;
				4'b1001: stop_count_4_right = 1;
				4'b1010: stop_count_5_left = 1;
				4'b1011: stop_count_5_right = 1;
				4'b1100: stop_count_6_left = 1;
				4'b1101: stop_count_6_right = 1;
				4'b1110: stop_count_7_left = 1;
				4'b1111: stop_count_7_right = 1;
				default: stop_count_1_right = 1; // Useless default case for combinational logic
			endcase
			
			if (car_out_ready) begin
				case (newly_parked_spot)
					4'b0010: stop_count_1_left = 0;
					4'b0011: stop_count_1_right = 0;
					4'b0100: stop_count_2_left = 0;
					4'b0101: stop_count_2_right = 0;
					4'b0110: stop_count_3_left = 0;
					4'b0111: stop_count_3_right = 0;
					4'b1000: stop_count_4_left = 0;
					4'b1001: stop_count_4_right = 0;
					4'b1010: stop_count_5_left = 0;
					4'b1011: stop_count_5_right = 0;
					4'b1100: stop_count_6_left = 0;
					4'b1101: stop_count_6_right = 0;
					4'b1110: stop_count_7_left = 0;
					4'b1111: stop_count_7_right = 0;
					default: stop_count_1_right = 0; // Useless default case for combinational logic
				endcase
			end
			
			//else begin
			//end
		end
	end
	 
	parking_fee_calculator parked_1_left ( .clock(clock), .reset(reset), .license_plate(parked_1[31:16]), .enable_counting(~stop_count_1_left & parked_1[31:16]!=0), .fee(parked_1_fee[15:8]));
	parking_fee_calculator parked_2_left ( .clock(clock), .reset(reset), .license_plate(parked_2[31:16]), .enable_counting(~stop_count_2_left & parked_2[31:16]!=0), .fee(parked_2_fee[15:8]));
	parking_fee_calculator parked_3_left ( .clock(clock), .reset(reset), .license_plate(parked_3[31:16]), .enable_counting(~stop_count_3_left & parked_3[31:16]!=0), .fee(parked_3_fee[15:8]));
	parking_fee_calculator parked_4_left ( .clock(clock), .reset(reset), .license_plate(parked_4[31:16]), .enable_counting(~stop_count_4_left & parked_4[31:16]!=0), .fee(parked_4_fee[15:8])); 
	parking_fee_calculator parked_5_left ( .clock(clock), .reset(reset), .license_plate(parked_5[31:16]), .enable_counting(~stop_count_5_left & parked_5[31:16]!=0), .fee(parked_5_fee[15:8])); 
	parking_fee_calculator parked_6_left ( .clock(clock), .reset(reset), .license_plate(parked_6[31:16]), .enable_counting(~stop_count_6_left & parked_6[31:16]!=0), .fee(parked_6_fee[15:8])); 
	parking_fee_calculator parked_7_left ( .clock(clock), .reset(reset), .license_plate(parked_7[31:16]), .enable_counting(~stop_count_7_left & parked_7[31:16]!=0), .fee(parked_7_fee[15:8])); 
	
	parking_fee_calculator parked_1_right ( .clock(clock), .reset(reset), .license_plate(parked_1[15:0]), .enable_counting(~stop_count_1_right & parked_1[15:0]!=0), .fee(parked_1_fee[7:0])); 
	parking_fee_calculator parked_2_right ( .clock(clock), .reset(reset), .license_plate(parked_2[15:0]), .enable_counting(~stop_count_2_right & parked_2[15:0]!=0), .fee(parked_2_fee[7:0])); 
	parking_fee_calculator parked_3_right ( .clock(clock), .reset(reset), .license_plate(parked_3[15:0]), .enable_counting(~stop_count_3_right & parked_3[15:0]!=0), .fee(parked_3_fee[7:0]));
	parking_fee_calculator parked_4_right ( .clock(clock), .reset(reset), .license_plate(parked_4[15:0]), .enable_counting(~stop_count_4_right & parked_4[15:0]!=0), .fee(parked_4_fee[7:0]));  
	parking_fee_calculator parked_5_right ( .clock(clock), .reset(reset), .license_plate(parked_5[15:0]), .enable_counting(~stop_count_5_right & parked_5[15:0]!=0), .fee(parked_5_fee[7:0])); 
	parking_fee_calculator parked_6_right ( .clock(clock), .reset(reset), .license_plate(parked_6[15:0]), .enable_counting(~stop_count_6_right & parked_6[15:0]!=0), .fee(parked_6_fee[7:0])); 
	parking_fee_calculator parked_7_right ( .clock(clock), .reset(reset), .license_plate(parked_7[15:0]), .enable_counting(~stop_count_7_right & parked_7[15:0]!=0), .fee(parked_7_fee[7:0])); 
	
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
		.clock(clock),
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
	 
	 return_position return_pos (
		.out_mode(out_mode),
		.license_plate(license_plate),
		.parked_1(parked_1),
		.parked_2(parked_2),
		.parked_3(parked_3),
		.parked_4(parked_4),
		.parked_5(parked_5),
		.parked_6(parked_6),
		.parked_7(parked_7),
      .position(stop_count_pos)
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
		  
		// Outputs
		.current_work_done(current_work_done),
		.car_out_ready(car_out_ready),
		.moving(moving),
		.plate_type(plate_type),
		.newly_parked(newly_parked),
		.newly_parked_license_plate(newly_parked_license_plate),
		.newly_parked_spot(newly_parked_spot),
		.curr_state_for_test(curr_state_for_test)
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
		// Inputs
		.clock(clock),
		.reset(reset),
		.in_mode(in_mode),
		.out_mode(out_mode),
		.ready(current_work_done), //current_work_done LOGIC needed, Elevator takes state to output,  current_work_done = (state == STATE_RESET | state == STATE_NO_ORDER);
		.license_plate(license_plate),
		
		// Outputs
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