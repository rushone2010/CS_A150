// Calculates return on deposit after one year

#include <iostream>
using namespace std;

const double RATE = 6.9;

int main( )
{
    cout << "Enter the amount of your deposit $";
    double deposit;
	cin >> deposit;

    cout << "In one year, that deposit will grow to\n"
         << "$" << ( deposit + deposit * (RATE / 100) )
		 << " an amount worth waiting for.\n";

	cout << endl;
  return 0;
}
