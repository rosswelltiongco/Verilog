module debounce(clk_in, reset, sw, db);

	input wire clk_in, reset;
	input wire sw;
	output reg db;


	
	parameter
		zero  = 3'b000,
		st0_1 = 3'b001,
		st0_2 = 3'b010,
		st0_3 = 3'b011,
		one   = 3'b100,
		st1_1 = 3'b101,
		st1_2 = 3'b110,
		st1_3 = 3'b111;
	//=============Generating Tick====================
 //count
 wire tick;
 reg [19:0] count;
 // if hit 999999, reset 0
 assign tick = (count == 999999) ? 1'b1: 1'b0;
 
	always @ (posedge clk_in, posedge reset)
		if (reset)
			count <= 20'b0;
			else if (tick)
				count <= 20'b0;
				else 
					count <= count + 20'b1;
// ================================================	
	
	
//=============state machine seq logic======================	
reg [2:0] p_s;
reg [2:0] n_s;

	always @ (posedge clk_in, posedge reset)
		if (reset)
			p_s <= zero;
		else
			p_s <= n_s;
	
	
	
	
//=================================================

//=========state machine combo logic=============
	
	always @ (*)
		begin
			n_s = p_s;
			db = 1'b0;
			case(p_s)
			 zero:
			  if (sw)
					n_s = st1_1;
			 st1_1:
					if(~sw)
						n_s = zero;
					else
						if (tick)
							n_s = st1_2;
			 st1_2:
				if (~sw)
					n_s = zero;
				else 
					if (tick)
						n_s = st1_3;
			 st1_3:
				if (~sw)
					n_s = zero;
				else
					if(tick)
						n_s = one;
			 one:
				begin
				db = 1'b1;
				if(~sw)
					n_s = st0_1;
				end
			 st0_1:
			 begin
				db = 1'b1;
				if(sw)
					n_s = one;
				else
					if (tick)
						n_s = st0_2;
				end
			 st0_2:
			 begin
				db = 1'b1;
				if(sw)
					n_s = one;
				else
					if (tick)
						n_s = st0_3;
				end
			 st0_3:
			 begin
			 db = 1'b1;
				if(sw)
					n_s = one;
				else
					if (tick)
						n_s = zero;
				end
			default : n_s = zero;
		endcase
	end

endmodule 