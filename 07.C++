#include <iostream>  // Include the iostream library for input/output operations
#include <string>    // Include the string library for string manipulation

using namespace std; // Allow usage of standard namespace to avoid writing std:: before functions
/*
// Function to reverse a string using iteration (loop method) not Recursive function
void reverse(string &n) 
{
    // Loop starts from the last character and moves to the first
    for (int i = n.size() - 1; i >= 0; i--) 
    { 
        cout << n[i]; // Print each character in reverse order
    }
}
*/

// Recursive function to reverse and print a string
void reverseString(string n) 
{
    // Base case: If the string is empty, stop recursion
    if (n.empty()) 
    {
        return; // Return to stop further recursive calls
    }
    
    cout << n.back(); // Print the last character of the string
    n.pop_back(); // Remove the last character from the string

    reverseString(n); // Recursive call with the modified string (shortened version) like a loop to used again
}

int main() {
    // Display assignment details
    cout << "This is Assignment No. 7;" << endl << endl;
    cout << "Write a function to reverse an integer using recursion." << endl;

    // Declare a string variable to store user input
    string num;

    // Prompt the user to enter a number
    cout << "Input number please: ";

    // Read the input from the user
    cin >> num; // Takes user input as a string (to handle large numbers safely)

    // Call the reverse function (iterative approach)
    // reverse(num);

    // Call the reverseString function (recursive approach)
    reverseString(num);

    return 0; // Indicate successful program termination
}
