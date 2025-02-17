#include <iostream>  // Include the iostream library for input/output operations
#include <string>    // Include the string library for string manipulation

using namespace std; // Allow usage of standard namespace to avoid writing std:: before functions

// Function to reverse a string using iteration (loop method) not Recursive function
void reverse(string &n) 
{
    // Loop starts from the last character and moves to the first
    for (int i = n.size() - 1; i >= 0; i--) 
    { 
        // Starts the loop at the last index of the string n (i.e., n.size() - 1).
        // The loop runs as long as i is greater than or equal to 0.
        // After each iteration, the index i decreases by 1, so the loop processes characters in reverse order from the last character to the first.
        cout << n[i]; // Print each character in reverse order
    }
}

int main() {
    // Display assignment details
    cout << "This is Assignment No. 9;" << endl << endl;
    cout << "Write a C program to find reverse of a given string using loop." << endl;
    // Prompt the user to enter a number
    cout << "Input text please: ";
    // Declare a string variable to store user input
    string text;
    // Read the input from the user
    cin >> text; // Takes user input as a string (to handle large numbers safely)

    // Call the reverseString function (recursive approach)
    reverse(text);

    return 0; // Indicate successful program termination
}
