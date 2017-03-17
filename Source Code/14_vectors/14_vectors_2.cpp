// Vectors

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;

	//check if vector is empty
	if (v.empty())
		cout << "Vector is empty.\n";
	else
		cout << "There are items in the vector.\n";

	//insert items in the vector
	cout << "\nInserting items...\n";
	v.push_back(10);
	v.push_back(11);
	v.push_back(12);
	v.push_back(13);
	v.push_back(14);
	v.push_back(15);
	v.push_back(16);
	v.push_back(17);
	v.push_back(18);

	//check if vector is empty
	if (v.empty())
		cout << "\nVector is empty.\n";
	else
		cout << "\nThere are items in the vector.\n";

	//print vector
	unsigned int numOfElements = v.size();
  // EFFICIENCY: USE A VARIABLE TO STORE THE SIZE SO THAT THE
  // FUNCTION IS NOT CONTINUOUSLY CALLED IN THE FOR LOOP
	for(unsigned int i = 0; i < numOfElements; ++i)
		cout << v[i] << " ";
	cout << endl;

	//delete element at index 3
	cout << "\nDeleting item at index 3...\n";
	v.erase(v.begin() + 3);
	//print vector
	numOfElements = v.size();
	for(unsigned int i = 0; i < numOfElements; ++i)
		cout << v[i] << " ";

	//insert element back in the vector
	cout << "\n\nInserting 13 at index 3...\n";
	v.insert(v.begin() + 3, 13);
	//print vector
	numOfElements = v.size();
	for(unsigned int i = 0; i < numOfElements; ++i)
		cout << v[i] << " ";

	//delete elements from index 2 (included) to index 5 (not included)
	cout << "\n\nDelete items from index 2 to index 5...\n";
	v.erase(v.begin() + 2, v.begin() + 5);
	//print vector
	numOfElements = v.size();
	for(unsigned int i = 0; i < numOfElements; ++i)
		cout << v[i] << " ";

	//delete all elements in the vector
	cout << "\n\nDeleting all elements...";
	v.clear();
	//print vector
	cout << "\nAny items in the vector?...\n";
	numOfElements = v.size();
	for(unsigned int i = 0; i < numOfElements; ++i)
		cout << v[i] << " ";

	cout << endl;

  cin.ignore();
  cin.get();
	return 0;
}
