// John Anthony Trevino 02-10-2016
// Problem7: Time Calculator 
#include <iostream>

using namespace std;
int main (){
	double  seconds, days, hours, minutes;
	
	cout << "Time Calculator \n\n";
	cout << "Please enter number of seconds: ";
	cin >> seconds;
	
	days = seconds / 86400;
	hours = seconds / 3600;
	minutes =  seconds / 60;
	
	if (seconds >= 86400)
	{
		cout << "day(s): " << days << "\n\n\n";
	} 
	else if (seconds <= 3600)
	{
		cout << "hour(s): " << hours << "\n\n\n";
	} 
	else 
	{
		cout << "minute(s): " << minutes << "\n\n\n";
	}
	system("pause");
	return 0;
}
