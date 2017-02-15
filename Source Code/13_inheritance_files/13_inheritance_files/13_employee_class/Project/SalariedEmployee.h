// (name header)

//This is the header file SlariedEmployee.h
//This is the interface for the class SalariedEmployee.

#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include "Employee.h"

#include <string>
#include <iostream>
using namespace std;

//Here is where we declare that 
// the class HourlyEmployee is the derived class
// and the class Employee is the base class
class SalariedEmployee : public Employee
{
public:
	SalariedEmployee( );
    SalariedEmployee (const string& newSSN, double newWeeklyPay);

	void setSalary(double newSalary); 
    double getSalary( ) const;

	void print() const;

	~SalariedEmployee();

private:
	//weekly salary
    double salary;
};

#endif 