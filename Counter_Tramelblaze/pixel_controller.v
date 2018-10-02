`timescale 1ns / 1ps
 //****************************************************************//
// File name: pixel_controller.v
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
module pixel_controller( clk, reset, a, sel );
	input            clk, reset;
	output reg [7:0] a;
	output reg [2:0] sel;

	reg [3:0] p_s, n_s;

	always @ (p_s)
		case(p_s) 
			3'b000   : n_s = 3'b001;
			3'b001   : n_s = 3'b010;			
			3'b010   : n_s = 3'b011;
			3'b011   : n_s = 3'b100;
			3'b100   : n_s = 3'b101;
			3'b101   : n_s = 3'b110;
			3'b110   : n_s = 3'b111;
			3'b111   : n_s = 3'b000;
			default  : n_s = p_s;
		endcase

	always@( posedge clk or posedge reset )
		if( reset == 1'b1 )
			p_s = 3'b000; //Sets the state back to 0
		else
			p_s = n_s; //Update state register with next state
			
	always@ (  p_s  )
		case( p_s )
			3'b000   : {a, sel} = 11'b1111_1110_000;
			3'b001   : {a, sel} = 11'b1111_1101_001;
			3'b010   : {a, sel} = 11'b1111_1011_010;
			3'b011   : {a, sel} = 11'b1111_0111_011;
			3'b100   : {a, sel} = 11'b1110_1111_100;
			3'b101   : {a, sel} = 11'b1101_1111_101;
			3'b110   : {a, sel} = 11'b1011_1111_110;
			3'b111   : {a, sel} = 11'b0111_1111_111;
		   default  : a = 8'b1111_1111; //Turn all anodes off with no select
		endcase
		
endmodule
