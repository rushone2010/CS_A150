//Program to demonstrate the way call-by-value parameters
//behave with pointer arguments.

#include <iostream>
using namespace std;

void sneaky(int *temp);

int main( )
{
    int *p;

    p = new int;
    *p = 77;
    cout << "Before call to function *p == "
         << *p << endl;

    sneaky(p);

    cout << "After call to function *p == "
         << *p << endl;

	cout << endl;
	system("Pause");
    return 0;
}

void sneaky(int *temp)
{
    *temp = 99;

    cout << "Inside function call *temp == "
         << *temp << endl;
}
