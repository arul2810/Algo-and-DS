/* 2s_Complement
* ---------------------
* By: Arul Prakash Samathuvamani | hello@arulprakash.dev
* For: Interview Prep - Revision
* 
*
* Date : 27th Jan 2022 GMT
*
* Module Description:
* ------------------
* Finding 2's Complement of an input Binary number. No parallel processing, module does not accept
* inputs untill output is obtained for the first output.
* 
*/


// Declaration of module 2s_Complement

module twos_Complement #(

	/* Parameters for the module
	
	NUMBER_OF_BITS -> Number of bits for input binary number
	
	*/
	
	parameter NUMBER_OF_BITS = 3 // Default value for the parameters is 3.
	
) (

	/* Input PINS Description
	
	Pin Name				|	Description
							|
	input_value			|	Input binary number
	clock					|	Input clock
	
	*/
	
	input clock,
	input [NUMBER_OF_BITS:0] input_value,
	
	
	/* Output PINS Declaration
	
	PIN Description
	
	Pin Name				|	Description
							|
	complement			|	Output 2's complement of binary number
	
	*/
	
	output reg [NUMBER_OF_BITS:0] complement
	
);

// ------------------------------------------------------------------------------------------------

// Declaration of states for the module

localparam STATE1 = 2'b00;  // State where 1's complement of the number is taken
localparam STATE2 = 2'b01;  // State where 1 is added to the 1's complement

// Register to store the current state

reg [ NUMBER_OF_BITS : 0 ] ones_complement = 0;

reg [ 2:0] STATE = 2'b0;


// ------------------------------------------------------------------------------------------------

// Procedural block to change the state of the system in every clock

always @ ( posedge clock ) begin

	// At each clock the system changes from STATE1 -> STATE2 -> STATE1 ....


	case ( STATE ) 
	
		STATE1 : begin
		
			STATE <= 2'b01;
			
		end
		
		STATE2 : begin
		
			STATE <= 2'b00;
			
		end
		
		default : begin
		
			STATE <= 2'b00;
		
		end
	
		
	endcase
	
end

// --------------------------------------------------------------------------------------------------

always @ ( posedge clock ) begin

	case ( STATE ) 
	
		STATE1 : begin
		
			ones_complement <= ~input_value;
			
		end
		
		STATE2: begin
		
			complement <= ones_complement + 1'b1;
			
		end
		
	endcase
	
end

endmodule

			
		
			
