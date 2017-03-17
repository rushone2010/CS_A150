// Class Definition (or interface)

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
using namespace std;

class Rectangle
{
public:
	Rectangle();
		//constructor

	Rectangle(double newWidth, double newHeight);
		//overloaded constructor
		//@param double - The width of the rectangle
		//@param double - The height of the rectangle

	~Rectangle();
		//destructor

	/*** mutator functions ***/

	void setWidth(double newWidth);
		//setWidth - Sets a new value for the width of the rectangle
		//@param double - The width of the rectangle

	void setHeight(double newHeight);
		//setHeight - Sets a new value for the height of the rectangle
		//@param double - The height of the rectangle

	/*** accessor functions ***/

	double getWidth() const;
		//getWidth const - Returns the width of the rectangle
		//@return double - Returns the width of the rectangle

	double getHeight() const;
		//getHeight const - Returns the height of the rectangle
		//@return double - Returns the height of the rectangle

	double calculateArea() const;
		//calculateArea const - Calculates the area of the rectangle
		//@return double - Return the area of the rectangle

private:
	//member variables
	double width;	//width of the rectangle
	double height;	//height of the rectangle

};

#endif
