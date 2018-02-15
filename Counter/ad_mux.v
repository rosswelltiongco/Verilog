`timescale 1ns / 1ps
 //////////////////////////////////////////////////////////////////////////////////
// File name: ad_mux.v
// 
// 
// Created by        Rosswell Tiongco on 2/13/18
// Copyright © 2018  Rosswell Tiongco. All rights reserved.
//
// In submitting this file for class work at CSULB
// I am confirming that this is my work and the work
// of no one else. In submitting this code I acknowledge that
// plagiarism in student project work is subject to dismissal
// from the class
//
//////////////////////////////////////////////////////////////////////////////////
module ad_mux( d0, d1, d2, d3, d4, d5, d6, d7, sel, Y );
	

	input [3:0] d0, d1, d2, d3, d4, d5, d6, d7;
	input [2:0] sel;
	
	/*
	the 4 bit output is one of the d0-d7 inputs selected by the 3 bit selector
	*/
	output reg [3:0] Y;
	
	/*
	this block changes the output based on the current case of the 3 bit sel
	*/
	always@( * )begin
		case( sel )
			3'b000   : Y = d0;
			3'b001   : Y = d1;
			3'b010   : Y = d2;
			3'b011   : Y = d3;
			3'b100   : Y = d4;
			3'b101   : Y = d5;
			3'b110   : Y = d6;
			3'b111   : Y = d7;
		   default  : Y = 4'b0000;	//default set to zero
		endcase
	end

endmodule
