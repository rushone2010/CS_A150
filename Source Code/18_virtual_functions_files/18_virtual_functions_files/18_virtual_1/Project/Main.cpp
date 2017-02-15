/*
	In this example, we have the DerivedClass that derives from
	the BaseClass. Both classes have a print function.

	The idea is to have a function, callPrint, that is NOT a 
	member function and call the print function of the parent
	class and any derived class.
	
	If you create a function callPrint that passes an 
	object of the BaseClass, as in this case, you will not
	get the expected output.
*/

#include "DerivedClass.h" 

#include <iostream>
using namespace std;

void callPrint(BaseClass& obj);		// Generalize by passing an object
									//   of the parent class.

int main()
{
		// An object of the base class will work correctly.
	BaseClass baseObj("Base variable");

	cout << "PRINT THE BASE CLASS OBJ...\n";
	callPrint(baseObj);

	cout << endl << endl;

		// An object of the derived class will NOT work correctly.
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
