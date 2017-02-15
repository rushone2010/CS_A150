/*
	Searches a partially filled array of nonnegative integers.

	GOOD TEST CASES:
		Function fillArray:
			Do not enter any values other than one negative number.
			Enter only one value + negative number.
			Enter less than 20 values + negative number.
			Enter exactly 20 values + negative number.
			Enter more than 20 values + negative number.
		Function search:
			Search for the first element in the array.
			Search for the last element in the array.
			Search for any middle element in the array.
			Search for an element that is not in the array.
			Search for the negative number entered by the user
*/

#include <iostream>
using namespace std;

const int CAP = 20;	

void fillArray(int a[], int& numberUsed);
// fillArray - Asks the user to enter non-negative numbers 
//				 to fill up the array.
// @param int[] - The array to fill up
// @param int& - The number of elements in the array

bool searchFirstOccurrence(const int a[], int numberUsed, 
				int& location, int element);
// search - Searches the array for a given number and
//			returns true if found, false otherwise.
//			Searches only for the first occurrence.
// @param int[] - The array to search
// @param int - The number of elements in the array
// @param int - The element to search
// @return bool - Returns true if the element is found,
//                   false otherwise.

int main( )
{
    int a[CAP];
	int numOfElements = 0;

    fillArray(a, numOfElements);

    char ans = 'y';
    int input = 0,
	    location = -1;						

    do
    {
        cout << "Enter a number to search for: ";
        cin >> input;

        if (searchFirstOccurrence(a,numOfElements,location,input))
            cout << input << " was found at index " << location << endl;         
        else 
			cout << input << " is not in the list." << endl;

        cout << "\nWould you like to earch again (y/n)? ";
        cin >> ans;

    }while (ans == 'y');

    cout << endl;
	system("Pause");
    return 0;
}

void fillArray(int a[], int& numOfElements)
{
    cout << "Enter up to " << CAP << " nonnegative whole numbers and\n"
         << "mark the end of the list with a negative number:\n";

    int input;
    cin >> input;

    while ((input >= 0) && (numOfElements < CAP))
    {
        a[numOfElements] = input;
        ++numOfElements;
        cin >> input;
    }
}


bool searchFirstOccurrence(const int a[], int numberUsed, 
								int& location, int element)
{
    int idx = 0; 

    while (idx < numberUsed)
	{
		if (element == a[idx])
		{
			location = idx;
			return true;
		}
		else
		{
			++idx;
		}
	}

	return false;
}