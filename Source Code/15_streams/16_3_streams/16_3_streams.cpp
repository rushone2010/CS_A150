/*
  IO Streams - Example 3

  This program creates a text file,
  writes to the file and closes it,
  then it reopens the file to append
  more contents to it.

  (Open the Project folder where the Main.cpp file is
  to see the new file being created.)
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	//Characters to write on the file
	char firstChar  = 'a',
		 secondChar = 'b';

	//Declare stream object
	ofstream outfile;

	//Open the file
	//The file does not exit and
	//  it will be created
	outfile.open("file_3.txt");

	//Write to file
	outfile << "First character = " << firstChar << endl
		<< "Second character = " << secondChar << endl;

	//Close the file
	outfile.close();

	/*******************************************************
		The file is closed. Now we will re-open it and
		append more text to it.

	*******************************************************/

	//New characters to write on the file
	char thirdChar  = 'c',
		 fourthChar = 'd';

	//Open file to write on --> If it doesn't exist, create it
	outfile.open("file_3.txt", ios::app);

	//Append new contents to file
	outfile << "Third character = " << thirdChar << endl
		<< "Fourth character = " << fourthChar << endl;

	//Close the file
	outfile.close();

	cout << endl;

  cin.ignore();
  cin.get();
	return 0;
}
