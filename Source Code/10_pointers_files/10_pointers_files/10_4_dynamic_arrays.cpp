/* 
	This program fills an array with positive integers, 
	searches the first occurrence of a given number, and
	returns its location.
*/


#include <iostream>
using namespace std;

void fillArray(int a[], int capacity);

int search(const int a[], int capacity, int target);

int main( )
{
    int capacity;
    cout << "How many numbers will be on the list? ";
    cin >> capacity;
    int *a;
    a = new int[capacity];

    fillArray(a, capacity);

    int target;
    cout << "Enter a value to search for: ";
    cin >> target;

    int location = search(a, capacity, target);
    if (location == -1)
        cout << target << " is not in the array.\n";
    else
        cout << target << " is element " << location << " in the array.\n";

    delete [] a;	// delete the array
	a = NULL;		// null the pointer

	cout << endl;
	system("Pause");
    return 0;
}

void fillArray(int a[], int capacity)
{
    cout << "Enter " << capacity << " integers:\n";

    for (int index = 0; index < capacity; ++index)
        cin >> a[index];
}

int search(const int a[], int capacity, int target)
{
    int index = 0;

    while (index < capacity)
	{
		if (a[index] == target)
			return index;
		else
			++index;
	}

    return -1;
}
