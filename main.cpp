/*Binary to Hexadecimal Converter
* Created By: Cole Wuilleumier
* 
* Purpose:
* 1. Takes a binary number from the user
* 2. Converts the binary number to a decimal and a hexadecimal number
* 3. If the binary number input represents an ASCII character, the character is printed to the screen
* 4. Enter "quit" or "exit" to end the program
*/

#include "std_lib_facilities.h"
#include "Header.h"

int main()
{
	while (true)
	{
		//Stores the the user input to str_binary
		string const& str_binary{ get_input(prompt) };

		//Program ends if using enters "quit" or "exit"
		if (str_binary == "exit" || str_binary == "quit") break;

		//If the string input by the user is a binary number then 
		if (validate_input(str_binary))
		{
			int const& value{ bits_2_int(str_binary) }; //cast the decimal version of the str_binary to an int
			display_dec_int(value); //print decimal
			display_hex_int(value); //print hexadecimal
			if (is_printable(value)) //if decimal represents character print the character
			{
				cout <<"Char : "<< char(value) << '\n';
			}

		}
		else
		{
		    continue;
		}
	}
	return 0;
}