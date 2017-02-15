// Using the Rectangle Class
#include "Rectangle.h"	//need to include the class interface

#include <iostream>;
using namespace std;

int main()
{
	// Create an object using the default constructor
	Rectangle r1;

	// Create an object using the overloaded constructor
	Rectangle r2(3.0, 4.51);

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	// Call functions getWidth and getHeight for object r1.
	cout << "Rectangle 1"
		<< "\n    Width: " << r1.getWidth()
		<< "\n    Height: " << r1.getHeight() << endl;

	// Call functions getWidth and getHeight for object r2.
	cout << "\nRectangle 2"
		<< "\n    Width: " << r2.getWidth()
		<< "\n    Height: " << r2.getHeight() << endl;

	// Call functions setWidth and setHeight for object r1
	// and output again using the accessor functions.
	cout << "\nChanging width and height for rectangle 1...\n";
	r1.setWidth(1.0);
	r1.setHeight(2.0);
	cout << "\nRectangle 1"
		<< "\n    Width: " << r1.getWidth()
		<< "\n    Height: " << r1.getHeight() << endl;

	cout << endl;

  cin.ignore();
  cin.get();
	return 0;
}
