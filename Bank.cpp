// Bank.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include<cmath>;
int main()
{

  char repeatCycle;
do
{
   
    float userAmount;
    int dollars, cents;
    int hundreds, fifties, twenties, tens, fives, ones;
    int quarters, dimes, nickels, pennies;

    // Prompting the user for the userAmount each time the person wants another solution 
    cout << "-------------------------------" << endl;
    cin >> userAmount;
    

    //using the round implementation to round the each answer 
    userAmount = round(userAmount * 100) / 100;

    //conversion from float to int 
    dollars = (int)userAmount;
    cents = (int)((userAmount - dollars) * 100 + 0.5);

    // Computing bills and coins
    
    dollars %= 100;
    fifties = dollars / 50;
    dollars %= 50;
    twenties = dollars / 20;
    dollars %= 20;
    tens = dollars / 10;
    dollars %= 10;
    fives = dollars / 5;
    dollars %= 5;
    ones = dollars;

    quarters = cents / 25;
    cents %= 25;
    dimes = cents / 10;
    cents %= 10;
    nickels = cents / 5;
    cents %= 5;
    pennies = cents;

    // Printing the amounts of each each amount in either dollars or cents 
    cout << "Pennies: " << pennies << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Ones: " << ones << endl;
    cout << "Fives: " << fives << endl;
    cout << "Tens: " << tens << endl;
    cout << "Twenties: " << twenties << endl;
    cout << "Fifties: " << fifties << endl;
    cout << "Hundreds: " << hundreds << endl;

    cout << "-------------------------------" << endl;
    cout << "-------------------------------" << endl;

    // Prompting the user to repeat the program, press y for another solution, press no to end the solution
    cout << "Do you want to enter another amount ? (y / n):" << endl;
    cin >> repeatCycle;
}
 while (repeatCycle == 'y' || repeatCycle == 'Y');
    
return 0;
}
	
	

