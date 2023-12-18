`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:    SNU 
// Engineer:    SNUCAD 
// 
// Create Date:    2023/11/29
// Design Name:    Parking_lot 
// Module Name:    parking_lot_top_tb 
// Project Name:    PARKINGLOT
// Description:    Digital Logic Design and Lab (2023, Fall semester) 
//
// Revision 0.01 - File Created
//
//////////////////////////////////////////////////////////////////////////////////
module parking_lot_top_tb (
	);
	 
   // Inputs
	reg reset;
	reg clock;
	reg [15:0] license_plate;
	reg in_mode;
	reg out_mode;
	reg leakage;
	reg [2:0] leakage_floor;

    // Outputs
	wire [31:0] parked_1;
	wire [31:0] parked_2;
	wire [31:0] parked_3;
	wire [31:0] parked_4;
	wire [31:0] parked_5;
	wire [31:0] parked_6;
	wire [31:0] parked_7;
	wire [2:0] current_floor;
	wire [15:0] moving;
	wire plate_type;
	wire [7:0] fee;
	wire [3:0] empty_suv;
	wire [3:0] empty_sedan;
	wire full_suv;
	wire full_sedan;
	
	// for test 
	reg pre_reset;

	reg [31:0] pre_parked_1;
	reg [31:0] pre_parked_2;
	reg [31:0] pre_parked_3;
	reg [31:0] pre_parked_4;
	reg [31:0] pre_parked_5;
	reg [31:0] pre_parked_6;
	reg [31:0] pre_parked_7;
	
	reg [2:0] pre_current_floor;
	reg [15:0] pre_moving;
	reg pre_plate_type;

	reg [7:0] clk_cnt;
	
	wire in_mode_internal, out_mode_internal;
	wire [15:0] license_plate_internal;
	wire [2:0] curr_state_for_test;
	wire [2:0] target_floor;
	wire target_place;
	
		

	parking_lot_top PARKING_LOT_TOP(
        .reset (reset),
        .clock (clock),
        .license_plate (license_plate),
        .in_mode (in_mode),
        .out_mode (out_mode),
        .leakage (leakage),
        .leakage_floor (leakage_floor),
        .parked_1 (parked_1),
        .parked_2 (parked_2),
        .parked_3 (parked_3),
        .parked_4 (parked_4),
        .parked_5 (parked_5),
        .parked_6 (parked_6),
        .parked_7 (parked_7),
        .current_floor (current_floor),
        .moving (moving),
        .plate_type (plate_type),
        .fee (fee),
        .empty_suv (empty_suv),
        .empty_sedan (empty_sedan),
        .full_suv (full_suv),
        .full_sedan (full_sedan),
		  .todo_exists (todo_exists),
		  .todo_in (todo_in),
		  .todo_out (todo_out),
		  .todo_leak_move (todo_leak_move),
		  .todo_license_plate(todo_license_plate),
		  .target_floor(target_floor),
		  .target_place(target_place)
		);
 
	
    
	// generate clock. clock period: (100MHz = 10ns)
	initial begin
		clock = 1;
		clk_cnt = 0;
		forever begin
			#5 clock = ~clock;
			if(clock==1) begin
				clk_cnt = clk_cnt+1;
			end
		end
	end
    
	// Initialize Inputs
	initial begin
		# 5
		reset=1;
		
		# 10
		reset = 0;
		
		# 10
		license_plate = 16'b0000_0000_0000_0000; 
		in_mode = 1'b0;
		out_mode = 1'b0;
		leakage = 1'b0;
		leakage_floor = 3'b000;

		# 20
		license_plate = 16'b1001_0100_0010_0011; // 9423
		in_mode = 1'b1;
		out_mode = 1'b0;
		leakage = 1'b0;
		leakage_floor = 3'b000;
		
		# 10
		license_plate = 16'b0000_0000_0000_0000; 
		in_mode = 1'b0;
		out_mode = 1'b0;
		leakage = 1'b0;
		leakage_floor = 3'b000;
				
		# 50
		license_plate = 16'b1000_0111_0101_0100; // 8754
		in_mode = 1'b1;
		out_mode = 1'b0;
		leakage = 1'b0;
		leakage_floor = 3'b000;
		
		# 10
		license_plate = 16'b0000_0000_0000_0000; 
		in_mode = 1'b0;
		out_mode = 1'b0;
		leakage = 1'b0;
		leakage_floor = 3'b000;
		
		# 70
		license_plate = 16'b1000_0111_0101_0100; // 8754
		in_mode = 1'b0;
		out_mode = 1'b1;
		leakage = 1'b0;
		leakage_floor = 3'b000;
		
		# 10
		license_plate = 16'b0000_0000_0000_0000; 
		in_mode = 1'b0;
		out_mode = 1'b0;
		leakage = 1'b0;
		leakage_floor = 3'b000;
		
		# 70
		license_plate = 16'b0101_0111_0101_0101; // 5755
		in_mode = 1'b1;
		out_mode = 1'b0;
		leakage = 1'b0;
		leakage_floor = 3'b000;
		
		# 10
		license_plate = 16'b0000_0000_0000_0000; 
		in_mode = 1'b0;
		out_mode = 1'b0;
		leakage = 1'b0;
		leakage_floor = 3'b000;
		
		# 70
		license_plate = 16'b0011_1000_0101_0001; // 3851
		in_mode = 1'b1;
		out_mode = 1'b0;
		leakage = 1'b0;
		leakage_floor = 3'b000;
		
		# 10
		license_plate = 16'b0000_0000_0000_0000; 
		in_mode = 1'b0;
		out_mode = 1'b0;
		leakage = 1'b0;
		leakage_floor = 3'b000;
		
		# 70
		license_plate = 16'b1001_0101_0010_0010; // 9522
		in_mode = 1'b1;
		out_mode = 1'b0;
		leakage = 1'b0;
		leakage_floor = 3'b000;
		
		# 10
		license_plate = 16'b0000_0000_0000_0000; 
		in_mode = 1'b0;
		out_mode = 1'b0;
		leakage = 1'b0;
		leakage_floor = 3'b000;
		
		# 70
		license_plate = 16'b1001_0101_0011_0010; // 9532
		in_mode = 1'b1;
		out_mode = 1'b0;
		leakage = 1'b0;
		leakage_floor = 3'b000;
		
		# 10
		license_plate = 16'b0000_0000_0000_0000; 
		in_mode = 1'b0;
		out_mode = 1'b0;
		leakage = 1'b0;
		leakage_floor = 3'b000;
		
		
		# 100
		$finish;
		
	end

	always @(negedge clock) begin
	
		//reset_start
		if(reset==0 & pre_reset==1) begin
			$display("Start Simulation!!!\n");
			
		end

		if(reset==1 & pre_reset==0) begin
			$display("Reset Simulation!!! \n");
		end
		
		check_in(pre_moving, moving, current_floor);
		check_out(pre_moving, moving, current_floor, fee);
		check_moving_elevator(pre_current_floor, current_floor);
		check_leakage(leakage, leakage_floor);

		if (pre_reset == 0 & reset == 0) begin		//  check during simulation
			if( (current_floor > pre_current_floor + 1 ) | (current_floor < pre_current_floor - 1 ) ) begin
				//$display("Minus points!!!! Elevator moved more than two floors in one cycle : %d -> %d\n", pre_current_floor, current_floor);
			end

			// additional condition you want

		end

		// display output
		$display("\n-----------------");
		$display("clock count : %d ", clk_cnt);
		$display("license_plate  :  %d %d %d %d ", license_plate[15:12], license_plate[11:8], license_plate[7:4], license_plate[3:0]);
		$display("in_mode : %d ", in_mode);
		$display("out_mode : %d ", out_mode);
		$display("current leakage:  %b ", leakage);
		$display("current leakage_floor:  %b ", leakage_floor);
		
		$display("current todo_exists  :  %b ", todo_exists);
		$display("current todo_in  :  %b ", todo_in);
		$display("current todo_out  :  %b ", todo_out);
		$display("current todo_leak_move  :  %b ", todo_leak_move);
		$display("current todo_license_plate  :  %b ", todo_license_plate);
		
		
		$display("current target_floor  :  %d", target_floor); 
		$display("current target_place  :  %b", target_place);
		
		$display("floor 7  : %b | %d %d %d %d | %d %d %d %d", (current_floor == 7)? 1'b1 : 1'b0, parked_7[31:28], parked_7[27:24], parked_7[23:20], parked_7[19:16], parked_7[15:12], parked_7[11:8], parked_7[7:4], parked_7[3:0]);
		$display("floor 6  : %b | %d %d %d %d | %d %d %d %d", (current_floor == 6)? 1'b1 : 1'b0, parked_6[31:28], parked_6[27:24], parked_6[23:20], parked_6[19:16], parked_6[15:12], parked_6[11:8], parked_6[7:4], parked_6[3:0]);
		$display("floor 5  : %b | %d %d %d %d | %d %d %d %d", (current_floor == 5)? 1'b1 : 1'b0, parked_5[31:28], parked_5[27:24], parked_5[23:20], parked_5[19:16], parked_5[15:12], parked_5[11:8], parked_5[7:4], parked_5[3:0]);
		$display("floor 4  : %b | %d %d %d %d | %d %d %d %d", (current_floor == 4)? 1'b1 : 1'b0, parked_4[31:28], parked_4[27:24], parked_4[23:20], parked_4[19:16], parked_4[15:12], parked_4[11:8], parked_4[7:4], parked_4[3:0]);
		$display("floor 3  : %b | %d %d %d %d | %d %d %d %d", (current_floor == 3)? 1'b1 : 1'b0, parked_3[31:28], parked_3[27:24], parked_3[23:20], parked_3[19:16], parked_3[15:12], parked_3[11:8], parked_3[7:4], parked_3[3:0]);
		$display("floor 2  : %b | %d %d %d %d | %d %d %d %d", (current_floor == 2)? 1'b1 : 1'b0, parked_2[31:28], parked_2[27:24], parked_2[23:20], parked_2[19:16], parked_2[15:12], parked_2[11:8], parked_2[7:4], parked_2[3:0]);
		$display("floor 1  : %b | %d %d %d %d | %d %d %d %d", (current_floor == 1)? 1'b1 : 1'b0, parked_1[31:28], parked_1[27:24], parked_1[23:20], parked_1[19:16], parked_1[15:12], parked_1[11:8], parked_1[7:4], parked_1[3:0]);
		$display("floor 0  : %b", (current_floor == 0)? 1'b1 : 1'b0);
		$display("moving  :  %d %d %d %d", moving[15:12], moving[11:8], moving[7:4], moving[3:0]);		
		$display("plate type  :  %b ", plate_type);
		$display("fee leakage:  %b ", fee);
		$display("------------------------------------------\n");
		
		
		
	end	 


	//update pre_values
	always @(posedge clock) begin	
		pre_reset <= reset;
 		pre_parked_1 <= parked_1;
		pre_parked_2 <= parked_2;
		pre_parked_3 <= parked_3;
		pre_parked_4 <= parked_4;
		pre_parked_5 <= parked_5;
		pre_parked_6 <= parked_6;
		pre_parked_7 <= parked_7;
		pre_current_floor <= current_floor;
		pre_moving <= moving;
		pre_plate_type <= plate_type;

	end


	task check_in(input[15:0] pre_moving, input[15:0] moving, input[2:0] current_floor);
		begin
			if((pre_moving != moving) & moving > 0) begin
				$display("%d %d %d %d is onboard elevator. Current floor : %d\n", moving[15:12], moving[11:8], moving[7:4], moving[3:0], current_floor);
			end
		end
	endtask


	task check_out(input[15:0] pre_moving, input[15:0] moving, input[2:0] current_floor, input[7:0] fee);
		begin
			if((pre_moving != moving) & moving==0) begin
				$display("%d %d %d %d is getting out of elevator. Current floor : %d\n", pre_moving[15:12], pre_moving[11:8], pre_moving[7:4], pre_moving[3:0], current_floor);
				if (current_floor == 0) begin
					$display("Parking fee = %d cents\n", fee);
				end
			end
		end
	endtask
			

	task check_moving_elevator(input[2:0] pre_current_floor, input[2:0] current_floor);
		begin
			if((pre_current_floor != current_floor)) begin
				$display("Elevator position: %d --> %d\n", pre_current_floor, current_floor);
			end
		end

	endtask

	task check_leakage(input leakage, input[2:0] leakage_floor);
		begin
			if(leakage) begin
				$display("Leakage at floor %d!\n", leakage_floor);
			end
		end

	endtask
	
	// additional task you want
	
	
			
endmodule