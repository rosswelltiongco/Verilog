`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:50:54 02/14/2018
// Design Name:   Top_Level
// Module Name:   C:/Users/Rosswell/Documents/Verilog/Counter/Top_Level_tb.v
// Project Name:  Counter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Top_Level
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Top_Level_tb;

	// Inputs
	reg clk;
	reg rst;
	reg uphdnl;
	reg step;

	// Outputs
	wire [6:0] seg;
	wire [7:0] anode;
	wire [7:0] count_out;

	// Instantiate the Unit Under Test (UUT)
	Top_Level uut (
		.clk(clk), 
		.rst(rst), 
		.uphdnl(uphdnl), 
		.step(step), 
		.seg(seg), 
		.anode(anode), 
		.count_out(count_out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		uphdnl = 0;
		step = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

