`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// File name: Top_Level.v
// 
// 
// Created by        Rosswell Tiongco on 2/14/18
// Copyright © 2018  Rosswell Tiongco. All rights reserved.
//
// In submitting this file for class work at CSULB
// I am confirming that this is my work and the work
// of no one else. In submitting this code I acknowledge that
// plagiarism in student project work is subject to dismissal
// from the class
//////////////////////////////////////////////////////////////////////////////////

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
		rst = 1;
		uphdnl = 1;
		step = 0;

		// Wait 100 ns for global reset to finish
		#100 rst = 0;
      //#200 uphdnl = 0;  
		// Add stimulus here
	end

   
   always #5 clk = ~clk;
   always #30000000 step = ~ step;
   always #100000000 uphdnl = ~uphdnl;
      
endmodule

