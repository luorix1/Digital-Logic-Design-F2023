`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:    SNU 
// Engineer:    SNUCAD 
// 
// Create Date:    11/08/2021 
// Design Name:    Traffic Light Controller 
// Module Name:    tlc_top 
// Project Name:    TLC 
// Description:    Digital Logic Design and Lab (2021, Fall semester, 430.201A_001) 
//
// Revision 0.01 - File Created
//
//////////////////////////////////////////////////////////////////////////////////
module tlc_top(
    input MCLK,
    input RESET,
    input HS,
    input FS,
    output [7:0] LED,
    output [3:0] ANODE,
    output [7:0] SEG
    );
    
    wire CLOCK;
    wire RESET_OUT;
    
    wire HS_OUT;
    wire FS_OUT;
    
    wire HGREEN;
    wire HLEFT;
    wire HYELLOW;
    wire HRED;
    wire FLEFT;
    wire FYELLOW;
    wire FRED;
    
    make_clk MAKE_CLK(
        .MCLK (MCLK),
        .RESET_IN (RESET),
        .CLOCK (CLOCK),
        .RESET_OUT (RESET_OUT)
        );
    
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
        .RESET (RESET_OUT),
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
    
    output_logic OUTPUT_LOGIC(
        .MCLK (MCLK),
        .CLOCK (CLOCK),
        .HGREEN (HGREEN),
        .HLEFT (HLEFT),
        .HYELLOW (HYELLOW),
        .HRED (HRED),
        .FLEFT (FLEFT),
        .FYELLOW (FYELLOW),
        .FRED (FRED),
        .HS (HS_OUT),
        .FS (FS_OUT),
        .LED (LED),
        .ANODE (ANODE),
        .SEG (SEG)
        );

endmodule
