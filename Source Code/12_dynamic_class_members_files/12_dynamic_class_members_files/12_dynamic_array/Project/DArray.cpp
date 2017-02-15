#include "DArray.h"

DArray::DArray( )
{
    capacity = 50;
	a = new int[capacity];
	numOfElements = 0;
}

DArray::DArray(int newCapacity)
{
	capacity = newCapacity;
    a = new int[capacity];
	numOfElements = 0;
}

void DArray::addElement(int element)
{
    if (numOfElements >= capacity)
    {
        cerr << "Attempt to exceed capacity in DArray.\n";
        exit(0);
    }
    a[numOfElements] = element;
    ++numOfElements;
}

bool DArray::compareArrays(const DArray& otherArray) const
{
	if (numOfElements != otherArray.numOfElements)
		return false;
	else
	{
		int idx = 0;

		while (idx < numOfElements)
		{
			if (a[idx] == otherArray.a[idx])
				++idx;
			else
				return false;
		}

		return true;
	}
}
DArray::~DArray( )
{
    delete [] a; //delete the array
	a = NULL;	 //null the pointer
}
