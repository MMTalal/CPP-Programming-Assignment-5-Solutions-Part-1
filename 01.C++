#include <iostream>
using namespace std;

// Function to print elements of an array
// Parameters:
//   arr[] - The array to be printed
//   n     - The number of elements to print
void PrintArr(int arr[1000], int n){
    cout << "Array elements: ";
    // Loop through the array and print each element
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main() {
    // Display the assignment title and description.
    cout << "This is Assignment No. 1;" << endl << endl;
    cout << "Write a program to print all elements of an array using a function." << endl;

    // Prompt the user to input the size of the array
    cout << "Input the size of the array please: ";
    int num;
    cin >> num;
    
    // Check if the input size is within the allowed limit
    if (num < 0 || num > 1000) {
        cout << "Invalid array size. Please enter a size between 0 and 1000." << endl;
        return 1; // Exit the program with an error code
    }

    // Prompt the user to input the values of the array
    cout << "Input the values of the array please: ";

    int arr[1000];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    // Call the function to print the array
    PrintArr(arr, num);

    return 0; // Indicate successful program termination
}