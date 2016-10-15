// John Anthony Trevino 02-10-2016
// Problem10: Bank Charges
#include <iostream>
using namespace std;

int main()
{
int numcheckspm;
double tamount0, tamount1, tamount2, tamount3;

cout << "Bank Charges Calculator\n\n";
cout << "Please enter number of checks written: " ;
cin >> numcheckspm;

tamount0 = numcheckspm *.10;
tamount1 = numcheckspm *.08;
tamount2 = numcheckspm *.06;
tamount3 = numcheckspm *.04;

if (numcheckspm < 20)
{
   cout << "\nBank fee for month: " << tamount0 + 10 << "\n\n\n";  
}
else if (numcheckspm < 40)
{
   cout << "\nBank fee for month: " << tamount1 + 10 << "\n\n\n"; 
}
else if (numcheckspm < 60)
{
   cout << "\nBank fee for month: " << tamount2 + 10 << "\n\n\n";   
}  
else 
{
   cout << "\nBank fee for month: " << tamount3 + 10 << "\n\n\n";  
}

system("pause");
return 0; 
}
