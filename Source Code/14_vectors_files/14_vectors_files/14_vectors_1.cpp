/********************************************

	Vectors

********************************************/

#include <vector>
#include <iostream>
using namespace std;

void processVector(vector<int>& v);					// PASSING BY REFERENCE
//processVector - fills a vector with integers
//@param vector<int>& - the vector to be processed

void printVector(const vector<int>& v);				// PASSING BY REFERENCE AND USING A CONST MODIFIER
//printVector - prints all the items in the vector
//@param const vector<int>& - the vector that contains 
//							   the items to be printed

int main()
{
	vector<int> myVector;

	processVector(myVector);
	printVector(myVector);

	cout << endl;
	system("Pause");
	return 0;
}

void processVector(vector<int>& v)
{
	//can use only function push_back
	//  to initialize the vector
	v.push_back(16);
	v.push_back(25);
	v.push_back(39);
}

void printVector(const vector<int>& v)
{
	//need an unsigned integer since
	//  function size returns unsigned integers
	unsigned int numOfElements = v.size();

	for (unsigned int i = 0; i < numOfElements; ++i)
		cout << v[i] << " ";
}