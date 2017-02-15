/* 
	(name header)
*/

#include <iostream>
using namespace std;

void iceCreamDivision(int numberOfCustomers, double totalWeight);
// iceCreamDivision - Outputs instructions for dividing totalWeight 
//                    ounces of ice cream among number customers. 
//                    If number is 0, only an error message is output. 
// @param int - The number of customers.
// @param double - The total weight of ice cream.

int main( )
{
	int numberOfCustomers;
    cout << "Enter the number of customers: ";
    cin >> numberOfCustomers;

	double totalWeight;
    cout << "Enter weight of ice cream to divide (in ounces): ";
    cin >> totalWeight;

    iceCreamDivision(numberOfCustomers, totalWeight);

	cout << endl;
	system("Pause");
    return 0;
}

void iceCreamDivision(int numberOfCustomers, double totalWeight)
{
	//avoid using return in a void function

    if (numberOfCustomers == 0)
    {
        cout << "Cannot divide among zero customers.\n";
    } 
	else
	{
		cout << "Each one receives " 
			<< (totalWeight/numberOfCustomers) << " ounce(s) of ice cream." << endl;
	}
}
