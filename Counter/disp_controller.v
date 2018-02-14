`timescale 1ns / 1ps
 /******************************************************************************
 *

 * Purpose  : this module is a sub-top level module that instantiates a clock,
 *			     pixel controller, multiplexer and the hex-to-7segment decoder.
 *             
 * Notes    : N/A
 *
 ******************************************************************************/
module disp_controller(clk, reset, d0, d1, d2, d3, d4, d5, d6, d7, anode, seg);

	/*
	'clk' is the 100Mhz input from the NEXYS 4 DDR
	'reset' is a local button on the NEXYS 4 DDR
	the (8) 4 bit d0-d7 inputs are hex inputs to be displayed on the anodes
	*/
	input        clk, reset;
	input  [3:0] d0, d1, d2, d3, d4, d5, d6, d7;
	
	/*
	the 8 bit 'anode' is to select which anode on the FPGA will output the 
	7 bit segment display
	*/
	output [7:0] anode;
	output [6:0] seg;

	/*
	'pixel_w' is the clock frequency from pixel_clk to pixel_controller
	'sel_w' is the 3 bit selector for the ad_mux multiplexer
	'hex_w' is the selected d0-d7 inputs to be sent to hextosegment for decoding
	*/
	wire  	  pixel_w;
	wire [2:0] sel_w;
	wire [3:0] hex_w;

	/*
	this module will divide the FPGA clock down to 480hz to allow the 
	pixel_controller to display at 60hz per anode.
	*/
   
   //pixel_clk(clk_in, reset, tick);
	pixel_clk 				u1 ( clk, reset, pixel_w );
	
	/*
	the pixel_controller will select which anode to turn on and which data
	to display based from the ad_mux.
	*/
	pixel_controller		u2 ( pixel_w, reset, anode, sel_w );
	
	/*
	ad_mux will be given all anode display data and select which one to output
	to the hextosegment for decoding.
	*/
	ad_mux					u3 ( d0, d1, d2, d3, d4, d5, d6, d7, sel_w, hex_w );
	
	/*
	this module is simply a decoder to display hexadecimal characters onto
	the NEXYS 4 DDR anodes.
	*/
	hextosegment			u4 ( hex_w, seg );

endmodule
