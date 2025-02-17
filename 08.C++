#include <iostream>  // Include the iostream library for input/output operations
#include <string>    // Include the string library for string manipulation

using namespace std; // Allow usage of the standard namespace to avoid writing std:: before functions

// Function to find the maximum digit in a string representing a number
int MaxDigit(string n) 
{
    int maxDigit = 0; // Initialize to the smallest possible digit (0-9)

    // Loop through each character in the string
    for (int i = 0; i < n.size(); i++) 
    {
        int currentDigit = n[i] - '0'; // Convert character to an integer value
        // Converts the character n[i] (which represents a digit) into its integer equivalent by subtracting the ASCII value of '0'.
        // This allows you to work with numbers as integers even when the input is a string of digits.
        
        /*
        Example:
        If the string is "385629" and the loop is at i = 0 (i.e., the first character):
        
        n[i] = '3'
        '3' - '0' = 51 - 48 = 3
        So, currentDigit = 3
        Now, currentDigit holds the integer value 3, which is the numeric representation of the character '3'.
        */

        // Compare the current digit with the maximum digit found so far
        if (currentDigit > maxDigit) 
        {
            maxDigit = currentDigit; // Update maxDigit if current digit is larger
        }
    }
    return maxDigit; // Return the maximum digit found
}

int main() {
    // Display assignment details to inform the user about the program
    cout << "This is Assignment No. 8;" << endl << endl;
    cout << "Write a function to return the maximum digit in an integer." << endl;
    
    // Prompt the user to enter a number
    cout << "Input number please: ";

    // Declare a string variable to store user input
    string num;

    // Read the input from the user
    cin >> num; // Takes user input as a string (to handle large numbers safely)

    // Call the MaxDigit function and print the result
    cout  << MaxDigit(num);

    return 0; // Indicate successful program termination
}
