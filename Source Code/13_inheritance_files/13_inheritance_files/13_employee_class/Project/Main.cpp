#include "HourlyEmployee.h"
#include "SalariedEmployee.h"

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	cout << "HOURLY EMPLOYEE\n";

	//Create an object of the HourlyEmployee class
	HourlyEmployee john("111-22-3333", 16.75);
	
	//Call a public base-class member function
	cout << john.getSSN() << endl;
	//Call a public derived-class member function
	//  and change the rate
	john.setRate(20.00);

	cout << fixed << setprecision(2) << "New rate: $" 
		<< john.getRate() << endl;

	cout << "\n-------------------------------\n";

	cout << "\nSALARIED EMPLOYEE\n";

	//Create an object of the SalariedEmployee class
	SalariedEmployee jane("999-88-7777", 400.00);
	
	//Call a public base-class member function
	cout << jane.getSSN() << endl;
	//Call a public derived-class member function
	//  and change the salary amount
	jane.setSalary(500.00);

	cout << fixed << setprecision(2) << "New salary: $" 
		<< jane.getSalary() << endl;

	cout << "\n-------------------------------\n";

	//Call function printInfo from the derived class
	cout << "Call function printInfo from the derived class...\n\n";
	john.printInfo();

    cout << endl;
    system("Pause");
    return 0;
}


