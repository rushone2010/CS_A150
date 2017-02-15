/**************************************************************************

	The iterative void function iterDrawStars with a parameter of 
	type int, a positive integer indicating the number of stars, 
	writes out the number of stars (*) to the screen all on one line.

	The function recurDrawStars accomplishes the same task recursively.

**************************************************************************/

#include <iostream>

using namespace std;

void iterDrawStars(int);
//iterDrawStars - draws stars on on line
//@param int - the number of stars to draw

void recurDrawStars(int);
//recurDrawStars - draws stars on on line
//@param int - the number of stars to draw

int main()
{
	cout <<"Enter the number of stars: ";
	int stars;
	cin >> stars;

	cout <<"\n\nUsing iteration...\n";
	iterDrawStars(stars);	

	cout << endl;
	
	cout <<"\nUsing recursion...\n";
	recurDrawStars(stars);

	cout << endl;

	cout << endl;
	system("Pause");
	return 0;
}

void iterDrawStars(int n)
{
	for (int i = 0; i < n; ++i)
		cout << "*";
}

void recurDrawStars(int n)
{
	cout << "*";
	if (n > 1)
		recurDrawStars(n - 1);
}

