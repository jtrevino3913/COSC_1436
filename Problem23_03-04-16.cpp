// John Anthony Trevino 03-04-2016
// Problem27: Saving Account Balance

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	cout << fixed << setprecision(2);
    double startingbal,interest, interest1;
    double totaldes0, totalwit0, totaldes1, totalwit1, total, rate1, rate2, total1;
    
    int count =1;
	while (count <= 3)
    {
    count ++;
    cout << "Saving Account Balance\n";
    cout << "\n\nPlease enter Starting Balance: ";
    cin >> startingbal;
    cout << "\nPlease enter Annual Interest Rate (in %): ";
    cin >> interest;
    
    interest1 = interest/100;
    totaldes0 = 0.00;
    totalwit0 = 0.00;
    
        for (int count1=1; count1 < 4; count1++ )
        {
     	  cout << "Month "  << count1 << ": \n"; 
          cout << "\nPlease enter total amount desposited for: ";
          cin >> totaldes1;
          totaldes0 += totaldes1; 
          
          if (totaldes1 < 0 && totaldes1 == 0)
          {
          	
          cout << "\nInvalid range.\n";
          
          } 
          else
          {
          	
          	cout << totaldes1;
          
          }
        
          cout << "\nPlease enter total amount withdrawn: ";
          cin >> totalwit1;
          totalwit0 += totalwit1; 
          if (totalwit1 < 0|| totalwit1 == 0|| totalwit1 > totaldes1)
          {
          cout << "\nInvalid range.";
          }
          else 
          {
          
          cout <<  totalwit1 << endl << endl;
          
          }

    	}
    	  total = (totaldes0 + startingbal)-totalwit0;
    	  total1= total-startingbal;
          rate1 = interest1/12;
		  rate2 = rate1*total1;
		  
          cout << "\nStarting Balance:" << setw(15) << startingbal;
          cout << "\nTotal Desposited:" << setw(15) << totaldes0;
          cout << "\nTotal Withdrawn:" << setw(16) << totalwit0;
          cout << "\nTotal Interest:" << setw(17) << rate2;
          cout << "\nTotal:" << setw(26) << (total +rate2) << endl << endl << endl;
          system("pause");
          system("cls");
	}
    
return 0;
}
