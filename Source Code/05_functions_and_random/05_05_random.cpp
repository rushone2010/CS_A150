/*
	Random numbers.

	*** Try and execute the program
	more than once to see results.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  for (int i = 1; i < 10; ++i) {
    int r = rand();
    cout << r << "\n";
  }

  cout << endl;

  cin.ignore();
  cin.get();
  return 0;
}
