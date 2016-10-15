// John Anthony Trevino 02-06-2016
// Problem2: Softball Ticket Calculator
#include<iostream>  
#include<iomanip>
using namespace std;

int main (){
double ClassAT, ClassBT, ClassCT, ClassA, ClassB, ClassC, tamount;

cout << "Softball Ticket Calculator\n\n";
cout << "-----------------------------\n\n";
cout << "\nPlease enter number of Class A tickets sold: ";
cin >> ClassA;
cout << "\nPlease enter number of Class B tickets sold: ";
cin >> ClassB;
cout << "\nPlease enter number of Class C tickets sold: ";
cin >> ClassC;

	ClassAT = ClassA * 15;/*Total of Class A tickets sold*/
	ClassBT = ClassB * 12;/*Total of Class B tickets sold*/
	ClassCT = ClassC * 9;/*Total of Class C tickets sold*/
	tamount = ClassAT + ClassBT + ClassCT;/*Total income of combined tickets sold*/
	
cout << "\n\n\n--------------------";
cout << "\n\nTotal Income: " << setprecision(2) << fixed << tamount << "\n\n";
cout << "--------------------\n\n\n";

system("pause");
return 0;
}
