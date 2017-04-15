#include "std_lib_facilities.h"
#ifndef HEADER_H_
#define HEADER_H_

//const variable declarations
string const prompt = "Enter a binary value : \n";
string const str_binary;
extern int const value;


//function declarations
string get_input(string const& prompt);
bool validate_input(string const& str_binary);
int bits_2_int(string const& str_binary);
void display_dec_int(int value);
void display_hex_int(int value);
bool is_printable(int ch);

#endif