// Accelerated CPP - Chapter 0 Exercises.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	
	//0.0
	cout << "Hello, world!" << endl;

	//0.1
	3 + 4;
	//Does not send anything to output stream. Perhaps information is sent to the buffer? No data type
	//given so not valid code, however the code is compiled successfully.

	//0.2
	cout << "This (\") is a quote, and this (\\) is a backslash." << endl;

	//0.3
	cout << "*\t<-- Space \nSpace-->\t*" << endl;

	//0.4
	//As above

	//0.5
	//int main() std::cout << "Hello, world!" << std:endl;
	//The program is not valid as there are not parenthisis to enclose the function's code and also set
	//the scope of code within the function.

	//0.6
	//int main () {{{{{ std::cout << "Hello, world!" << std:: endl; }}}}}
	//The program is valid because the parenthesis just state the scope of the code set within, not affecting
	//the actual code itself, unless of course scope does affect how the program runs, in this case is it negligable.

	//0.7
	//This code will not compile because a single "*/" will end all other "/*"s and therefore two or more "*/" statements
	//render the program uncompileable.

	//0.8
	//This program is invalid as there is a start of a multi-line comment but not a finishing one.
	//A backslash should be used to render the multi-line comment invalid.

	//0.9
	/*
	int main(){return 0;}
	*/

	//0.10
	cout << "Hello,\nworld!" << endl;
	return 0;
}