#include <iostream>  // Include the input-output stream library for using cout and cin
#include <string>    // Include string library to use string-related functions

using namespace std;

// Function to return a string containing all occurrences of a specified character in a given text
// Parameters:
//   text  - The input string provided by the user
//   letter - The character to check and extract from the text
// Returns:
//   A string containing all occurrences of 'letter' found in 'text'
string CharRepeated(string text, char letter) {
    string result = "";  // Initialize an empty string to store the repeated characters

    // Loop through each character in the input string
    for (char i : text) 
    {
        if (i == letter) 
        {   // Check if the current character matches the given letter
            result += letter; // Append the letter to the result string
        }
    }

    return result;  // Return the final string containing repeated occurrences of the letter
}

int main() {
    // Display the assignment title and description.
    cout << "This is Assignment No. 4;" << endl << endl;
    cout << "Write a function that takes a string and returns the most repeated character." << endl;

    // Prompt the user to input a string
    cout << "Input the text you want: ";
    string text;  
    cin >> text;  // Read the input string from the user

    // Prompt the user to input a single character to check for repetition
    cout << "Input the letter you want to check if it's repeated: ";
    char letter;  
    cin >> letter; // Read a single character from the user

    // Call the function to get repeated occurrences and display the result
    string result = CharRepeated(text, letter);
    cout << "Output: " << result << endl;  // Output the result string

    return 0;  // Indicate successful program termination
}
