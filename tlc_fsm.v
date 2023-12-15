`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:    SNU 
// Engineer:    SNUCAD 
// 
// Create Date:    11/08/2021 
// Design Name:    Traffic Light Controller 
// Module Name:    tlc_fsm 
// Project Name:    TLC 
// Description:    Digital Logic Design and Lab (2021, Fall semester, 430.201A_001) 
//
// Revision 0.01 - File Created
//
//////////////////////////////////////////////////////////////////////////////////
module tlc_fsm(
    input CLOCK,
    input RESET,
    input HS,
    input FS,
    output HGREEN,
    output HLEFT,
    output HYELLOW,
    output HRED,
    output FLEFT,
    output FYELLOW,
    output FRED // tlc example
	 
	 
	 
	 
	 
	 
    );
    // Do not modify the I/O ports above
    
    
    //------------------------------------------------------------------------------------------
    // TO DO BEGIN
    //------------------------------------------------------------------------------------------
    
    
    //---------------------------------------------
    // define state assignment - binary
    //---------------------------------------------
    parameter swidth = 3;
    `define S0 3'b000
    
    
    //---------------------------------------------
    // define output codes
    //---------------------------------------------
    `define O_S0 7'b1000_001    // {HGREEN, HLEFT, HYELLOW, HRED, FLEFT, FYELLOW, FRED}
    
    
    
    // instantiate output register
    reg [6:0] OUT;
    // bind the outputs and assign
    assign {HGREEN, HLEFT, HYELLOW, HRED, FLEFT, FYELLOW, FRED} = OUT;
    
    // instantiate state register
    reg [swidth-1:0] next_state;
    reg [swidth-1:0] curr_state;
    
    
    // next state logic - this is combinational logic
        // Use blocking assignments( = ) in always blocks
        // that are written to generate combinational logic
    always @(*) begin
        if (RESET) begin
            
        end
        else begin
            
        end
    end
    
    // output logic - this is combinational logic
        // Use blocking assignments( = ) in always blocks
        // that are written to generate combinational logic
    always @(*) begin
        
    end
    
    // update current state - this is sequential logic (D flip-flop)
        // Use nonblocking assignments( <= ) in always blocks
        // that are written to generate sequential logic
    always @(posedge CLOCK or posedge RESET) begin
        if (RESET) begin
            
        end
        else begin
            
        end
    end
    
    
    //------------------------------------------------------------------------------------------
    // TO DO END
    //------------------------------------------------------------------------------------------


endmodule
