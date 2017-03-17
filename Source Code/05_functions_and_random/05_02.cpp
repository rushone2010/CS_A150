// Calculates final bill based on number of
// items purchased and the price of each item.

#include <iostream>
using namespace std;

double totalCost(int numberOfItems, double pricePerItem);
// totalCost - Calculates the total cost, including 5% sales
//             tax, on items purchased at a given cost.
// @param int - The total number of items purchased.
// @param double - The price for each item.
// @return double - The total cost of items purchased.

const double TAX_RATE = 0.05; //5% sales tax

int main()
{
  int numberOfItems;
  cout << "Enter the number of items purchased: ";
  cin >> numberOfItems;

  double pricePerItem;
  cout << "Enter the price per item $";
  cin >> pricePerItem;

  double bill = totalCost(numberOfItems, pricePerItem);

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  cout << numberOfItems << " items at "
       << "$" << pricePerItem << " each.\n"
       << "Final bill, including tax, is $" << bill
       << endl;

  cout << endl;

  cin.ignore();
  cin.get();
  return 0;
}

double totalCost(int numberOfItems, double pricePerItem)
{
  double subtotal = pricePerItem * numberOfItems;
  return (subtotal + subtotal * TAX_RATE);
}
