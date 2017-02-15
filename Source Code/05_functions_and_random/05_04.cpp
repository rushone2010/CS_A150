// Computes the area of a circle with the radius given and
// the volume of a sphere with the radius given.

#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

double area(double radius);
// area - Computes the area of a circle with the radius given.
// @param double - The radius of the circle.
// @return double - The area of the circle.

double volume(double radius);
// volume - Computes the volume of a sphere with the radius given.
// @param double - The radius of the sphere.
// @return double - The volume of the sphere.

int main( )
{
    double radiusOfBoth;
    cout << "Enter a radius to use for both a circle\n"
            << "and a sphere (in inches): ";
    cin >> radiusOfBoth;

    double areaOfCircle = area(radiusOfBoth);
    double volumeOfSphere = volume(radiusOfBoth);

    cout << "\nRadius = " << radiusOfBoth << " inches\n"
        << "Area of circle = " << areaOfCircle
        << " square inches\n"
        << "Volume of sphere = " << volumeOfSphere
        << " cubic inches\n";

    cout << endl;
	return 0;
}

double area(double radius)
{
	// formula for area of a circle: (PI * r^2)
    return (PI * radius * radius);
}

double volume(double radius)
{
	// formula for volume of a sphere: ((4/3) * PI * r^2)
    return ((4.0/3.0) * PI * pow(radius, 3));
}
