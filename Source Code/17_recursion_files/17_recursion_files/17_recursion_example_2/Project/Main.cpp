/*
	The recursive function squares with parameter n of
	type int and returns the sum of the square of the
	numbers 1 to n.

	Example: squares(3) returns 14, because
		1^2 + 2^2 + 3^2  is 14
*/

#include <iostream>

using namespace std;

int squares (int);
//squares - computes the sum of the squares from 1 to n
//@param int - n value, largest or equal to 1
//@return int - returns the sum of the squares from 1 to n

int main()
{
	cout <<"Enter an integer: ";
	int number;
	cin >> number;

	cout << squares(number) << endl;

	cout << endl;
	return 0;
}

int squares(int n)
{
	if (n <= 1)
		return 1;
	else
		return(squares(n - 1) + n * n);
}
