#include <iostream>  // Include the iostream library for input/output operations
#include <string>    // Include the string library for handling string manipulation

using namespace std; // Allow usage of the standard namespace to avoid writing std:: before functions

// Function to capitalize the first letter of each word in a given string
void CapitalizeWords(string &text)  // Pass by reference to modify the original string
{
    // Check if the first character exists and is a lowercase letter
    if (!text.empty() && text[0] >= 'a' && text[0] <= 'z') 
    {
        text[0] = text[0] - 32; // Convert first character to uppercase using ASCII values
    }

    // Loop through each character in the string starting from index 1
    for (int i = 1; i < text.size(); i++) 
    {
        // Check if the current character is a space
        if (text[i] == ' ')  
        {
            // Ensure there is a next character less than size of word and it's lowercase >> convert it to uppercase
            if (i + 1 < text.size() && text[i + 1] >= 'a' && text[i + 1] <= 'z') 
            {
                text[i + 1] = text[i + 1] - 32; // Convert next character to uppercase
            }
        }
    }

    // Print the modified string after capitalizing words
    cout << text << endl; 
}

int main() {
    // Display the assignment number
    cout << "This is Assignment No. 12;" << endl << endl;
    
    // Display a brief description of the program
    cout << "Write a C++ program to capitalize the first letter of each word in a given string." << endl;

    // Prompt the user to enter a sentence
    cout << "Input text please: ";
    
    // Declare a string variable to store user input
    string text;
    
    // Use getline() to read the entire input, including spaces
    getline(cin, text); 

    // Call the function to process and print the modified string
    CapitalizeWords(text);

    return 0; // Indicate successful program execution
}
