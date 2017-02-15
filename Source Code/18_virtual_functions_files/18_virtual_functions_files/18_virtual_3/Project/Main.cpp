/* 
	The previous discussion in project Virtual_2
	applies also when a parameter is a POINTER
	to the class, and a pointer of the derived 
	class is passed as an actual parameter.

	This example shows the output when the BaseClass
	has a print function that is NOT virtual.
*/ 

#include "DerivedClass.h"

#include <iostream>
using namespace std;

void callPrint(BaseClass *p);		//We are passing a pointer

int main()
{
		//Declaring a pointer that will 
		//  point to objects of the BaseClass
	BaseClass *pBase;

		//Creating a dynamic object of the BaseClass
	pBase = new BaseClass("Base variable");

	cout << "PRINT THE BASE CLASS OBJ...\n";
	callPrint(pBase);

	cout << endl << endl;

		//Declaring a pointer that will 
		//  point to objects of the DerivedClass
	DerivedClass *pDerived;

		//Creating a dynamic object of the DerivedClass
	pDerived = new DerivedClass("Derived first variable", "Derived second variable");

	cout << "PRINT THE BASE CLASS OBJ...\n";
	callPrint(pDerived);

	cout << endl;
	system("Pause");
	return 0;
}

void callPrint(BaseClass *p)		
{
	(*p).print();
}
