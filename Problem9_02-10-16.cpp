// John Anthony Trevino 02-10-2016
// Problem9: Sales Calculator
#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	int Quantity;
	double tamount0, tamount1, tamount2, tamount3, tamount;
	
	cout << "Software Sales Calculator \n\n";
	cout << "Please enter number units purchased: ";
	cin >> Quantity;
	
	tamount = Quantity * 99;
	tamount0 = tamount *.2;
	tamount1 = tamount *.3;
	tamount2 = tamount *.4;
	tamount3 = tamount *.5;
	
	if (Quantity < 10)
	{
		cout << "\nOriginal Price: " << setprecision(2) << fixed << tamount << "\n\n\n";

	}
    else if (Quantity <20)
    {
        cout << "\nDiscount: 20%\n\n\n";
        cout << "Original Price: " << setprecision(2) << fixed << tamount << "\n\n\n";
  		cout << "Discount Price: " << tamount0 << "\n\n\n";
    } 
	else if (Quantity < 50)
	{
		cout << "\nDiscount: 30%\n\n\n";
		cout << "Original Price: " << setprecision(2) << fixed << tamount << "\n\n\n";
		cout << "Discount Price: " << tamount1 << "\n\n\n";
	} 
	else if (Quantity < 100)
	{
		cout << "\nDiscount: 40%\n\n\n";
		cout << "Original Price: " << setprecision(2) << fixed << tamount << "\n\n\n";
		cout << "Discount Price: " << tamount2 << "\n\n\n";
	}
	else 
	{
		cout << "\nDiscount: 50%\n\n\n";
		cout << "Original Price: " << setprecision(2) << fixed << tamount << "\n\n\n";
		cout << "Discount Price: " << tamount3 << "\n\n\n"; 
	}
	system("pause");
	return 0;
}
