`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// File name: disp_controller.v
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

//* Purpose  : Structural module that instantiates a clock multiple modules
//////////////////////////////////////////////////////////////////////////////////
module disp_controller(clk, reset, d0, d1, d2, d3, d4, d5, d6, d7, anode, seg);
	input        clk, reset;
	input  [3:0] d0, d1, d2, d3, d4, d5, d6, d7;
	
	output [7:0] anode;
	output [6:0] seg;


	wire  	  pixel_w;
	wire [2:0] sel_w;
	wire [3:0] hex_w;
   
   //Slows down the clock
   //pixel_clk(clk_in, reset, tick);
	pixel_clk 				u1 ( clk, reset, pixel_w );
     
   //Selects the anode and the data to be displayed on it
	pixel_controller		u2 ( pixel_w, reset, anode, sel_w );
	
   //Selects what to display on any anode
	ad_mux					u3 ( d0, d1, d2, d3, d4, d5, d6, d7, sel_w, hex_w );
	
   //Decodes hex to the anodes
	hextosegment			u4 ( hex_w, seg );

endmodule
