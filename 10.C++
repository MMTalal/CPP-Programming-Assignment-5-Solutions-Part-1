#include <iostream>  // Include the iostream library for input/output operations
#include <string>    // Include the string library for string manipulation

using namespace std; // Allow usage of standard namespace to avoid writing std:: before functions

// Function to count the total number of words in a string
int WordsCount(string text) 
{
    int count = 0; // Start at 0 because there's at least one word

    // Loop through each character in the string, except the last one
    for (int i = 0; i < text.size() - 1; i++) 
    { 
        // Check if the current character is a space and the next character is not a space
        // This identifies word boundaries (i.e., transitions from space to a letter)
        if (text[i] == ' ' && text[i + 1] != ' ') 
        {
            count++; // Increment the word count when a new word starts
        }
    }

    // If the first character is not a space, count the first word
    if (text[0] != ' ')
    {
        count++;
    }

    return count; // Return the total word count
}

int main() {
    // Display assignment details
    cout << "This is Assignment No. 10;" << endl << endl;
    cout << "Write a C++ program to count the total number of words in a string." << endl;

    // Prompt the user to enter a text
    cout << "Input text please: ";
    
    // Declare a string variable to store user input
    string text;
    
    // Read the input from the user (including spaces)
    getline(cin, text); 

    // Call the WordsCount function and print the result
    cout << "The total number of words: " << WordsCount(text) << endl;

    return 0; // Indicate successful program termination
}
