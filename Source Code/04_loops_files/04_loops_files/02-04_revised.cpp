/*
	(name header)
*/

#include <iostream>
using namespace std;

int main( )
{
    int countDown;
    cout << "How many greetings do you want? ";
    cin >> countDown;

    while (countDown > 0)
    {
        cout << "Hello ";
        --countDown; // use short-hand notation
    }

    cout << endl;
    cout << "That's all!\n";

	cout << endl;
	system("Pause");
	return 0;
}