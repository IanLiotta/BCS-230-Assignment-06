#include "stdafx.h"
#include "PayRoll.h"


PayRoll::PayRoll()
{
	hourlyRate = 0.0;
	hoursWorked = 0.0;
}

void PayRoll::setRate(double rate) {
	hourlyRate = rate;
}

double PayRoll::getRate() {
	return hourlyRate;
}

void PayRoll::setHours(double hours) {
	hoursWorked = hours;
}

double PayRoll::getHours() {
	return hoursWorked;
}

double PayRoll::calcNet(double taxRate) {
	double tax = (hoursWorked * hourlyRate) * taxRate;
	return (hoursWorked * hourlyRate) - tax;
}