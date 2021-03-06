// BCS 230 Assignment 06.cpp 
// Ian Liotta

#include "stdafx.h"
#include <iostream>
#include <iomanip>
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

	cout << fixed << setprecision(2);
	// output values of array & calculate net pay
	for (PayRoll emp : employee) {
		cout << "Hours: " << setw(5) << emp.getHours() <<
			setw(10) << "Rate: " << setw(5) << emp.getRate() <<
			setw(10) << "Net: $" << setw(5) << emp.calcNet(.2) << endl;
	}
    return 0;
}

