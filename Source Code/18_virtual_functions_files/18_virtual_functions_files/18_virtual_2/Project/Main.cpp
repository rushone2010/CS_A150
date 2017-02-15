/*
	Adding "virtual" to the base class print function 
	and the base class destructor.
*/

#include "DerivedClass.h"

#include <iostream>

using namespace std;

void callPrint(BaseClass& obj);		//This function can now work with all 
									//  the objects of the derived classes.

int main()
{
		// An object of the base class will work correctly.
	BaseClass baseObj("Base variable");

	cout << "PRINT THE BASE CLASS OBJ...\n";
	callPrint(baseObj);

	cout << endl << endl;

		// An object of the derived class will work correctly,
		//   because the function print of the base class is virtual.
	DerivedClass derivedObj("Derived first variable", "Derived second variable");

	cout << "PRINT THE DERIVED CLASS OBJ...\n";
	callPrint(derivedObj);

	cout << endl;
	system("Pause");
	return 0;
}

void callPrint(BaseClass& obj)
{
	obj.print();
}
