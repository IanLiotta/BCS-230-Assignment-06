// BCS 230 Assignment 06.cpp 
// Ian Liotta

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include "PayRoll.h"
using namespace std;

int main()
{
	PayRoll employee[11];
	ifstream inFile("payroll.dat");
	int i = 0;
	double input;

	//read payroll.dat and copy values to array
	while (inFile >> input && i < 11) {
		employee[i].setHours(input);
		inFile >> input;
		employee[i].setRate(input);
		i++;
	}

	// output values of array
	for (PayRoll emp : employee) {
		cout << "Hours: " << emp.getHours() << "  Rate: " << emp.getRate() << endl;
	}
    return 0;
}

