// Determines which of two pizza sizes is the best buy.

#include <iostream>
using namespace std;

const double PI = 3.14159;

void getData(int& smallDiameter, double& priceSmall,
             int& largeDiameter, double& priceLarge);

double unitPrice(int diameter, double price);
//Returns the price per square inch of a pizza.
//Precondition: The diameter parameter is the diameter of the pizza
//in inches. The price parameter is the price of the pizza.

void outputResults(int smallDiameter, double priceSmall,
             int largeDiameter, double priceLarge);

int main( )
{
    int diameterSmall, diameterLarge;
    double priceSmall, priceLarge;

    getData(diameterSmall, priceSmall, diameterLarge, priceLarge);
    outputResults(diameterSmall, priceSmall, diameterLarge, priceLarge);

	cout << endl;

  cin.ignore();
  cin.get();
  return 0;
}

void getData(int& smallDiameter, double& priceSmall,
             int& largeDiameter, double& priceLarge)
{
    cout << "Welcome to the Pizza Consumers Union.\n";
    cout << "\nEnter diameter of a small pizza (in inches): ";
    cin >> smallDiameter;
    cout << "Enter the price of a small pizza: $";
    cin >> priceSmall;
    cout << "\nEnter diameter of a large pizza (in inches): ";
    cin >> largeDiameter;
    cout << "Enter the price of a large pizza: $";
    cin >> priceLarge;
}

void outputResults(int smallDiameter, double priceSmall,
                 int largeDiameter, double priceLarge)
{
    double unitPriceSmall = unitPrice(smallDiameter, priceSmall);
    double unitPriceLarge = unitPrice(largeDiameter, priceLarge);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "\nSmall pizza:\n"
         << "    Diameter = " << smallDiameter << " inches\n"
         << "    Price = $" << priceSmall
         << " per square inch = $" << unitPriceSmall << endl
         << "\nLarge pizza:\n"
         << "    Diameter = " << largeDiameter << " inches\n"
         << "    Price = $" << priceLarge
         << " per square inch = $" << unitPriceLarge << endl;

    if (unitPriceLarge < unitPriceSmall)
        cout << "\nThe large one is the better buy.\n";
    else
        cout << "\nThe small one is the better buy.\n";

    cout << "\nBuon Appetito!\n";
}

double unitPrice(int diameter, double price)
{
	// the radius is half the diameter
    double radius = diameter / 2.0;
    double area = PI * radius * radius;
    return (price / area);
}
