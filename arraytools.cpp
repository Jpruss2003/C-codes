#include "arraytools.h"
#include <iostream>
using namespace std;


short int* ConcatArray(short int* arr1, short int* arr2)
{
    int size1 = arr1[0]; // Size of the first array
    int size2 = arr2[0]; // Size of the second array

    short int* newArr = new short int[size1 + size2 + 1]; // Allocate memory for the new array
    newArr[0] = size1 + size2; // Set the first element to the total size of the new array

    // Copy elements from the first array to the new array
    for (int i = 1; i <= size1; ++i)
    {
        newArr[i] = arr1[i];
    }

    // Copy elements from the second array to the new array
    for (int i = 1; i <= size2; ++i)
    {
        newArr[size1 + i] = arr2[i];
    }

    return newArr; // Return the address of the new array
}


void DisplayArray(short int* a) 
{
    int size = a[0]; // Get the total number of elements in the array
    for (int i = 0; i < size; ++i)
    {
        cout << a[i] << " "; // Print each element of the array
    }
    cout << endl;
}

// this method I think is semi complete there will be numbers at the end of this part which i do not know why they are showing up
short int* GetArrayN(short int* orig, int n) {
    // Find the start index of the nth embedded array
    int startIndex = 1;
    for (int i = 1; i < n; ++i)
    {
        startIndex += orig[startIndex] + 1; // Move to the next embedded array
    }

    // Get the size of the nth embedded array
    int size = orig[startIndex];

    // Dynamically allocate memory for the new array
    short int* newArr = new short int[size];

    // Copy elements from the original array to the new array
    for (int i = 0; i < size; ++i)
    {
        newArr[i] = orig[startIndex + i + 1]; // Start from startIndex + 1 to skip the size element
    }

    return newArr; // Return the address of the new array
}



void ReverseArray(short int* arr) 
{
    int size = arr[0]; // Get the total number of elements in the array
    for (int i = 1; i < size / 2 + 1; ++i) 
    {
        short int temp = arr[i];
        arr[i] = arr[size - i];
        arr[size - i] = temp;
    }
}
void ScrambleArray(short int* arr) {
    int size = arr[0]; // Get the total number of elements in the array

    // Seed the random number generator
    srand(time(0));

    // Iterate through the array from the second element
    for (int i = 1; i < size; ++i)
    {
        // Generate a random index within the array (excluding the first element)
        int randomIndex = std::rand() % (size - 1) + 1;

        // Swap the current element with the randomly selected element
        short int temp = *(arr + i);
        *(arr + i) = *(arr + randomIndex);
        *(arr + randomIndex) = temp;
    }
}