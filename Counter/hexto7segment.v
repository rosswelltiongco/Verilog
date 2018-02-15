`timescale 1ns / 1ps
 //////////////////////////////////////////////////////////////////////////////////
// File name: hextosegment.v
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
module hextosegment( hex, seg );

	input [3:0] hex;
	output reg [6:0] seg;

	always@( * ) begin
		case( hex )
			4'h0    : seg = 7'b0000001;	//hex 0
			4'h1    : seg = 7'b1001111;	//hex 1
			4'h2    : seg = 7'b0010010;	//hex 2
			4'h3    : seg = 7'b0000110;	//hex 3
			4'h4    : seg = 7'b1001100;	//hex 4
			4'h5    : seg = 7'b0100100;	//hex 5
			4'h6    : seg = 7'b0100000;	//hex 6
			4'h7    : seg = 7'b0001111;	//hex 7
			4'h8    : seg = 7'b0000000;	//hex 8
			4'h9    : seg = 7'b0001100;	//hex 9
			4'hA    : seg = 7'b0001000;	//hex A
			4'hB    : seg = 7'b1100000;	//hex B
			4'hC    : seg = 7'b0110001;	//hex C
			4'hD    : seg = 7'b1000010;	//hex D
			4'hE    : seg = 7'b0110000;	//hex E
			4'hF    : seg = 7'b0111000;	//hex F
		   default : seg = 7'b1111110;	//default: error message
		endcase
	end
	
endmodule
