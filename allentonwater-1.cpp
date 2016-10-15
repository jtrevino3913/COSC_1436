// John Anthony Trevino 02-15-16
// Problem2: allentonwater.cpp
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int previous, current, gallons, gallons2;
	double charge, mincharge;
	cout << fixed << setprecision(2);	
	
	cout << "Allenton Water Department\n\n";
	cout << "Automatically Calculates Customer's Monthly Water Bill\n\n\n\n";
	cout << "Please enter pervious meter reading: ";
	cin >> previous;
	
	cout << "Please enter current meter reading:  ";
	cin >> current;
	
	gallons = current - previous;
	gallons2 = gallons / 1000;
	mincharge = 16.67;
	//charge = gallons2 * 7 + mincharge; // original variable of 02-15-16
	charge = gallons2 * 7; /* changed 02-17-16*/ 
	
	if (gallons2 < 1)
	{
		cout << "\n\nTotal: "<< setw(6) << mincharge << "\n\n\n";
	}
	else
	{
		cout << "\n\nTotal: "<< setw(6) << charge << "\n\n\n";
	}	
	
	system ("pause");
	return 0;
}
