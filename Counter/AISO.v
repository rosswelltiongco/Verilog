`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:12:57 02/12/2018 
// Design Name: 
// Module Name:    AISO 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module AISO(clk, rst, rst_synch);
   input clk, rst;
   output rst_synch;

   wire qMeta, qOk;
   
   assign rst_synch = ~qOk;

   //dflop(clk, rst, d, q)
   dflop u1 (clk, rst, 1'b1, qMeta);
   dflop u2 (clk, rst, qMeta, qOk);
   

endmodule 