/*
	(name header)

	Program to demonstrate cin and cout with strings
*/

#include <iostream>
#include <string>

using namespace std;

int main( )
{
	cout << "How many years old is your dog?" << endl;
	int actualAge;
	cin >> actualAge;

	cout << "What is your dog's name?" << endl;
	string dogName;
	cin >> dogName;

	// 7 represents the numbe of human years equivalent to one dog year.
	cout << dogName << "'s age is approximately " 
		<< "equivalent to a " <<  (actualAge * 7) 
		<< " year old human." << endl;

	cout << endl;
	system("Pause");
	return 0;
}
