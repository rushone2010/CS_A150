// Class Implementation

#include "Rectangle.h"  //need to include the interface

Rectangle::Rectangle()
{
	width = 0.0;
	height = 0.0;
}

Rectangle::Rectangle(double newWidth, double newHeight)
{
	width = newWidth;
	height = newHeight;
}

Rectangle::~Rectangle( )
{
}

void Rectangle::setWidth(double newWidth)
{
	width = newWidth;
}

void Rectangle::setHeight(double newHeight)
{
	height = newHeight;
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::getHeight() const
{
	return height;
}

double Rectangle::calculateArea() const
{
	return (width * height);
}
