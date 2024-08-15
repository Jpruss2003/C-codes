// Arrs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "arraytools.h"
int main()
{
    char repeatCycle;
    do
    {
       
        

        //------------------------------------
        // Declare 2 arrays of short int
        short int Arr1[] = { 7, 99, 22, 33, -10, 88, 11 };
        short int Arr2[] = { 9, -9, 1, 22, 333, 4, 555, 6, 9 };

        short int* nptr;

        // Declare and assign pointers variables to each of the 2 arrays declared above
        short int* ar1, * ar2;   // TODO: assign these variables.
        ar1 = &Arr1[0];
        ar2 = &Arr2[0];
        // Display Arr1 and Arr2
        DisplayArray(ar1);

        DisplayArray(ar2);

        // Call the ConcatArray function pass in a pointer to Arr1 and
       // a pointer to Arr2 as parameters.  You can use nptr to accept the return value.

        nptr = ConcatArray(ar1, ar2);

        // Display the New Array
        DisplayArray(nptr);

        
        // Call GetArrayN with and display each array separately

        short int* suba1 = GetArrayN(nptr, 1);
        DisplayArray(suba1);
        delete[] suba1;
        suba1 = NULL;


        short int* suba2 = GetArrayN(nptr, 2);
        DisplayArray(suba2);
        delete[] suba2;
        suba2 = NULL;

        // Reverse the order


        ReverseArray(nptr);


        // Display the New Array (reverse order now)


        DisplayArray(nptr);
        // Display the Memory usages



        delete[] nptr;
        nptr = NULL;

        short int sarray1[] = { 7, 11, 22, 33, 444, 88, 7 };
        short int sarray2[] = { 7, 10, 20, 33, 444, 88, 99 };
        short int sarray3[] = { 7, 1111, 2222, 3333, 4444, 888, 1111 };

        ScrambleArray(sarray1);

        cout << endl;
        DisplayArray(sarray1);
        

        ScrambleArray(sarray2);
        DisplayArray(sarray2);
        
        cout << endl;
        ScrambleArray(sarray3);
        DisplayArray(sarray3);
        
        
        cout << "Do you want to enter another amount ? (y / n):" << endl;
        cin >> repeatCycle;
    }
    

while (repeatCycle == 'y' || repeatCycle == 'Y');


}
