/*
	(name header)

	Computes the size of a dog house that can be purchased
	given the user’s budget.
*/

#include <iostream>
#include <cmath>
using namespace std;

const double COST_PER_SQ_FT = 10.50;

int main( )
{   
    double budget;
    cout << "Enter the amount budgeted for your dog house $";
    cin >> budget;

	double area = budget/COST_PER_SQ_FT;
    double lengthSide = sqrt(area);		//predefined function sqrt

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "For a price of $" << budget << endl
        << "I can build you a luxurious square dog house\n"
        << "that is " << lengthSide
        << " feet on each side.\n";

	cout << endl;
	system("Pause");
    return 0;
}