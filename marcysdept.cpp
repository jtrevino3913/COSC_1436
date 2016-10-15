// John Anthony Trevino 02-15-16
// Problem1: marcydept.cpp
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
double price1,price2, halfoff, tamount;
cout << fixed << setprecision(2);
cout << "Marcy's Department store\n\n";
cout << "Buy one, Get one Half off\n";
cout << "Automatically calculates the discount of cheapest item\n\n\n\n";
cout << "Please enter the price of item1: ";
cin >> price1;
cout << "Please enter the price of item2: ";
cin >> price2;
cout << "\n";

if (price1 < price2)
{
	halfoff = price1*0.5;
	tamount = halfoff + price2;
	cout << setw(7) << price1 << " -50% discount\n";
	cout << setw(2) << "+" << price2 << "\n";
	cout << setw(8) <<"-----\n";
	
	cout << setw(7) << tamount << " Total after discount\n";
}
else
{
	halfoff = price2*0.5;
	tamount = halfoff + price1;
	cout << setw(7) << price1 << "\n";
	cout << setw(2) << "+" << price2 << " -50% discount\n";
	cout << setw(8) << "-----\n";
	cout << setw(7) << tamount << " Total after discount\n";
}
system("pause");
return 0;
}
