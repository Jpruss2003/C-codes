#include<iostream>
using namespace std;

void GetInput(char* inputArray[])
 {
    // Get input for each line and store it in the array
    char inputBuffer[1024]; // Temporary input buffer

    for (int i = 0; i < 3; ++i) {
        cout << "Enter line " << i + 1 << ": ";
        cin.getline(inputBuffer, 1024);

        int length = strlen(inputBuffer);
        inputArray[i] = new char[length + 1]; // Allocate memory for the string

        strcpy_s(inputArray[i], length + 1, inputBuffer); // Copy the string
    }
}
void Search(char* inputArray[], const char* keyword)
{
    bool found = false;
    int totalFound = 0;

    // Loop through each string in the array
    for (int i = 0; i < 3; ++i)
    {
        char* ptr = inputArray[i];
        int len = strlen(keyword);

        // Search for the keyword in the current string
        while ((ptr = strstr(ptr, keyword)) != nullptr)
        {
            // If found, print the string and increment the count
            if (!found)
            {
                cout << "String found in lines:" << endl;
                found = true;
            }
            cout << "Line " << (i + 1) << ": " << inputArray[i] << endl;
            ++totalFound;
            ptr += len;
        }
    }

    // Print appropriate message if keyword not found
    if (!found)
    {
        cout << "String Not Found." << endl;
    }
    else
    {
        cout << "Total number of lines the string was found in: " << totalFound << endl;
    }
}
void Sort(char* inputArray[])
{
    // this part iterates over the entire loop besides the last element and selects the current element to compare with the rest of the strings
    for (int i = 0; i < 2; ++i)
    {
        for (int j = i + 1; j < 3; ++j)   // this loop iterates over the selected element and looks at all the rest of the elements after it 
        {
            if (strcmp(inputArray[i], inputArray[j]) > 0)  // this compares the input[i] and the input[j] and sees who is alphabetically first and then sorts them into position below 
            {
                char* temp = inputArray[i];
                inputArray[i] = inputArray[j];
                inputArray[j] = temp;
            }
        }
    }
}
void DisplayStrings(char* inputArray[])
{
    for (int i = 0; i < 3; ++i)  //this iterates over all the elements in the loop which are the three strings and then uses inputArray[i] to print them out line by line 
    {
        cout << "-------------------"<< endl;
        cout << inputArray[i] << endl;
        cout << "-------------------"<< endl;
    }
}
void ShowLens(char* inputArray[])
{
    for (int i = 0; i < 3; ++i)   //this loop iterates over the entire elements in the string array and then uses strlen function to help figure out the length of each string from all letters spaces and punction, etc
    {   
        cout << "Length of line " << i + 1 << ": " << strlen(inputArray[i]) << endl;
    }
}
int AlphaChars(char* inputArray[])
{
    int count = 0;  
    for (int i = 0; i < 3; ++i) {   // this function iterates all the elements in the string array and uses a count variable to count the alpha characters
        for (int j = 0; j < strlen(inputArray[i]); ++j) {    // in the this loop it uses to j to be < strlen because if its over it will cause an error and then uses a function called isalpha and sees if each character in the strings is an alpha character and if it is it will increase count everytime there is instance of one 
            if (isalpha(inputArray[i][j])) {
                count++;
            }
        }
    }
    return count;      // this function will then return count to get the amount of alpha characters
}
