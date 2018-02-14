`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:32:49 02/12/2018 
// Design Name: 
// Module Name:    dflop 
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
module dflop(clk, rst, d, q);
   input clk, rst;
   input d;
   output reg q;
   
   always @ (posedge clk, posedge rst)
      if (rst) q <= 1'b0;
      else q <= d;

endmodule
