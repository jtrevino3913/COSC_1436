// John Anthony Trevino 02-26-16
// Problem16: Math Tutor v3 p.319

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>


using namespace std;

int main (){
	
unsigned seed, num1, num2, answer, useranswer;
seed = time(0);
srand(seed);
num1 = rand() % 50 + 11;
num2 = rand() % 50 + 11;

int choice;

int count = 1;
while (count < 5)
{
	cout << "Math Tutor v3\n\n"; 
	cout << "1. Addition 2. Subtraction 3. Multiplication 4. Exit 5. Reset\n";/// menu to reset
	cin >> choice; 
if (choice == 1)
{
		while (useranswer != answer| useranswer == answer)
		{
			if (num1 < num2) //experimental code for ordering later on
			{
			answer = num1 + num2;
			cout << setw(3) << num2 << "\n";
			cout << setw(1) << "+" << num1 << "\n";
			cout << setw(3) << "---\n";
			cin >> useranswer;
			if (useranswer == answer)
				{
					cout << "\nCongratulations! You answered the correct answer.\n\n\n";
					break;
				} 
			else
			{
				cout << "\nTry please try again.\n\n\n";
				break;
			}
			}
			else 
			{
			answer = num1 + num2;
			cout << setw(3) << num1 << "\n";
			cout << setw(1) << "+" << num2 << "\n";
			cout << setw(3) << "---\n";
			cin >> useranswer;
			if (useranswer == answer)
			{
				cout << "\nCongratulations! You answered the correct answer.\n\n\n";
				break;
			} 
			else
			{
				cout << "\nTry please try again.\n\n\n";
				break;
			}
			}
		}
}
		
else if (choice == 2)
{
	while (useranswer != answer| useranswer == answer)
		{
			answer = num1 - num2;
			cout << setw(3) << num1 << "\n";
			cout << setw(1) << "-" << num2 << "\n";
			cout << setw(3) << "---\n";
			cin >> useranswer;
			if (useranswer == answer)
				{
					cout << "\nCongratulations! You answered the correct answer.\n\n\n";
					break;
				}
					else
				{
					cout << "\nSorry please try again.\n\n\n";
					break;
				}
		}	
}
else if (choice == 3)
{
		while (useranswer != answer| useranswer == answer) //loops problem until answered
		{
			answer = num1 * num2;
			cout << setw(3) << num1 << "\n";
			cout << setw(1) << "*" << num2 << "\n";
			cout << setw(3) << "---\n";
			cin >> useranswer;
			if (useranswer == answer)
			{
				cout << "\nCongratulations! You answered the correct answer.\n\n\n";
				break;
			}
			else
			{
				cout << "\nSorry please try again.\n\n\n";
				break;
			}
		}
}
else if (choice == 5) // code for resetting number choice
{
	//resets numbers
	seed = time(0);
	srand(seed);
	num1 = rand() % 50 + 11;
	num2 = rand() % 50 + 11;
	system("cls");
}
else if (choice == 4)
{
	cout << "Exiting...\n";
	return 0;
}
else 
{
	cout << "Invalid entry. Try Again\n\n"; 
}
}
}
