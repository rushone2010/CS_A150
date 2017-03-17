// Law office billing program.

#include <iostream>
using namespace std;

const double RATE = 150.00; //Dollars per quarter hour.

double fee(int hoursWorked, int minutesWorked);
// fee - Computes the the charges for hoursWorked hours and
//		 minutesWorked minutes of legal services.
// @param int - The total number of hours worked.
// @param int - The total number of minutes worked.
// @return double - The total charges for legal services.

int main()
{
  cout << "Welcome to the law office of\n"
       << "Dewey, Cheatham, and Howe.\n"
       << "The law office with a heart.\n";

	int hours, minutes;
  cout << "\nEnter the hours and minutes"
      << " of your consultation: ";
  cin >> hours >> minutes;

  double bill = fee(hours, minutes);

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  cout << "\nFor " << hours << " hour(s) and " << minutes
       << " minute(s), your bill is $" << bill << endl;

  cout << endl;

  cin.ignore();
  cin.get();
	return 0;
}

double fee(int hoursWorked, int minutesWorked)
{
  // 60 represents the number of minutes in an hour
  minutesWorked = (hoursWorked * 60) + minutesWorked;

  // 15 represents the number of minutes in a quarter hour
  int quarterHours = minutesWorked / 15;

  return (quarterHours * RATE);
}
