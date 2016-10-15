// John Anthony Trevino 02-06-2016
// Problem8: Box Office Ticket Calculator
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main (){
string MovieName; 
double adultTS, childTS, TadultTS, TchildTS, GP, AmountPD, NP;

cout << "Box Office Ticket Calculator\n\n";
cout << "-------------------------------\n\n";
cout << "\nPlease enter movie name: ";
getline(cin, MovieName);
cout << "\nPlease enter amount of adult tickets sold: ";
cin >> adultTS;
cout << "\nPlease enter amount of child tickets sold: ";
cin >> childTS;

	TadultTS = adultTS * 6;/*Total of adult tickets sold*/
	TchildTS = childTS * 3;/*Total of child tickets sold*/
	GP = TadultTS + TchildTS; /*Gross pay of combined tickets sold*/
	NP = GP * .2;             /*Net pay of Box Office*/
	AmountPD = GP - NP;       /*Amount paid to Distributor*/

cout << "\n\n---------------------------------------------------------\n";
cout << "\nMovie Name:" << setw(26) << "\"" << MovieName << "\"";
cout << "\nAdult Ticket Sold:"  << setw(23) << adultTS;
cout << "\nChild Ticket Sold:" << setw(23) << childTS;
cout << "\nGross Box Office Profit:" << setw(16) << "$  " << setprecision(2) << fixed <<  GP;
cout << "\nAmount Paid to Distributor:" << setw(13) << "-$  " << AmountPD;
cout << "\nNet Box Office Profit:" << setw(19) << "$   " << NP << "\n\n";
cout << "---------------------------------------------------------\n\n";

system("pause");
return 0;
}
