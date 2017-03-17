// Driver program for the function unitPrice.

#include <iostream>
using namespace std;

const double PI = 3.14159;

double unitPrice(double diameter, double price);
// unitPrice - Returns the price per square inch of a pizza.
// @param double - the diameter of the pizza
// @param double - the price of the pizz
// @return double - the price per square inch of the pizza

int main()
{
  double diameter, price;
  char ans;

  do {
    cout << "Enter diameter and price:\n";
    cin >> diameter >> price;

    cout << "unit Price is $"
         << unitPrice(diameter, price) << endl;

    cout << "Test again? (y/n)";
    cin >> ans;
    cout << endl;
  }while (ans == 'y' || ans == 'Y');

	cout << endl;

  cin.ignore();
  cin.get();
  return 0;
}

double unitPrice(double diameter, double price)
{
  double radius = diameter/2.0;
  double area = PI * radius * radius;

  return (price/area);
}
