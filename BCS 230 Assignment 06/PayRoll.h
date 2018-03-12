#ifndef PAYROLL_H
#define PAYROLL_H

class PayRoll
{
private:
	double hourlyRate;
	double hoursWorked;
public:
	PayRoll();
	void setRate(double);
	double getRate();
	void setHours(double);
	double getHours();
	double calcNet(double);
};

#endif // !PAYROLL_H



