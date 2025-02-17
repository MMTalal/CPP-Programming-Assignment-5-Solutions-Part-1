#include <iostream>  // Include the iostream library for input/output operations
#include <string>    // Include the string library for string manipulation

using namespace std; // Allow usage of the standard namespace to avoid writing std:: before functions

// Function to replace specific characters in a string based on given rules
void ReplaceChar(string text) 
{
    // Iterate through each character in the string
    for (int i = 0; i < text.size(); i++) 
    { 
        /*
        // Previous if-else version (commented out for readability)
        if (text[i] == 'a') // If the character is 'a'
        {
            text[i] = 'b'; // Replace 'a' with 'b'
        }
        else if (text[i] == 'p') // If the character is 'p'
        {
            text[i] = 'q'; // Replace 'p' with 'q'
        }
        else if (text[i] == 'z') // If the character is 'z'
        {
            text[i] = 'a'; // Replace 'z' with 'a' (cycling back to the start of the alphabet)
        }
        else // If the character is anything else
        {
            text[i] = text[i]; // Leave it unchanged
        }
        */

        // Using a switch-case structure for improved readability and efficiency
        switch (text[i])
        {
            case 'a': text[i] = 'b'; break; // Replace 'a' with 'b'  
            case 'p': text[i] = 'q'; break; // Replace 'p' with 'q'
            case 'z': text[i] = 'a'; break; // Replace 'z' with 'a' (wrap around)
            default: break; // If the character does not match any case, leave it unchanged
        }
    }
    
    cout << text; // Output the modified string
}

int main() {
    // Display assignment details
    cout << "This is Assignment No. 11;" << endl << endl;
    
    // Explain the program's functionality to the user
    cout << "Write a C++ program to change every letter in a given string with the next letter in the alphabet (e.g., a→b, p→q, z→a)" << endl;


    // Prompt the user to enter a string
    cout << "Input text please: ";
    
    // Declare a string variable to store user input
    string text;
    
    // Read the input string from the user (supports spaces)
    getline(cin, text); 

    // Call the ReplaceChar function to process and print the modified string
    ReplaceChar(text);

    return 0; // Indicate successful program termination
}
