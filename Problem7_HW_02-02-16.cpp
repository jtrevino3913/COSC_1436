// John Anthony Trevino 02-02-2016
// Problem7: Customers Total calculator
#include <iostream>
using namespace std;
int main (){
	double numtypede, numtypedp, cptypede, cptypedp, amounte, amountp, tamount;
	
	cout << "Typing Haven total calculator\n\n\n\n";
	cout << "Please enter number of typed envelopes: ";
	cin >> numtypede;
	cout << "\nPlease enter number of typed papers: ";
	cin >> numtypedp;
	cout << "\nPlease enter the charge per typed envelope: ";
	cin >> cptypede;
	cout << "\nPlease enter the charge per typed page: ";
	cin >> cptypedp;

	amounte = numtypede * cptypede;
	amountp = numtypedp * cptypedp;
	tamount =  amounte + amountp;

	cout << "\n\n\nTotal amount due for envelopes: " << amounte;
	cout << "\n\nTotal amount due for pages: " << amountp;
	cout << "\n\nTotal amount: " << tamount << "\n\n\n";
	system("pause");
	return 0;
}
