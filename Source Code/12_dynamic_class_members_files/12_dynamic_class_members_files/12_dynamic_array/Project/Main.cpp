/*
	This program creates partially-filled arrays
	of integers.
*/

#include "DArray.h"

#include <iostream>
using namespace std;

int main( )
{
	DArray a1;
	a1.addElement(10);
	a1.addElement(11);
	a1.addElement(12);
	a1.addElement(13);
	a1.addElement(14);
	a1.addElement(15);
	a1.addElement(16);
	a1.addElement(17);
	a1.addElement(18);
	a1.addElement(19);

	DArray a2(3);
	a2.addElement(10);
	a2.addElement(11);
	a2.addElement(12);

	DArray a3(3);
	a3.addElement(20);	// first value differs from a2
	a3.addElement(11);
	a3.addElement(12);

	DArray a4(3);
	a4.addElement(10);	
	a4.addElement(21);	// middle value differs from a2
	a4.addElement(12);

	DArray a5(3);
	a5.addElement(10);	
	a5.addElement(11);	
	a5.addElement(22);	// last value differs from a2

	if (a1.compareArrays(a1)) 
		cout << "Arrays a1 and a1 are the same." << endl;
	else 
		cout << "Arrays a1 and a1 are not the same. (INCORRECT) " << endl;	
	
	if (a1.compareArrays(a2)) 
		cout << "Arrays a1 and a2 are the same. (INCORRECT) " << endl;
	else 
		cout << "Arrays a1 and a2 are not the same." << endl;

	if (a2.compareArrays(a3)) 
		cout << "Arrays a1 and a2 are the same. (INCORRECT) " << endl;
	else 
		cout << "Arrays a1 and a2 are not the same." << endl;

	if (a2.compareArrays(a4)) 
		cout << "Arrays a1 and a1 are the same. (INCORRECT) " << endl;
	else 
		cout << "Arrays a1 and a1 are not the same." << endl;

	if (a2.compareArrays(a5)) 
		cout << "Arrays a1 and a2 are the same. (INCORRECT) " << endl;
	else 
		cout << "Arrays a1 and a2 are not the same." << endl;

	cout << endl;
	system("Pause");
    return 0;
}

