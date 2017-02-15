/* 
	What if we did not pass by reference or
	 by using a pointer?
	What if we passed the object by value?

	Let's try it WITHOUT the virtual modifier.

	When done --> Add the virtual modifier.
*/ 

#include "DerivedClass.h"

#include <iostream>
using namespace std;

void callPrint(BaseClass obj);		//We are passing by value

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

void callPrint(BaseClass obj)		
{
	obj.print();
}

/*************************************************

	Why does NOT work even if we have a 
	virtual print function in the BaseClass?

	Because when passing by value, the compiler
	makes a copy of the object and since we
	passed an object of the BaseClass, the compiler
	will make a copy of that object only.

*************************************************/