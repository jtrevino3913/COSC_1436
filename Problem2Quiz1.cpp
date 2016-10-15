// John Anthony Trevino     02-01-2016
// Problem 2: Quiz 1
#include<iostream>

using namespace std;
int main (){
    double priceCup, pricePlate, numCup, numPlate, salesTax, tpriceCup, tpricePlate, totalprice;
    
    cout << "Party-On Sales Calculator\n\n\n\n";
    cout << "Please enter price of Cup: ";
    cin >> priceCup;
    
    cout << "\nPlease enter price of Plate: ";
    cin >> pricePlate;
    
    cout << "\nPlease enter the number of cups purchased: ";
    cin >> numCup;
    
    cout << "\nPlease enter the number of plates purchased: ";
    cin >> numPlate;
    
    cout << "\nPlease enter sales tax: ";
    cin >> salesTax;
    
    tpriceCup =  priceCup * numCup;
    tpricePlate = pricePlate * numPlate;
    totalprice = tpriceCup + tpricePlate * salesTax;
    
    cout  << "\n\n\nTotal cost of purchase: " << totalprice << "\n\n\n";
    system("pause");
    return 0;
    }
