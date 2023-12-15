`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:    SNU 
// Engineer:    SNUCAD 
// 
// Create Date:    11/08/2021 
// Design Name:    Traffic Light Controller 
// Module Name:    tlc_tb 
// Project Name:    TLC 
// Description:    Digital Logic Design and Lab (2021, Fall semester, 430.201A_001) 
//
// Revision 0.01 - File Created
//
//////////////////////////////////////////////////////////////////////////////////
module tlc_tb(
    );
    
    // Inputs
    reg MCLK;
    reg RESET;
    reg HS;
    reg FS;
    
    // Outputs
    wire HGREEN;
    wire HLEFT;
    wire HYELLOW;
    wire HRED;
    wire FLEFT;
    wire FYELLOW;
    wire FRED;
    
    
    // Instantiate
    reg CLOCK;
    reg [6:0] counter;
    
    wire HS_OUT;
    wire FS_OUT;
    
    data_reg DATA_REG(
        .MCLK (MCLK),
        .HS_IN (HS),
        .FS_IN (FS),
        .HLEFT (HLEFT),
        .FLEFT (FLEFT),
        .HS_OUT (HS_OUT),
        .FS_OUT (FS_OUT)
        );
    
    tlc_fsm TLC_FSM(
        .CLOCK (CLOCK),
        .RESET (RESET),
        .HS (HS_OUT),
        .FS (FS_OUT),
        .HGREEN (HGREEN),
        .HLEFT (HLEFT),
        .HYELLOW (HYELLOW),
        .HRED (HRED),
        .FLEFT (FLEFT),
        .FYELLOW (FYELLOW),
        .FRED (FRED)
        );
    
    wire [6:0] OUT = {HRED, HYELLOW, HLEFT, HGREEN, FRED, FYELLOW, FLEFT};
    
    
    // Initialize Inputs
    
    // clock period: 20 units (50 MHz = 20 ns)
    initial begin
        MCLK = 0;
        forever begin
            #10 MCLK = ~MCLK;
        end
    end
    
    // CLOCK signal - 5 us clock period
    always @(posedge MCLK) begin
        // reset
        if (RESET) begin
            counter <= 7'd0;
            CLOCK <= 1'b0;
        end
        else begin
            // if counter reaches desired timing: 2.5us (= 5us/2)
            // Simulator has a 50 MHz clock oscillator
            if (counter == 7'd124) begin
                counter <= 7'd0;    // reset counter
                CLOCK <= ~CLOCK;    // invert CLOCK
            end
            else begin
                counter <= counter + 1;
            end
        end
    end
    
    initial begin
        $monitor($time,
            " ns.    output changed\t=> HRED: %b, HYELLOW: %b, HLEFT: %b, HGREEN: %b, FRED: %b, FYELLOW: %b, FLEFT: %b\n",
            HRED, HYELLOW, HLEFT, HGREEN, FRED, FYELLOW, FLEFT
            );
    end
    
    initial begin
        HS = 0;
        FS = 0;
        RESET = 1;    //reset
        
        #25 RESET = 0;    // remove reset
        
        #3735;    // Wait 3735 ns for global reset to finish
        
        
        // Step 1. HS when HGREEN/FRED
        $display("\nStep 1. HS when HGREEN/FRED\n");
        $display($time, " ns.    HS on\n");
        HS = 1;
        #5000;    // HGREEN/FRED - detected a left-turn car on H
        check_data (7'b0001_100, OUT);
        #5000;    // HYELLOW/FRED - detected a left-turn car on H
        check_data (7'b0100_100, OUT);
        #5000;    // HLEFT/FRED - turned on the HLEFT signal
        check_data (7'b0010_100, OUT);
        $display($time, " ns.    HS off\n");
        HS = 0;
        #5000;    // HYELLOW/FRED - turned off the HLEFT signal
        check_data (7'b0100_100, OUT);
        #5000;    // HGREEN/FRED - returned to the HGREEN signal
        check_data (7'b0001_100, OUT);
        #5000;
        
        //------------------------------------------------------------------------------------------
        // TO DO BEGIN
        //------------------------------------------------------------------------------------------
        
        // Step 2. FS when HGREEN/FRED
        $display("\nStep 2. FS when HGREEN/FRED\n");
        $display($time, " ns.    FS on\n");
        FS = 1;
        #5000;    // 
        #5000;    // 
        #5000;    // 
        #5000;    // 
        #5000;    // 
        #5000;
        
        // Step 3. HS & FS when HGREEN/FRED
        $display("\nStep 3. HS & FS when HGREEN/FRED\n");
        $display($time, " ns.    HS & FS on\n");
        HS = 1;
        FS = 1;
        #5000;    // 
        #5000;    // 
        #5000;    // 
        #5000;    // 
        #5000;    // 
        #5000;    // 
        #5000;    // 
        #5000;
        
        // Step 4. FS when HGREEN/FRED -> HS when HYELLOW/FRED
        $display("\nStep 4. FS when HGREEN/FRED -> HS when HYELLOW/FRED\n");
        $display($time, " ns.    FS on\n");
        FS = 1;
        #5000;    // 
        #5000;    // 
        #5000;    // 
        #5000;    // 
        #5000;    // 
        #5000;    // 
        #5000;    // 
        #5000;    // 
        #5000;    // 
        #5000;    // 
        #5000;

        // Step 5. HLEFT/FRED -> FS when HYELLOW/FRED
        $display("\nStep 5. HLEFT/FRED -> FS when HYELLOW/FRED\n");        
        $display($time, " ns.    HS on\n");
        HS = 1;
        #5000;    // 
        #5000;    // 
        #5000;    // 
        #5000;    // 
        #5000;    // 
        #5000;    // 
        #5000;    // 
        #5000;    // 
        #5000;    // 
        #5000;    // 
        #5000;
        
        //------------------------------------------------------------------------------------------
        // TO DO END
        //------------------------------------------------------------------------------------------
        
        $display($time, " ns.    Finish Simulation!!!\n");
        $finish;
    end
    
    
    //---------------------------------------------
    // define task
    //---------------------------------------------
    task check_data (input [6:0] result_expected, input [6:0] result);
        begin
            if (result_expected == result) begin
                $display("\t\tResult is correct!\n\n");
            end
            else begin
                $display("\t\tResult is different!");
                $display("\t\t\tExpected value: %b_%b", result_expected[6:3], result_expected[2:0]);
                $display("\t\t\tOutput value: %b_%b\n\n", result[6:3], result[2:0]);
                $display($time, " ns.    Terminate Simulation...\n");
                $finish;
            end
        end
    endtask


endmodule
