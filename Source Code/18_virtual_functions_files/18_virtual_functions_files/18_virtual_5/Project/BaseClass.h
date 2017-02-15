#ifndef BASECLASS_H
#define BASECLASS_H

#include <iostream>
#include <string>
using namespace std;

class BaseClass
{
public:
	BaseClass();
	BaseClass(const string& bVar);

	void print() const;

	~BaseClass();

private:
	string baseVar;
};

#endif