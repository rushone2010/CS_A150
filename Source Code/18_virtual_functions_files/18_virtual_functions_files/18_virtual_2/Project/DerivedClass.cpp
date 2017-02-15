#include "DerivedClass.h"

DerivedClass::DerivedClass()
{
	derivedVar = "derivedVar N/A";
}

DerivedClass::DerivedClass(const string& newBaseVar, 
							const string& newDerivedVar)
							:BaseClass(newBaseVar)
{
	derivedVar = newDerivedVar;
}

void DerivedClass::print() const
{
	BaseClass::print();
	cout << "    derivedVar = " 
		<< derivedVar << endl;
}

DerivedClass::~DerivedClass()
{
}
