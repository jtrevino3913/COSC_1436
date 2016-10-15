// John Anthony Trevino 02-02-2016
// Problem4: Weekly gross pay calculator
#include <iostream>
using namespace std;
int main (){
	double hrsrate, numhrs, Gpay;
	
	cout << "Weekly gross pay calculator\n\n\n\n";
	cout << "Please enter hourly rate: ";
	cin >> hrsrate;
	cout << "\nPlease enter amount of hours worked: ";
	cin >> numhrs;
	
	Gpay = hrsrate * numhrs;
	
	cout << "\n\n\nWeekly gross pay: " << Gpay << "\n\n\n";
	system("pause");
	return 0;
}
