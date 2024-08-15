// Strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "stringtools.h"
#include <iostream>
using namespace std;
int main()
{
    
    char* inputStrings[3];

    GetInput(inputStrings);

    cout << "Displaying the input strings:" << endl;
    DisplayStrings(inputStrings);

    cout << "\nSearching for 'love':" << endl;
    Search(inputStrings, "love");

    cout << "\nSorting the strings..." << endl;
    Sort(inputStrings);

    cout << "Displaying sorted strings:" << endl;
    DisplayStrings(inputStrings);

    cout << "\nShowing lengths of each string:" << endl;
    ShowLens(inputStrings);

    cout << "\nTotal alphabetic characters: " << AlphaChars(inputStrings) << endl;

    // Clean up dynamically allocated memory
    for (int i = 0; i < 3; ++i) {
        delete[] inputStrings[i];
    }

    return 0;
}
