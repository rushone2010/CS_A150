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

    do
    {
        cout << "Hello ";
        --countDown; 
    }while (countDown > 0);

    cout << endl;
    cout << "That's all!\n";

	cout << endl;
	system("Pause");
	return 0;
}