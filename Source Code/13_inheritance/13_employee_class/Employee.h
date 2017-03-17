// Interface of the class Employee
// Base class, from which we will derive subsets of employees.

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
  Employee();
  Employee(const string& newSSN);

  string getSSN() const;

  void setSSN(const string& newSSN);

  void printInfo() const;

  ~Employee();

private:
  string ssn;
};

#endif
