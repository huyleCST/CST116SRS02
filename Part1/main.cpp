// Part1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> // Needed for cout
using std::endl;

int main()
{	
	double user_Input;
	std::cout << "Enter a number: ";
	std::cin >> user_Input;
	
	//display user input
	std::cout << std::scientific << user_Input << endl;
    return 0;
}

