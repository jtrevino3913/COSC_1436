// John Anthony Trevino 02-10-2016
// Problem13: Monthly Sales Tax
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main (){
	string Month;
	int year;
	double tamount0, tamount1, Stax, Ctax, Ttax, ProductSales;
	cout << "Monthly Sales Tax Calculator\n\n";
	cout << "Please enter Month: ";
	cin >> Month;
	cout << "\nPlease enter Year: ";
	cin >> year;
	cout << "\nPlease enter Sales: ";
	cin >> tamount0;
	
	tamount1 = tamount0 + .06;
	ProductSales = tamount1 / 1.06;
	Stax = ProductSales * .04;
	Ctax = ProductSales * .02;
	Ttax = Stax + Ctax;
	
	cout << "\nMonth: " << Month << setw(6) << year << "\n";
	cout << "\n---------------------------------------------\n\n";
	cout << "Total Colleced:" << showpoint << setprecision(2) << fixed << setw(20) << "$" << setw(9) << tamount1 << "\n"; 
	cout << "Sales:" << setw(29) << "$" << setw(9) << ProductSales << "\n";
	cout << "County Sales Tax:" << setw(18) << "$"<< setw(9) << Ctax << "\n";
	cout << "State Sales Tax:" << setw(19) << "$" << setw(9) << Stax << "\n";
	cout << "Total Sales Tax:" << setw(19) << "$" << setw(9) << Ttax << "\n\n\n";
	
	system("pause");
	return 0;
		
}
