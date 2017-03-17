/*
	Random seed.

	*** Try and execute the program
	more than once to see results.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  // Sets the seed of the random number generator.
  srand(static_cast<unsigned int>(time(0)));

  for (int i = 1; i <= 40; ++i) {
  //int d1 = 1 + rand() % 6;
  //int d2 = 1 + rand() % 6;
  //cout << d1 << " " << d2 << endl;

    int d1 = rand() % 10 + 11;
    cout << d1 << endl;
  }

  cout << endl;

  cin.ignore();
  cin.get();
  return 0;
}
