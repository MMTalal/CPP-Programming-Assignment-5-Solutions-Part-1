#include <iostream>
using namespace std;

// Function to calculate the sum of the main diagonal elements of a matrix
// Parameters:
//   arr[][] - The 2D array (matrix)
//   row     - The number of rows in the matrix
//   col     - The number of columns in the matrix
// Returns:
//   The sum of the main diagonal elements
int Sum_MainDiagonal(int arr[100][100], int row, int col) {
    int count = 0; // Initialize a variable to store the sum of diagonal elements

    // Loop through the matrix
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            if (i == j) 
            { // Check if the current element is on the main diagonal
                count += arr[i][j]; // Add the diagonal element to the sum
            }
        }
    }
    return count; // Return the sum of the main diagonal elements
}

int main() {
    // Display the assignment title and description.
    cout << "This is Assignment No. 3;" << endl << endl;
    cout << "Write a function that takes a matrix and returns the sum of the main diagonal (major diagonal) elements of the matrix." << endl;

    // Prompt the user to input the size of the matrix
    cout << "Input the number of rows in the matrix: ";
    int row;
    cin >> row;

    cout << "Input the number of columns in the matrix: ";
    int col;
    cin >> col;

    // Check if the matrix is square (rows == columns)
    if (row != col) 
    {
        cout << "Error: The matrix must be square (rows == columns) to have a main diagonal." << endl;
        return 1; // Exit the program with an error code
    }

    // Prompt the user to input the values of the matrix
    cout << "Input the values of the matrix (row by row):" << endl;

    int arr[100][100]; // Declare a 2D array to store the matrix
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            cin >> arr[i][j]; // Read each element of the matrix
        }
    }

    // Display the result
    cout << Sum_MainDiagonal(arr, row, col);

    return 0; // Indicate successful program termination
}