// John Anthony Trevino 02-10-2016
// Problem17: Interest Earned
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	int icompounded;
	double interest, irate, irate0, ircompounded, Principal, Amount, tamount;
	cout << "Interest Earned Calculator\n\n\n";
	cout << "Please enter Principal: ";
	cin >> Principal;
	cout << "\nPlease enter Interest Rate : ";
	cin >> irate0;
	cout << "\nPlease enter number times of interest compounded: ";
	cin >> ircompounded;
	
	irate = irate0 /100;
	
	Amount =  pow((1 + irate / ircompounded), ircompounded);
	tamount = Principal * Amount;
	interest = tamount - Principal;
	
	cout << "\n\n\nInterest Rate:" << setw(19) << irate0 << "%\n"; 
	cout << "Times Compounded:" << setw(16) << ircompounded << "\n"; 
	cout << "Principal: " << setprecision(2) << fixed << setw(14) << "$" << setw(8) << Principal << "\n";
	cout << "Interest: " << setw(15) << "$" << setw(8) << interest << "\n";
	cout << "Final Balance:" << setw(11) << "$" << setw(8) << tamount << "\n\n\n"; 
	system("pause");
	return 0;
	
}
