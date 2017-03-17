/*
  IO Streams - Example 5

  Reads from the file story.txt
  and prints to another file.
  The user will input the name of
  the file to write on.
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	//Declare stream object
	ifstream infile;
	ofstream outfile;

	//Open the file
	infile.open("story.txt");
	if (infile.fail( )) {
	  cerr << "Input file opening failed.\n";
	  exit(1);
	}

	//Ask user how to name the file to write to
	string nameOfFile;
	cout << "This program will read from the file story.txt.\n"
		   << "Enter a name for a new file to write on (include extension .txt):\n";
	cin >> nameOfFile;

	outfile.open(nameOfFile.c_str());

	if (outfile.fail()) {
		cerr << "Output file opening failed.\n";
		exit(1);
	}

	char next;
  int n = 1;

  infile.get(next);				//read next char from input file
  outfile << n << " ";			//write first number on output file

  while (! infile.eof( ))	{		//repeat until the end of file
		outfile << next;			//write char on output file
      if (next == '\n')	{		//if char was a new line
          ++n;					//increase number
          outfile << n << ' ';	//write number on output file
      }
      infile.get(next);			//read next char
  }

  infile.close( );
  outfile.close( );

	cout << endl;

  cin.ignore();
  cin.get();
	return 0;
}
