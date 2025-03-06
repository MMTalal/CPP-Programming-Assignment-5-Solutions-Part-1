#include <iostream>  // Include the I/O stream library for input/output operations
#include <string>    // Include string library for string manipulation

using namespace std;

// Function to find and return the most frequently repeated character in a string
// Parameters:
//   text - The input string to analyze
// Returns:
//   The character that appears most frequently in the input string
char CharRepeated(string text) {
    int max = 0;        // Track the highest occurrence count
    char letter;        // Store the most repeated character
    
    // Outer loop: process each character in the string
    for (int i = 0; i < text.size(); i++) 
    {
        int count = 0;  // Counter for current character's occurrences
        
        // Inner loop: count matches of the current character
        for (int j = 0; j < text.size(); j++) 
        {   
            // Compare with all characters in the string
            if (text[i] == text[j])
            {
                count++;
            }
        }
        
        // Update tracking variables if current character has higher count
        if (count > max)
        {
            max = count;
            letter = text[i];
        }
    }
    
    return letter;  // Return the most frequently occurring character
}

int main() {
    // Display program information
    cout << "This is Assignment No. 4;" << endl << endl;
    cout << "Program that finds the most repeated character in a string." << endl;

    // Get user input
    cout << "Input the text you want: ";
    string text;  
    cin >> text;  // Read user's input string

    // Find and display the result
    cout << CharRepeated(text);
    
    return 0;  // End of program
}
