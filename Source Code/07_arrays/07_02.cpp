// Demonstrates an array parameter.

#include <iostream>
using namespace std;

const int CAP = 10;

void fillUp(int a[], int& numOfElements);
// fillUp - Asks the user to type in size integers.
// @param int[] - The array to fill up
// @param int& - The number of elements to insert in the array

int main( )
{
  int a1[CAP], a2[CAP];

	int numOfElementA1 = 0,
	numOfElementsA2 = 0;

  fillUp(a1, numOfElementA1);
  fillUp(a2, numOfElementsA2);

	cout << endl;

  cin.ignore();
  cin.get();
	return 0;
}

void fillUp(int a[], int& numOfElements)
{
  cout << "Enter no more than " << CAP <<  " positive numbers:\n";
	cout << "Enter -1 to quit." << endl;

	int input;
	cin >> input;

	while (input != -1) {
		a[numOfElements] = input;
		++numOfElements;
		cin >> input;
	}
}
