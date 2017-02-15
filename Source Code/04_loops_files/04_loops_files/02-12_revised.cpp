/*
	(name header)
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main( )
{
  	fstream inputStream;
 	inputStream.open("player.txt");

	string text;
 	while (inputStream >> text)
 	{
 		cout << text << endl;
 	}

	inputStream.close();

	cout << endl;
	system("Pause");
	return 0;
}
