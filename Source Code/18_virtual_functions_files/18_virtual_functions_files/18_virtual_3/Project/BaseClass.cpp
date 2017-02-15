#include "BaseClass.h"

BaseClass::BaseClass()
{
	baseVar = "baseVar N/A";
}

BaseClass::BaseClass(const string& newBaseVar)
{
	baseVar = newBaseVar;
}

void BaseClass::print() const
{
	cout << "    " << baseVar << endl;
}

BaseClass::~BaseClass()
{
}

