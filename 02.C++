#include <iostream>
using namespace std;

// Function to calculate and print the sum of array elements
// Parameters:
//   arr[] - The array containing the elements
//   n     - The number of elements in the array
void PrintArr(int arr[1000], int n){
    int count = 0; // Initialize a variable to store the sum of array elements

    // Loop through the array and accumulate the sum of elements
    for (int i = 0; i < n; i++)
    {
        count += arr[i]; // Add each element to the sum
    }

    // Print the total sum of the array elements
    cout << "Sum of array: " << count;
}

int main() {
    // Display the assignment title and description.
    cout << "This is Assignment No. 2;" << endl << endl;
    cout << "Write a program to find the sum of array elements using a function." << endl;

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
    cout << "Input the values of the array please (you want to sum them): ";

    int arr[1000]; // Declare an array to store the elements
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i]; // Read each element from the user
    }

    // Call the function to calculate and print the sum of the array elements
    PrintArr(arr, num);

    return 0; // Indicate successful program termination
}