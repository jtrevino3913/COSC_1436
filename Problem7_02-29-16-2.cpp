// John Anthony Trevino 02-27-2016
// Problem7: Pennies for pay

#include <iostream>
#include <iomanip>

using namespace std;
int main(){
	cout << fixed << setprecision(2);

	int numdaysw;

	double total;
	
	
	int count =1;
	while (count < 5)
	{
	cout << "Pennies for Pay\n\n";
	cout << "\nEnter number of days work: ";
	cin >> numdaysw;	

		double penny = 0.01;
		
			if (numdaysw <= 31 && numdaysw > 0)
		{
		//doubling code
			for (int count1= 1; count1 <= numdaysw; count1++)
		{
		total = penny;
		penny *= 2;	
		
		}
		//displays the double total
		cout << "\n\nTotal: " << total<< "\n\n";
		//asks user to display a chart
		cout << "Would you like see a Chart?\nEnter \"Y\" to see Chart (any other character for reset): \n";
		char choice;
		cin >> choice;
			if (choice =='Y')
			{
				double *penny1 = new double;//added 03-04-2016 //took a day to figure pointers out... chapter 10 stuff 
				*penny1 = 0.01;
				for (int count1= 1; count1 <= numdaysw; count1++)
			{
			
			cout << setw(4) << count1 << setw(15) << *penny1 << endl;
			total = *penny1;
			*penny1 *= 2;	
			}
			cout << endl;
			}
		}
		else if (numdaysw > 31 && numdaysw > 0)
		{
			cout << "\nInvalid range. Use 1-31\n";
		}
		else 
		{
		}
		system("pause");
		system("cls");
		
}
return 0;
}

