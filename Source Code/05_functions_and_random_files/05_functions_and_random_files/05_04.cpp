//Computes the area of a circle and the volume of a sphere.
//Uses the same radius for both calculations.
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

double area(double radius);
//Returns the area of a circle with the specified radius.

double volume(double radius);
//Returns the volume of a sphere with the specified radius.

int main( )
{
    double radiusOfBoth;
    cout << "Enter a radius to use for both a circle\n"
            << "and a sphere (in inches): ";
    cin >> radiusOfBoth;

    cout << "Radius = " << radiusOfBoth << " inches\n"
            << "Area of circle = " << area(radiusOfBoth)
            << " square inches\n"
            << "Volume of sphere = " << volume(radiusOfBoth)
            << " cubic inches\n";

	cout << endl;
	system("Pause");
    return 0;
}

double area(double radius)
{
    return (PI * radius * radius);
}

double volume(double radius)
{
    return ((4.0/3.0) * PI * radius * radius * radius);
}
