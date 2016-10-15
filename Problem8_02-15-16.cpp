// John Anthony Trevino 02-15-16
// Problem8: Math Tutor v2 p.236
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main (){
unsigned seed;
int num1, num2, answer, useranswer;

seed = time(0);
srand(seed);
num1 = rand() % 50 + 11;
num2 = rand() % 50 + 11;
answer = num1 + num2;

cout << "Math Tutor v2\n\n"; 
cout << setw(3) << num1 << "\n";
cout << setw(1) << "+" << num2 << "\n";
cout << setw(3) << "---\n";
cin >> useranswer;
if (useranswer == answer)
{
	cout << "\nCongratulations! You answered the correct answer.\n\n\n";

}
else
{
	cout << "\nSorry please try again.\n\n\n";
}

system("pause");
return 0;
}
