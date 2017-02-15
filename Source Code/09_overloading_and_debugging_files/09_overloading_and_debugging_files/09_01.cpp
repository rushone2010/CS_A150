/*
	(name header)
	
	Illustrates overloading the function name ave.
*/

#include <iostream>
using namespace std;

double ave(double n1, double n2);
//ave - Calculates the average of two numbers.
//@param double - The first number.
//@param double - The second number.
//@return double - The average of the two numbers.

double ave(double n1, double n2, double n3);
//ave - Calculates the average of three numbers.
//@param double - The first number.
//@param double - The second number.
//@param double - The third number.
//@return double - The average of the three numbers.

int main( )
{
    cout << "The average of 2.0, 2.5, and 3.0 is "
         << ave(2.0, 2.5, 3.0) << endl;

    cout << "The average of 4.5 and 5.5 is "
         << ave(4.5, 5.5) << endl;

	cout << endl;
	system ("Pause");
    return 0;
}

double ave(double n1, double n2)
{
    return ((n1 + n2) / 2.0);
}

double ave(double n1, double n2, double n3)
{
    return ((n1 + n2 + n3) / 3.0);
}