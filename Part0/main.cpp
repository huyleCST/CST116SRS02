// Part0.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> // Needed for cout
#include <iomanip> // Needed for setw
using std::cout;
using std::endl;
using std::setw;
using namespace std;

int main()
{
	double money_West, money_Midwest, money_East, money_South;
	money_West = 36364.87F;
	money_Midwest = 12431.33F;
	money_East = 127690.50F;
	money_South = 9200.00F;

	std::cout.imbue(std::locale("en-US"));
	
	std::cout << setw(3) << "" << "West:" << setw(1) << "" << "$ " << fixed << setprecision(2)<< money_West << endl;
	std::cout << "Midwest:" << setw(2) << "$" << setw(1)<< "" << fixed << setprecision(2) << money_Midwest << endl;
	std::cout << setw(3) << "" << "East:" << setw(1) << "" << "$" << fixed << setprecision(2) << money_East << endl;
	std::cout << setw(2) << "" << "South: " << setw(0) << "" << "$ " << setw(1) << "" << fixed << setprecision(2) << money_South << endl;
    return 0;
}

