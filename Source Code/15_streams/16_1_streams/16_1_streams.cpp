/*
	IO Streams - Example 1

	This program reads from a text file. file_1.txt, which
	constains two numbers.

	The file is in the same folder where the Main.cpp file is.
*/

#include <iostream>
#include <fstream>	//this library includes the ifstream class

using namespace std;	//will include std::ifstream

int main()
{
	//Declare stream object
	ifstream infile;

	//Open the file
	infile.open("file_1.txt");

	//Read numbers from the file
	int oneNumber, anotherNumber;
	infile >> oneNumber >> anotherNumber;

	//Print to screen
	cout << "oneNumber = " << oneNumber << endl
		<< "anotherNumber = " << anotherNumber
		<< endl;

	//Close the file
	infile.close();

	cout << endl;

  cin.ignore();
  cin.get();
	return 0;
}
