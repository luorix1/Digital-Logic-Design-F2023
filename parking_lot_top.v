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
   input todo_in,
   input todo_out,
	input todo_leak_move, // if we have to move a car from the leakage floor
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
   input plate_type,
	// Outputs
   output reg [2:0] target_floor,
   output reg target_place
);
	// Registers
	// Keep track of car type using license_plate
   reg disabled, sedan, suv;
	// FIXME: Does closest_floor work if parking lot full and elevator moving car to deal with leakage?
	reg [2:0] closest_for_in;
	reg [2:0] closest_for_out;
	reg [2:0] closest_for_leak;
	reg [7:0] possible; 
   	

	
	// Registers used for marking states
	reg [2:0] n0 = 3'b000;
	reg [2:0] n1 = 3'b001;
	reg [2:0] n2 = 3'b010;
	reg [2:0] n3 = 3'b011;
	reg [2:0] n4 = 3'b100;
	reg [2:0] n5 = 3'b101;
	reg [2:0] n6 = 3'b110;
	reg [2:0] n7 = 3'b111;
   reg [20:0] visit; // visit sequence
	always @(negedge clock) begin // to calculate all in / out / leak cases
		disabled = (license_plate[15:12] == 4'b1001);
		sedan =    (license_plate[0] == 0); // even number = sedan
		suv =      (license_plate[0] == 1); // odd number = suv
		// one-hot for each parking space
		// possible[i] = 1 : ith floor empty & without leakage
		// possible[i] = 0 : ith floor occupied
		possible [0] = 1; //always reachable
		possible [1] = (leakage_floor != 3'b001) & ((suv | full_sedan) & ((parked_1[31:16] == 0) & (disabled) | (parked_1[15:0] == 0)));
		possible [2] = (leakage_floor != 3'b010) & ((sedan) & ((parked_2[31:16]==0) & (disabled) | (parked_2[15:0] == 0)));
		possible [3] = (leakage_floor != 3'b011) & ((suv | full_sedan) & ((parked_3[31:16] == 0) | (parked_3[15:0] == 0)));
		possible [4] = (leakage_floor != 3'b100) & ((sedan) & ((parked_4[31:16] == 0) | (parked_4[15:0] == 0)));
		possible [5] = (leakage_floor != 3'b101) & ((suv | full_sedan) & ((parked_5[31:16] == 0) | (parked_5[15:0] == 0)));
		possible [6] = (leakage_floor != 3'b110) & ((sedan) & ((parked_6[31:16] == 0) | (parked_6[15:0] == 0)));
		possible [7] = (leakage_floor != 3'b111) & ((suv | full_sedan) & ((parked_7[31:16] == 0) | (parked_7[15:0] == 0)));
		closest_for_in = possible[1]?1:possible[2]?2:possible[3]?3:possible[4]?4:possible[5]?5:possible[6]?6:possible[7]?7:0;
		case(closest_for_in)
			3'b001 : target_place = (parked_1[31:16]==0 & disabled)?0:1;
			3'b010 : target_place = (parked_2[31:16]==0 & disabled)?0:1;
			3'b011 : target_place = (parked_3[31:16]==0)?0:1;
			3'b100 : target_place = (parked_4[31:16]==0)?0:1;
			3'b101 : target_place = (parked_5[31:16]==0)?0:1;
			3'b110 : target_place = (parked_6[31:16]==0)?0:1;
			3'b111 : target_place = (parked_7[31:16]==0)?0:1;
			default : target_place = 0;
		endcase;
		
		if(license_plate[15:0]==parked_1[15:0]) begin
			target_place = 1;
			closest_for_out = 3'b001;
		end
		else if(license_plate[15:0]==parked_1[31:16]) begin
			target_place = 0;
			closest_for_out = 3'b001;
		end
		else if(license_plate[15:0]==parked_2[15:0]) begin
			target_place = 1;
			closest_for_out = 3'b010;
		end
		else if(license_plate[15:0]==parked_2[31:16]) begin
			target_place = 0;
			closest_for_out = 3'b010;
		end
		else if(license_plate[15:0]==parked_3[15:0]) begin
			target_place = 1;
			closest_for_out = 3'b011;
		end
		else if(license_plate[15:0]==parked_3[31:16]) begin
			target_place = 0;
			closest_for_out = 3'b011;
		end
		else if(license_plate[15:0]==parked_4[15:0]) begin
			target_place = 1;
			closest_for_out = 3'b100;
		end
		else if(license_plate[15:0]==parked_4[31:16]) begin
			target_place = 0;
			closest_for_out = 3'b100;
		end
		else if(license_plate[15:0]==parked_5[15:0]) begin
			target_place = 1;
			closest_for_out = 3'b101;
		end
		else if(license_plate[15:0]==parked_5[31:16]) begin
			target_place = 0;
			closest_for_out = 3'b101;
		end
		else if(license_plate[15:0]==parked_6[15:0]) begin
			target_place = 1;
			closest_for_out = 3'b110;
		end
		else if(license_plate[15:0]==parked_6[31:16]) begin
			target_place = 0;
			closest_for_out = 3'b110;
		end
		else if(license_plate[15:0]==parked_7[15:0]) begin
			target_place = 1;
			closest_for_out = 3'b111;
		end
		else if(license_plate[15:0]==parked_7[31:16]) begin
			target_place = 0;
			closest_for_out = 3'b111;
		end
		else begin
//			$display("HERE");
			closest_for_out=0;
		end
		
		case(leakage_floor)
         3'b001 : visit[20:0] = {n2,n3,n4,n5,n6,n7,n0};
         3'b010 : visit[20:0] = {n1,n3,n4,n5,n6,n7,n0};
         3'b011 : visit[20:0] = {n2,n4,n1,n5,n6,n7,n0};
         3'b100 : visit[20:0] = {n3,n5,n2,n6,n1,n7,n0};
         3'b101 : visit[20:0] = {n4,n6,n3,n7,n2,n1,n0};
         3'b110 : visit[20:0] = {n5,n7,n4,n3,n2,n1,n0};
         3'b111 : visit[20:0] = {n6,n5,n4,n3,n2,n1,n0};
			default: visit[20:0] = {n1,n2,n3,n4,n5,n6,n7};
		endcase
		if(possible[visit[20:18]]) begin
			closest_for_leak = visit[20:18];
		end
		else if(possible[visit[17:15]]) begin
			closest_for_leak = visit[17:15];
		end
		else if(possible[visit[14:12]]) begin
			closest_for_leak = visit[14:12];
		end
		else if(possible[visit[11:9]]) begin
			closest_for_leak = visit[11:9];
		end
		else if(possible[visit[8:6]]) begin
			closest_for_leak = visit[8:6];
		end
		else if(possible[visit[5:3]]) begin
			closest_for_leak = visit[5:3];
		end
		else if(possible[visit[2:0]]) begin
			closest_for_leak = visit[2:0];
		end
		else begin
//			$display("HELLOHELLO");
			closest_for_leak = 0;
		end
	end

   always @(negedge clock) begin
		if (todo_in & moving==0) begin
			target_floor = 0;
		end
		else if (todo_in) begin
			target_floor = closest_for_in;
		end
		else if(todo_out & moving==0) begin
			target_floor = closest_for_out;
		end
		else if(todo_out) begin
			target_floor = 0;
		end
		else if(todo_leak_move & moving) begin
			target_floor = closest_for_leak;
		end
		else if(todo_leak_move & plate_type==suv) begin
			target_floor = leakage_floor;
		end
		else begin
			target_floor = 0;
		end
	end
endmodule

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
   always @(negedge clock) begin
		// If RESET signal given, cycle_count = 0 and fee = 0
		if (reset) begin
			cycle_count = 0;
         fee = 0;
      end
      
		// While enable_counting = 1, cycle_count += 1 per CLK cycle & fee calculated
		else if (enable_counting) begin // JYH: logic for fee calculation
//			$display("FEE ACTUALLY INCREASED");
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

// Order queue
// Module to maintain a queue with max length 7 for the license plate and required task for input not immediately executable
module order_queue(
	// Inputs
   input clock,
	input reset,
   input leakage,
	input in_mode,
	input out_mode,
	input [15:0] license_plate,
	input [2:0] leakage_floor,
   input [31:0] parked_1,
   input [31:0] parked_2,
   input [31:0] parked_3,
   input [31:0] parked_4,
   input [31:0] parked_5,
   input [31:0] parked_6,
   input [31:0] parked_7,
	input park_change,
	input new_car,
	// Outputs
	output reg todo_exists,
	output reg todo_in, 
	output reg todo_out, 
	output reg todo_leak_move,
   output reg [15:0] todo_license_plate
);
	reg [15:0] license_plates [0:7];
   reg [1:0] orders [0:7];
   reg [2:0] front, rear; //# of orders in QUEUE, used for tail
   reg queue_empty;

   always @(negedge clock) begin
		if (reset) begin
         front = 3'b0;
         rear = 3'b0;
         //todo_license_plate = 16'b0;
			todo_exists=0;
			todo_in=0;
			todo_out=0;
			todo_leak_move=0;
			todo_license_plate=0;
			queue_empty=1;
		end
	
      else if (todo_exists) begin // if todo is going on, put in queue
			if(in_mode | out_mode) begin
//				$display("Enqueue");
				license_plates[rear] = license_plate;
				orders[rear] = {in_mode, out_mode};
				rear = rear + 1;
				queue_empty = (front == rear);
			end
		end
		
		else if (!todo_exists & leakage) begin
			if(leakage_floor==3'b001 & parked_1[31:16]) begin
				{todo_exists, todo_in, todo_out, todo_leak_move} = 4'b1001;
				todo_license_plate[15:0] = parked_1[31:16];
			end
			else if(leakage_floor==3'b001 & parked_1[15:0]) begin
				{todo_exists, todo_in, todo_out, todo_leak_move} = 4'b1001;
				todo_license_plate[15:0] = parked_1[15:0];
			end
			else if(leakage_floor==3'b010 & parked_2[31:16]) begin
				{todo_exists, todo_in, todo_out, todo_leak_move} = 4'b1001;
				todo_license_plate[15:0] = parked_2[31:16];
			end
			else if(leakage_floor==3'b010 & parked_2[15:0]) begin
				{todo_exists, todo_in, todo_out, todo_leak_move} = 4'b1001;
				todo_license_plate[15:0] = parked_2[15:0];
			end
			else if(leakage_floor==3'b011 & parked_3[31:16]) begin
				{todo_exists, todo_in, todo_out, todo_leak_move} = 4'b1001;
				todo_license_plate[15:0] = parked_3[31:16];
			end
			else if(leakage_floor==3'b011 & parked_3[15:0]) begin
				{todo_exists, todo_in, todo_out, todo_leak_move} = 4'b1001;
				todo_license_plate[15:0] = parked_3[15:0];
			end
			else if(leakage_floor==3'b100 & parked_4[31:16]) begin
				{todo_exists, todo_in, todo_out, todo_leak_move} = 4'b1001;
				todo_license_plate[15:0] = parked_4[31:16];
			end
			else if(leakage_floor==3'b100 & parked_4[15:0]) begin
				{todo_exists, todo_in, todo_out, todo_leak_move} = 4'b1001;
				todo_license_plate[15:0] = parked_4[15:0];
			end
			else if(leakage_floor==3'b101 & parked_5[31:16]) begin
				{todo_exists, todo_in, todo_out, todo_leak_move} = 4'b1001;
				todo_license_plate[15:0] = parked_5[31:16];
			end
			else if(leakage_floor==3'b101 & parked_5[15:0]) begin
				{todo_exists, todo_in, todo_out, todo_leak_move} = 4'b1001;
				todo_license_plate[15:0] = parked_5[15:0];
			end
			else if(leakage_floor==3'b110 & parked_6[31:16]) begin
				{todo_exists, todo_in, todo_out, todo_leak_move} = 4'b1001;
				todo_license_plate[15:0] = parked_6[31:16];
			end
			else if(leakage_floor==3'b110 & parked_6[15:0]) begin
				{todo_exists, todo_in, todo_out, todo_leak_move} = 4'b1001;
				todo_license_plate[15:0] = parked_6[15:0];
			end
			else if(leakage_floor==3'b111 & parked_7[31:16]) begin
				{todo_exists, todo_in, todo_out, todo_leak_move} = 4'b1001;
				todo_license_plate[15:0] = parked_7[31:16];
			end
			else if(leakage_floor==3'b111 & parked_7[15:0]) begin
				{todo_exists, todo_in, todo_out, todo_leak_move} = 4'b1001;
				todo_license_plate[15:0] = parked_7[15:0];
			end
		end 
		//goto_queue
		else if (!todo_exists & !queue_empty) begin
//			$display("Dequeue");
			{todo_in, todo_out} = orders[front];
			todo_leak_move = 0; 
			todo_license_plate = license_plates[front];
			front = front + 1;
			todo_exists = 1;
		end 
		 
		else if ((!todo_exists & queue_empty) && (in_mode|out_mode)) begin
			//$display("(!todo_exists && queue_empty) %d %d %d", in_mode, out_mode, license_plate[0]);
			todo_in = in_mode;
			todo_out = out_mode;
			todo_leak_move = 0;
			todo_exists=in_mode|out_mode;
//			$display("license_plate first digit : %d", license_plate[15:12]); //
//			$display("license_plate first digit : %d", license_plate[11:8]); //
//			$display("license_plate first digit : %d", license_plate[7:4]); //
//			$display("license_plate first digit : %d", license_plate[3:0]); //
			todo_license_plate[15:12] = license_plate[15:12];
			todo_license_plate[11:8] = license_plate[11:8];
			todo_license_plate[7:4] = license_plate[7:4];
			todo_license_plate[3:0] = license_plate[3:0];
//			$display("todo_license_plate car # : %d%d%d%d",todo_license_plate[15:12], todo_license_plate[11:8], todo_license_plate[7:4], todo_license_plate[3:0] );
		end
		else if(!todo_exists & queue_empty & !in_mode & !out_mode) begin
//			$display("(!todo_exists && queue_empty) with no in out %d%d%d%d",todo_license_plate[15:12], todo_license_plate[11:8], todo_license_plate[7:4], todo_license_plate[3:0] );
		end
		else begin 
			$display("Error !!!!!!!!!!!!!!");
			todo_exists=0;
		end 
//		$display("todo_exists = %d, todo_in = %d, todo_out = %d, todo_leak_move = %d", todo_exists, todo_in, todo_out, todo_leak_move );
//		$display("car on dummy %d%d%d%d",todo_license_plate[15:12], todo_license_plate[11:8], todo_license_plate[7:4], todo_license_plate[3:0] );
		// dummy 비우는 역할
		if(!reset & (park_change==1) & (todo_license_plate!=0)) begin
//			$display("dummy empty happening");
			todo_license_plate = 0;
			todo_in=0;
			todo_out=0;
			todo_leak_move=0;
			todo_exists=0;
		end
	end
endmodule  

// Elevator controller
// Module for moving elevator, changing plate, and loading/offloading car from elevator
module elevator_controller(
	 // Inputs
    input clock,
    input reset,
	 input todo_in,
	 input todo_out,
	 input todo_leak_move,
	 input [15:0] todo_license_plate,
    input leakage,
	 input [2:0] leakage_floor,
	 input [2:0] target_floor, // destination floor
	 input target_place, // destination left or right? 0 -> left / 1 -> right
	 
	 // Outputs
	 output reg [31:0] parked_1,
	 output reg [31:0] parked_2,
	 output reg [31:0] parked_3,
	 output reg [31:0] parked_4,
	 output reg [31:0] parked_5,
	 output reg [31:0] parked_6,
	 output reg [31:0] parked_7,
	 output reg [2:0] current_floor,
    output reg [15:0] moving,
	 output reg plate_type,
	 // fee calculation
	 output reg car_out_ready,
	 // change in parking status
	 output reg park_change,
	 output reg [15:0] new_car,
	 output reg [3:0] new_spot
);
	// States
	reg [2:0] STATE_RESET = 3'b000;
	reg [2:0] STATE_CAR_IN = 3'b001;
	reg [2:0] STATE_CAR_OUT = 3'b010;
	reg [2:0] STATE_NO_ORDER = 3'b011;

   reg [2:0] current_state, next_state;
	 
	assign curr_state_for_test = current_state;
	reg [2:0] next_floor; // JYH: next floor elevator will go to
	
   // State transition logic
   always @(negedge clock or posedge reset) begin
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

   // NEW! Next state logic
   always @(posedge clock) begin
		case (current_state)
			// NOTE: STATE_RESET can go to either STATE_CAR_IN if in_mode = 1, or STATE_CAR_OUT if out_mode = 1
			//       Otherwise, stay in STATE_RESET
			STATE_RESET: begin
				moving = 0;
				//current_floor = 0; 위에서 처리된듯
				park_change=0;
				plate_type = 0;
				next_state = todo_in ? STATE_CAR_IN : todo_out? STATE_CAR_OUT : STATE_RESET; // reset에서는 leak이어도 차 없으니까 아무것도 안함
				$display("from STATE_RESET : todo_in is %d", todo_in);
				next_floor = current_floor;
			end
					
			// NOTE: STATE_CAR_IN
			STATE_CAR_IN: begin
				$display("in STATE_CAR_IN");
				$display("target_floor = %d", target_floor);
				$display("current_floor = %d", current_floor);
				$display("moving = %d%d%d%d", moving[15:12],moving[11:8],moving[7:4],moving[3:0]);
				if(target_floor==current_floor) begin // 타겟 층에 도달한 경우는 2가지. 판 바꾸기, 입고
					if(moving==0) begin
						park_change=0;
						if(plate_type != todo_license_plate[0]) begin
							$display("in plate_type change");
							plate_type = !plate_type;
							next_floor = current_floor;
							next_state = STATE_CAR_IN;
						end
						else begin // 차 올리기
							$display("in boarding car");
//							$display("todo_license_plate first digit : %d", todo_license_plate[15:12]);
							moving[15:12] = todo_license_plate[15:12];
							moving[11:8] = todo_license_plate[11:8];
							moving[7:4] = todo_license_plate[7:4];
							moving[3:0] = todo_license_plate[3:0];
//							$display("moving first digit : %d", moving[15:12]);
							next_floor = current_floor + 1;
							next_state = STATE_CAR_IN;
						end
					end
					else begin
						case(target_floor)
							3'b001: 	if(target_place==0) begin
											parked_1[31:16] = moving[15:0];
										end
										else begin
											parked_1[15:0] = moving[15:0];
										end
							3'b010:	if(target_place==0) begin
//											$display("2nd floor car in checkpoint #1");
											parked_2[31:16] = moving[15:0];
										end
										else begin
//											$display("2nd floor car in checkpoint #2");
											parked_2[15:0] = moving[15:0];
//											$display("parked_2[15:0] = %d, moving[15:0] = %d", parked_2[15:0], moving[15:0]);
										end
							3'b011: 	if(target_place==0) begin
											parked_3[31:16] = moving[15:0];
										end
										else begin
											parked_3[15:0] = moving[15:0];
										end
							3'b100:	if(target_place==0) begin
											parked_4[31:16] = moving[15:0];
										end
										else begin
											parked_4[15:0] = moving[15:0];
										end
							3'b101: 	if(target_place==0) begin
											parked_5[31:16] = moving[15:0];
										end
										else begin
											parked_5[15:0] = moving[15:0];
										end
							3'b110:	if(target_place==0) begin
											parked_6[31:16] = moving[15:0];
										end
										else begin
											parked_6[15:0] = moving[15:0];
										end
							3'b111: 	if(target_place==0) begin
											parked_7[31:16] = moving[15:0];
										end
										else begin
											parked_7[15:0] = moving[15:0];
										end
							default: parked_1[15:0] = moving[15:0];
						endcase
						park_change = 1;
						new_car = moving[15:0];
						new_spot[3:1] = target_floor;
						new_spot[0] = target_place;
						moving[15:0] = 0;
						next_floor = current_floor;
						next_state = todo_in? STATE_CAR_IN : todo_out? STATE_CAR_OUT : todo_leak_move? STATE_CAR_OUT : STATE_NO_ORDER;
						$display("park_change = %d, new_car = %d % d %d %d, moving = %d", park_change, new_car[15:12], new_car[11:8], new_car[7:4], new_car[3:0], moving);
					end
				end
				else if(target_floor > current_floor) begin
					park_change=0;
					next_floor = current_floor + 1;
					//next_state = STATE_CAR_IN;
					next_state = todo_in? STATE_CAR_IN : todo_out? STATE_CAR_OUT : todo_leak_move? STATE_CAR_OUT : STATE_NO_ORDER;
				end
				else if(target_floor < current_floor) begin
					park_change=0;
					next_floor = current_floor - 1;
					//next_state = STATE_CAR_IN;
					next_state = todo_in? STATE_CAR_IN : todo_out? STATE_CAR_OUT : todo_leak_move? STATE_CAR_OUT : STATE_NO_ORDER;
				end
			end

			// NOTE: STATE_CAR_OUT
			STATE_CAR_OUT: begin
				$display("in STATE_CAR_OUT");
				if(target_floor==current_floor) begin // 타겟 층에 도달한 경우는 3가지. 판 바꾸기, 차 빼기, 출고
					if(moving!=0) begin // 0층에서 출고
						park_change=0;
						moving[15:0] = 0;
						next_floor = current_floor;
						next_state = todo_in? STATE_CAR_IN : todo_out? STATE_CAR_OUT : todo_leak_move? STATE_CAR_OUT : STATE_NO_ORDER;
						//fee 정산 처리
					end
					else if(target_floor==0) begin //판 바꾸기
						park_change=0;
						plate_type = ~plate_type;
						next_floor = current_floor;
						next_state = STATE_CAR_OUT;
					end
					else begin // 주차 층에서 차 빼기
						$display("remove car at this stage!");
						case(target_floor)
							3'b001: if(target_place==0) begin
											moving = parked_1[31:16];
											parked_1[31:16] = 0;
										end
										else begin
											moving = parked_1[15:0];
											parked_1[15:0] = 0;
										end
							3'b010:	if(target_place==0) begin
											moving = parked_2[31:16];
											parked_2[31:16] = 0;
										end
										else begin
											moving = parked_2[15:0];
											parked_2[15:0] = 0;
										end
							3'b011: 	begin
											if(target_place==0) begin
												moving = parked_3[31:16];
												parked_3[31:16] = 0;
											end
											else begin
												moving = parked_3[15:0];
												parked_3[15:0] = 0;
											end
										end
							3'b100:	if(target_place==0) begin
											moving = parked_4[31:16];
											parked_4[31:16] = 0;
										end
										else begin
											moving = parked_4[15:0];
											parked_4[15:0] = 0;
										end
							3'b101: 	if(target_place==0) begin
											moving = parked_5[31:16];
											parked_5[31:16] = 0;
										end
										else begin
											moving = parked_5[15:0];
											parked_5[15:0] = 0;
										end
							3'b110:	if(target_place==0) begin
											moving = parked_6[31:16];
											parked_6[31:16] = 0;
										end
										else begin
											moving = parked_6[15:0];
											parked_6[15:0] = 0;
										end
							3'b111: 	if(target_place==0) begin
											moving = parked_7[31:16];
											parked_7[31:16] = 0;
										end
										else begin
											moving = parked_7[15:0];
											parked_7[15:0] = 0;
										end
							default: moving = 0;
						endcase
						
						park_change = 1;
						new_car = 0;
						new_spot = {target_floor, target_place};
//						$display("new_spot: %b %b", target_floor, target_place);
						
						next_floor = current_floor;
						next_state = todo_leak_move? STATE_CAR_IN : STATE_CAR_OUT;
					end
				end
				else if(target_floor > current_floor) begin
					park_change=0;
					next_floor = current_floor + 1;
					next_state = STATE_CAR_OUT;
				end
				else if(target_floor < current_floor) begin
//					$display("suspect");
					park_change=0;
					next_floor = current_floor - 1;
					if (next_floor == target_floor) begin
						car_out_ready = 1;
					end
					next_state = STATE_CAR_OUT;
				end
			end
			
			// NOTE: STATE_NO_ORDER
			STATE_NO_ORDER: begin // target_floor는 무조건 0층
				park_change=0;
				$display("in STATE_NO_ORDER");
				if(current_floor == target_floor) begin
					next_floor = current_floor;
					moving = 0; // FIXME: Temporary fix because of leakage floor car removal
					next_state = todo_in? STATE_CAR_IN : todo_out? STATE_CAR_OUT : todo_leak_move? STATE_CAR_OUT : STATE_NO_ORDER; // leak의 경우도 출고처럼 시작.
				end
				else if(target_floor > current_floor) begin
					next_floor = current_floor + 1;
					next_state = STATE_NO_ORDER;
				end
				else if(target_floor < current_floor) begin
					next_floor = current_floor - 1;
					next_state = STATE_NO_ORDER;
				end
			end
	
			// NOTE: Default case to ensure combinational logic
			default: begin
				$display("in default state");
				park_change=0;
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
	
	// Optional inputs for testing
	input [31:0] init_parked_1,
   input [31:0] init_parked_2,
   input [31:0] init_parked_3,
   input [31:0] init_parked_4,
   input [31:0] init_parked_5,
   input [31:0] init_parked_6,
   input [31:0] init_parked_7,
   
	// Outputs
	//flag change output reg
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
	//flag 7:10 a.m.
	output todo_exists,
	output todo_in, // JYH
	output todo_out, // JYH
	output todo_leak_move,
	output [15:0] todo_license_plate,
	output [2:0] target_floor,
	output target_place
);
	
	// HJW: Wires for newly parked car info
	wire park_change;
	wire [15:0] new_car;
	wire [3:0] new_spot;
	 
	// JYH: Logic for fee calculation at each parking spot
	// Parking Fee wire -> 15:8 (left), 7:0 (right)
	wire [15:0] parked_1_fee, parked_2_fee, parked_3_fee, parked_4_fee, parked_5_fee, parked_6_fee, parked_7_fee;
	
	// Registers for checking if we should stop counting for a certain parking spot
	reg stop_count_1_left, stop_count_1_right, reset_count_1_left, reset_count_1_right;
	reg stop_count_2_left, stop_count_2_right, reset_count_2_left, reset_count_2_right;
	reg stop_count_3_left, stop_count_3_right, reset_count_3_left, reset_count_3_right;
	reg stop_count_4_left, stop_count_4_right, reset_count_4_left, reset_count_4_right;
	reg stop_count_5_left, stop_count_5_right, reset_count_5_left, reset_count_5_right;
	reg stop_count_6_left, stop_count_6_right, reset_count_6_left, reset_count_6_right;
	reg stop_count_7_left, stop_count_7_right, reset_count_7_left, reset_count_7_right;
	
	// [3:0] register for position at which to stop counting
	wire [3:0] stop_count_pos;
	
	always @(negedge clock) begin
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
				case (new_spot)
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
	
	wire car_out_ready; // elevator_controller needs signal that car is ready to be removed
	
	// Instantiate target floor calculator
	target_floor target_flr (
		// Inputs
		.clock(clock),
		.license_plate(todo_license_plate),
		.todo_in(todo_in),
		.todo_out(todo_out),
		.todo_leak_move(todo_leak_move),
		.leakage(leakage),
		.leakage_floor(leakage_floor),
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
		.plate_type(plate_type),
		// Outputs
		.target_floor(target_floor),
		.target_place(target_place)
	);
	 
	// Instantiate position finer
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
		.todo_in(todo_in),
		.todo_out(todo_out),
		.todo_leak_move(todo_leak_move),
		.todo_license_plate(todo_license_plate),
      .target_floor(target_floor),
		.target_place(target_place),
		.leakage(leakage),
		.leakage_floor(leakage_floor),
      .current_floor(current_floor),
		
		// Outputs
		.car_out_ready(car_out_ready),
		.moving(moving),
		.plate_type(plate_type),
		.park_change(park_change),
		.new_car(new_car),
		.new_spot(new_spot)
	);
	
	// JYH ORDER QUEUE
	order_queue ORDERS (
		// Inputs
		.clock(clock),
		.reset(reset),
		.leakage(leakage),
		.in_mode(in_mode),
		.out_mode(out_mode),
		.license_plate(license_plate),
		.leakage_floor(leakage_floor),
		.parked_1(parked_1),
		.parked_2(parked_2),
		.parked_3(parked_3),
		.parked_4(parked_4),
		.parked_5(parked_5),
		.parked_6(parked_6),
		.parked_7(parked_7),
		.park_change(park_change),
		.new_car(new_car),
		// Outputs
		.todo_exists(todo_exists),
		.todo_in(todo_in),
		.todo_out(todo_out),
		.todo_leak_move(todo_leak_move),
		.todo_license_plate(todo_license_plate)
	);
	 
	// JYH: RESET logic here
	always @(negedge clock) begin
		if (reset) begin
			//flag change output reg
			// NOTE: You can use custom init_parked_i to model busy parking lot.
			parked_1[31:0] <= init_parked_1;
			parked_2[31:0] <= init_parked_2;
			parked_3[31:0] <= init_parked_3;
			parked_4[31:0] <= init_parked_4;
			parked_5[31:0] <= init_parked_5;
			parked_6[31:0] <= init_parked_6;
			parked_7[31:0] <= init_parked_7;
			//todo_exists=0;
			//todo_in=0;
			//todo_out=0;
			//todo_leak_move=0;
		end
		
		else begin
			if (park_change) begin
				case (new_spot)
					4'b0010: parked_1[31:16] = new_car[15:0];
					4'b0011: parked_1[15:0] = new_car[15:0];
					4'b0100: parked_2[31:16] = new_car[15:0];
					4'b0101: parked_2[15:0] = new_car[15:0];
					4'b0110: parked_3[31:16] = new_car[15:0];
					4'b0111: parked_3[15:0] = new_car[15:0];
					4'b1000: parked_4[31:16] = new_car[15:0];
					4'b1001: parked_4[15:0] = new_car[15:0];
					4'b1010: parked_5[31:16] = new_car[15:0];
					4'b1011: parked_5[15:0] = new_car[15:0];
					4'b1100: parked_6[31:16] = new_car[15:0];
					4'b1101: parked_6[15:0] = new_car[15:0];
					4'b1110: parked_7[31:16] = new_car[15:0];
					4'b1111: parked_7[15:0] = new_car[15:0];
					default: parked_1[31:16] = new_car[15:0];
				endcase
			end
		end
	end
	 
	always @(*) begin
		if (car_out_ready) begin
			case (new_spot)
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
