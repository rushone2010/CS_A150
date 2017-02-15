// Working with files.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main( )
{
  	fstream inputStream;
 	inputStream.open("player.txt");

	int score;
	string firstName, lastName;
 	inputStream >> score;
 	inputStream >> firstName >> lastName;

 	cout << "Name: " << firstName << " "
 		<< lastName << endl;
 	cout << "Score: " << score << endl;

 	inputStream.close();

	cout << endl;

  cin.ignore();
  cin.get();
  return 0;
}
