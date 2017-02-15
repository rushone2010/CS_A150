#ifndef DERIVEDCLASS_H
#define DERIVEDCLASS_H

#include <iostream>
#include <string>
using namespace std;

#include "BaseClass.h"

class DerivedClass : public BaseClass
{
public:
	DerivedClass();
	DerivedClass(const string& newBaseVar, 
					const string& newDerivedVar);

	void print() const;  //redefined

	~DerivedClass();

private:
	string derivedVar;
};

#endif