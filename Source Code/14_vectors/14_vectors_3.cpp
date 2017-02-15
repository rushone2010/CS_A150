#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//vector<int> v1;

	//cout << "-------------- FIRST VECTOR --------------\n\n";
	//cout << "Capacity of the vector when empty: " << v1.capacity() << "\n\n";
	//
	////insert 100 elements in the vector
	//for (int i = 0; i < 100; ++i)
	//{
	//	v1.push_back(i);
	//	cout << "Inserted item " << i + 1 << " => Capacity is: "
	//		<< v1.capacity() << endl;
	//}

	//cout << "\nSize of v1: " << v1.size();
	//cout << "\nCapacity of v1: " << v1.capacity();
	//cout << "\nMaximum size of v1: " << v1.max_size();

	cout << "\n\n\n-------------- SECOND VECTOR --------------\n\n";

	vector<int> v2;

	cout << "Capacity of the vector when empty: " << v2.capacity() << "\n\n";

	cout << "\nStart inserting in the empty vector...\n";
	for (int i = 0; i < 10; ++i)
	{
		v2.push_back(i);
		cout << "Inserted item " << i << " => Capacity is: "
			<< v2.capacity() << endl;
	}

	//reserve the capacity to 40
	v2.reserve(40);

	//insert another 60 elements in the vector
	for (int i = 0; i < 60; ++i)
	{
		v2.push_back(i + 11);
		cout << "Inserted item " << (i + 11) << " => Capacity is: "
			<< v2.capacity() << endl;
	}

	cout << "\nSize of v2: " << v2.size();
	cout << "\nCapacity of v2: " << v2.capacity();
	cout << "\nMaximum size of v2: " << v2.max_size();

	cout << "\n\n\n-------------- RESIZE SECOND VECTOR --------------\n\n";

	v2.resize(24);
	cout << "Shrink the vector to 24...\n"
		<< "and print from 0 to size...\n\n";
	unsigned int numOfElements = v2.size();
	for(unsigned int i = 0; i < numOfElements; ++i)
		cout << "Index " << i << ": " << v2[i] << endl;

	v2.resize(40);
	cout << "\nExpand the vector to 40...\n"
		<< "Additional elements will be zeros...\n";
	numOfElements = v2.size();
	for(unsigned int i = 0; i < numOfElements; ++i)
		cout << "Index " << i << ": " << v2[i] << endl;

	v2.resize(50,100);
	cout << "\nExpand the vector to 50 with value 100...\n\n";
	numOfElements = v2.size();
	for(unsigned int i = 0; i < numOfElements; ++i)
		cout << "Index " << i << ": " << v2[i] << endl;

	cout << endl;
  
  cin.ignore();
  cin.get();
	return 0;
}
