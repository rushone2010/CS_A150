/*
  IO Streams - Example 2

  This program creates the file file_2.txt and
  writes two numbers to the file.

  (Open the Project folder where the Main.cpp file is
  to see the new file being created.)
*/

#include <iostream>
#include <fstream>	//this library includes the ofstream class

using namespace std;	//will include std::ofstream

int main()
{
	//Numbers to write to the file
	int n1 = 10,
		n2 = 20;

	//Declare stream object
	ofstream outfile;

	//Open the file
	//The file does not exit and
	//  it will be created
	outfile.open("file_2.txt");

	//Print to file
	outfile << "First number = " << n1 << endl
		<< "Second number = " << n2	<< endl;

	//Close the file
	outfile.close();

	cout << endl;

  cin.ignore();
  cin.get();
	return 0;
}
