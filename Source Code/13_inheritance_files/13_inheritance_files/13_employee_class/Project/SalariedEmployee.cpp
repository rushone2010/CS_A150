// SalariedEmployee.cpp
// This is the implementation for the class SalariedEmployee.

#include "SalariedEmployee.h"

	//default constructor
SalariedEmployee::SalariedEmployee( )
{
    salary = 0.0;
}

	//overloaded constructor
SalariedEmployee::SalariedEmployee(const string& newSSN,
             double newWeeklyPay) :Employee(newSSN)
{
	salary = newWeeklyPay;
}

	//getSalary
double SalariedEmployee::getSalary( ) const
{
    return salary;
}

	//setSalary
void SalariedEmployee::setSalary(double newSalary)
{
    salary = newSalary;
}

	//print
void SalariedEmployee::print() const
{
	cout << salary << endl;
	cout << ssn << endl;

}

	//destructor
SalariedEmployee::~SalariedEmployee()
{
}
