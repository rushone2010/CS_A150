// Using the Rectangle Class

#include "Rectangle.h"	//need to include the class interface

#include <iostream>
using namespace std;

int main()
{
	Rectangle r1;

	Rectangle r2(3.0, 4.5);

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "Rectangle 1"
		   << "\n    Width: " << r1.getWidth()
		   << "\n    Height: " << r1.getHeight() << endl;

	cout << "\nRectangle 2"
	     << "\n    Width: " << r2.getWidth()
		   << "\n    Height: " << r2.getHeight() << endl;

	cout << "\nChanging width and height for rectangle 1...\n";
	r1.setWidth(1.0);
	r1.setHeight(2.0);
	cout << "\nRectangle 1"
	   	 << "\n    Width: " << r1.getWidth()
		   << "\n    Height: " << r1.getHeight() << endl;

	// Call function calculateArea for objects r1 and r2.
	cout << "\nArea of rectangle 1 is "
		   << r1.calculateArea() << " units" << endl;
	cout << "\nArea of rectangle 2 is  "
		   << r2.calculateArea() << " units" << endl;

	cout << endl;

  cin.ignore();
  cin.get();
	return 0;
}
