// Implementation for the class HourlyEmployee.

#include "HourlyEmployee.h"

//default constructor
HourlyEmployee::HourlyEmployee()
{
	//Only need to set up the var of this class.
	wageRate = 0;
}

//overloaded constructor
HourlyEmployee::HourlyEmployee
	(const string& newSSN, double newRate)
	:Employee(newSSN)
{
	//No need to set ssn.
	//Only need to set up the var of this class.
	wageRate = newRate;
}

//setRate
void HourlyEmployee::setRate(double newRate)
{
  wageRate = newRate;
}

//getRate
double HourlyEmployee::getRate() const
{
  return wageRate;
}

//printInfo
void HourlyEmployee::printInfo() const
{
	cout << "SSN: " << getSSN() << endl;

	//printing the output using the parent's accessor function
	cout << "Rate: " << wageRate << endl;

	//printing the output using the parent's print function
	//Employee::print();
}

//destructor
HourlyEmployee::~HourlyEmployee()
{
}
