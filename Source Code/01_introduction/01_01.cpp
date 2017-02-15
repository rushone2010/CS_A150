// Basic Input/Output

#include <iostream>
using namespace std;

int main( )
{
    cout << "Hello reader.\n"
         << "Welcome to C++.\n";

    cout << "How many programming languages have you used? ";
    int numberOfLanguages;
	cin >> numberOfLanguages;

    if (numberOfLanguages < 1)
        cout << "Read the preface. You may prefer\n"
			<< "a more elementary book by the same author.\n";
    else
        cout << "Enjoy the book.\n";

	cout << endl;

  cin.ignore();
  cin.get();
  return 0;
}
