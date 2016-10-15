//John Anthony Trevino 02-24-2016
// Problem11: Quiz2
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){
unsigned seed;
int num, usernum;
int tries = 0;
seed = time(0);
srand(seed);

num = rand() % 100 +1;


while (usernum != num)
{
cout << "Guess Number: ";
cin >> usernum;
tries++;
if (usernum < num)
{
	cout << "Too Low. Try Again\n";
}
else if (usernum > num)
{
	cout << "Too High. Try Again\n";
}
}
cout << "Correct! The Number was " << num << "\n\n";
cout << "In " << tries << " guesses\n\n\n";
system("pause");
return 0;
}
