`timescale 1ns / 1ps
//****************************************************************//
// File name: Top_Level_tb.v
//
// Created by       Rosswell Tiongco on <10/01/18>. 
// Copyright © 2018 Rosswell Tiongco. All rights reserved.
// 
// 
// In submitting this file for class work at CSULB
// I am confirming that this is my work and the work
// of no one else. In submitting this code I acknowledge that
// plagiarism in student project work is subject to dismissal
// from the class. 
//****************************************************************//

module Top_Level_tb;

	// Inputs
	reg clk;
	reg rst;
	reg step;
	reg switch;

	// Outputs
	wire [7:0] an;
	wire [6:0] hex_out;

	// Instantiate the Unit Under Test (UUT)
	Top_Level uut (
		.clk(clk), 
		.rst(rst), 
		.step(step), 
		.switch(switch), 
		.an(an), 
		.hex_out(hex_out)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		rst = 1;
		step = 0;
		switch = 1;

		// Wait 100 ns for global reset to finish
		#100;
        rst = 0;
        
		// Add stimulus here
	end
    
    always #5  clk = ~clk;
    always #30000000 step = ~ step;
    always #200000000 switch= ~ switch;

endmodule

