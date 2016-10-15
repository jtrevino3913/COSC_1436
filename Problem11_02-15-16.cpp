// John Anthony Trevino 02-15-16
// Problem11: Geometry Calculator p.237

#include <iostream>
#include <cmath>

using namespace std;
int main() {
	double acircle, arectangle, atriangle, radius, length, width, height, base;
	int choice;
	
	cout << "Geometry Calculator\n\n";
	cout << "1. Calculate the area of Circle\n";
	cout << "2. Calculate the area of Rectangle\n";
	cout << "3. Calculate the area of Triangle\n";
	cout << "4. Exit\n\n\n";
	cout << "Please enter choice: ";
	cin >> choice;
	
	if (choice == 1)
	{
		cout << "\nCalculate the area of Circle\n";
		cout << "\nPlease enter radius: ";
		cin >> radius;
			acircle = 3.14*pow(radius, 2);
		cout << "\nArea of Circle: " << acircle << "\n\n\n";
		
	} else if (choice == 2) {
		cout << "\nCalculate the area of Rectangle\n";
		cout << "\nPlease enter length";
		cin >> length;
		cout << "\nPlease enter width";
		cin >> width;
			arectangle = length * width;
		cout << "\nArea of Rectangle: " << arectangle << "\n\n\n";
	
	} else if (choice == 3 ) {
		cout << "Calculate the area of Triangle\n";
		cout << "\nPlease enter base: ";
		cin >> base;
		cout << "\nPlease enter heigth: ";
		cin >> height;
			atriangle = 1/2 * base * height;
		cout << "\nArea of Triangle: " << atriangle << "\n\n\n";
	} else if (choice == 4)	{
		cout << "Exiting...\n\n\n";
		
	} else {
		cout << "Invalid choice. Press 1-4";
		cout << "1. Calculate the area of Circle\n";
		cout << "2. Calculate the area of Rectangle\n";
		cout << "3. Calculate the area of Triangle\n";
		cout << "4. Exit\n";
		cout << "Exiting...\n\n\n";
	}
	
	system("pause");
	return 0;
}
