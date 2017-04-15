
#include "Header.h"


string get_input(string const& prompt)
{
	/*This function prompts the user for a binary number
	which is then stored as a string in the str_binary variable*/
	string str_binary;
	cout << prompt;
	cin >> str_binary;
	return str_binary;
	return string(str_binary);
}




bool validate_input(string const& str_binary)
{
	/*This function takes the str_binary variable
	and validates that it represents a binary number by checking
	that each character is either a '0' or '1' using a for loop.*/
	for (char x : str_binary)
	{
		if (x != '0'&& x != '1')
		{
			//If the input from the user does not represent a binary number they are prompted to try again
			cout << "The number you have entered is not binary! Try again... \n";
			return false;
		}

	}
	return true;
}




int bits_2_int(string const& str_binary)
{
	/*This function reverses str_binary using a for loop that counts backwards 
	from the length of str_binary to 0. Each character of str_binary is added to
	the variable reverse_str.

	Reversing str_binary makes the binary conversion to decimal easier
	*/
	string reverse_str = "";
	int decimal = 0;

	for (int x = str_binary.length() - 1; x >= 0; --x)
	{
		reverse_str += str_binary.at(x);
	}

	/*The loop below is where reverse_str is converted into a decimal number*/
	for (int i = 0; i < reverse_str.length(); ++i)
	{
		if (reverse_str.at(i) == '1')
		{
			decimal += pow(2, i);
		}

	}
	return decimal;
}


void display_dec_int(int value)
{
	/*This simple function takes the decimal value
	created by bits_2_int() and prints it to the screen*/
	cout <<"Dec : "<< dec << value << '\n';
}

void display_hex_int(int value)
{
	/*This function prints the hexadecimal value to 
	to the screen by using the hex stream manipulator*/
	cout<<"Hex : " << hex << value << '\n';
}


bool is_printable(int ch)
{
	/*This function checks whether the value is a printable 
	character by checking whether it is between 1-255*/
	if (0 < ch && ch <= 255 && isprint(ch)) {
		// This is a printable character:
		return true;
	}
	else {
		// Not a printable character:
		return false;
	}
}