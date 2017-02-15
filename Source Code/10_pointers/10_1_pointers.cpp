// Pointers

#include <iostream>
using namespace std;

int main()
{
	//declare a pointer and a variable
	int *p, v;

	v = 0;   //variable is equal to 0
	p = &v;  //pointer holds the
		   //  address of the variable

	cout << "v is: " << v << endl;		// v is: 0
	cout << "&v is: " << &v << endl;    // &v is: 0040F928 (address of v)
	cout << "p is: " << p << endl;		// p is: 0040F928 (address of v)
	cout << "*p is: " << *p << endl;	// *p is: 0
	cout << "&p is: " <<  &p << endl;	// &p is: 0022FCE8 (address of p)

	*p = 42; //dereference the pointer var

	cout << "\n After dereferencing the "
		<< "pointer variable: *p = 42\n";

	cout << "v is: " << v << endl;		// v is: 42
	cout << "&v is: " << &v << endl;	// &v is: 0040F928 (address of v)
	cout << "p is: " << p << endl;		// p is: 0040F928 (address of v)
	cout << "*p is: " << *p << endl;	// *p is: 42
	cout << "&p is: " <<  &p << endl;	// &p is: 0022FCE8 (address of p)

	cout << endl;

  cin.ignore();
  cin.get();
	return 0;
}
