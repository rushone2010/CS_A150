#ifndef DARRAY_H
#define DARRAY_H

#include <iostream>
using namespace std;

class DArray
{
public:
    DArray( );
    //Default constructor -	Initializes array
	//						to a capacity of 50.

    DArray(int);
	//Constructor - Initializes array with a given capacity.
	//@param int - Capacity of the array.

    void addElement(int);
    //addElement - Adds an element to the array.
	//@param int - The element to add to the array.

	bool compareArrays(const DArray& otherArray) const;
	// compareArrays - Returns true if two arrays have the same elements
	//					in the same order, false otherwise.
	// @param const DArray& - The array to which the object array
	//					is compared.
	// @return bool - True if arrays are equal, false otherwise.

	~DArray( );
	//Destructor

private:
    int *a;			//will point to an int (it will be an array)
    int capacity;	//capacity of the array
    int numOfElements;		//total number of elements in the array

};

#endif
