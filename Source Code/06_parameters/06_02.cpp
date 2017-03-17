// Program to demonstrate call-by-reference parameters.

#include <iostream>
using namespace std;

void getNumbers(int& input1, int& input2);
// getNumbers - Reads two integers from the keyboard.
// @param int& - First input.
// @param int& - Second input.

void swapValues(int& variable1, int& variable2);
// swapValues - Interchanges the values of variable1 and variable2.
// @param int& - The first variable.
// @param int& - The second variable.

void showResults(int output1, int output2);
// showResults - Shows the new values of variable1 and
//               variable2, in that order.
// @param int - The first variable.
// @param int - The second variable.

int main()
{
  int firstNum, secondNum;

  getNumbers(firstNum, secondNum);
  swapValues(firstNum, secondNum);
  showResults(firstNum, secondNum);

	cout << endl;

  cin.ignore();
  cin.get();
  return 0;
}

void getNumbers(int& input1, int& input2)
{
  cout << "Enter two integers: ";
  cin >> input1
      >> input2;
}

void swapValues(int& variable1, int& variable2)
{
  int temp = variable1;
  variable1 = variable2;
  variable2 = temp;
}

void showResults(int output1, int output2)
{
  cout << "In reverse order the numbers are: "
       << output1 << " " << output2 << endl;
}
