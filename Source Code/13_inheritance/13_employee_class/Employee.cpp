// Implementation of class Employee

#include "Employee.h"

//default constructor
Employee::Employee()
{
}

//overloaded constructor
Employee::Employee(const string& newSSN)
{
  ssn = newSSN;
}

//getSSN
string Employee::getSSN() const
{
  return ssn;
}

//setSSN
void Employee::setSSN(const string& newSsn)
{
  ssn = newSsn;
}

//printInfo
void Employee::printInfo() const
{
  cout << "SSN: " << ssn << endl;
}

//~Employee
Employee::~Employee()
{
}
