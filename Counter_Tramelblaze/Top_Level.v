`timescale 1ns / 1ps
//****************************************************************//
// File name: Top_Level.v
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
module Top_Level(clk, rst, step, switch, an, hex_out);
	input        clk, rst, step, switch;
	output [7:0] an;
	output [6:0] hex_out;
	
	wire rst_synch, db_out, ped_out, sr_out, tick, int_ack_wire, we;
	wire   [15:0] portid_out;
	wire   [15:0] count_out;
	wire   [15:0] flop_count;
	
  //AISO          ( clk     ,  rst     ,  rst_synch           );
	AISO		u0(.clk(clk), .rst(rst), .rst_synch(rst_synch));
	
  //debounce   ( clk     ,  rst           ,  sw      ,  p_o         )  
	debounce u1(.clk(clk), .rst(rst_synch), .sw(step), .p_o(db_out));
	
  //PED       ( clk     ,  rst           ,  level        ,  tick       );
	PED 	u2(.clk(clk), .rst(rst_synch), .level(db_out), .tick(ped_out));
	
  //SR_flop    (clk    s ,  rst           , s, r, q);
	SR_flop	u3(.clk(clk), .rst(rst_synch),.s(ped_out), .r(int_ack_wire),.q(sr_out));
	
	tramelblaze_top      u4    (.CLK(clk), 
                               .RESET(rst_synch), 
                               .IN_PORT({15'b0,switch}), 
                               .INTERRUPT(sr_out), 
                               .OUT_PORT(count_out), 
                               .PORT_ID(portid_out), 
                               .READ_STROBE(), 
                               .WRITE_STROBE(we), 
                               .INTERRUPT_ACK(int_ack_wire));
										 
	load_reg_16             u5(.clk(clk), 
                               .rst(rst_synch), 
                               .load(  (portid_out == 16'h0001) && we  ), 
                               .d(count_out), 
                               .q(flop_count)); 
   
    disp_controller         u6(	.clk(clk),
                                .reset(rst_synch), 
                                .d0(flop_count[3:0]), 
                                .d1(flop_count[7:4]), 
                                .d2(flop_count[11:8]),  
                                .d3(flop_count[15:12]), 
                                .d4(4'h0), 
                                .d5(4'h0), 
                                .d6(4'h0), 
                                .d7(4'h0), 
                                .anode(an), 
                                .seg(hex_out));	

endmodule
