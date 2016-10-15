// John Anthony Trevino 02-24-2016
// Problem3: Distance Traveled
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
int mph, hours, distance; 
int count = 1;

cout << "Distance Traveled Calculator\n\n\n"; 
cout << "What is the speed of the vehicle? ";
cin >> mph;
cout << "\nHow many hours has it traveled? ";
cin >> hours;

cout << "\nHour" << setw(19) << "Miles Traveled\n";
cout << "------------------------------\n";
while (count <= hours)
{
	cout << setw(4) << count << setw(11) << (mph * count) << endl;
	count++;
}
system("pause");
return 0;
}
