/*****************************************************************
	IO Streams - Example 4

Reading up to the end of the file.

*****************************************************************/

#include <iostream>
#include <fstream>	

using namespace std;	

int main()
{
	//Declare stream object
	ifstream infile;

	//Open the file
	infile.open("long_file.txt");

	if (infile.fail( ))
	{
	  cerr << "Input file opening failed.\n";
	  exit(1);
	}

	//Read numbers from file as chars
	char next;
	infile.get(next);
	while (!infile.eof( ))
	{
		//output to screen
		cout << next;

		//keep on reading
		infile.get(next);
	}

	//Close the file
	infile.close();

	cout << endl;
	system("Pause");
	return 0;
}