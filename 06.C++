#include <iostream>
#include <string>

using namespace std;

// Function to check if all characters in a string are digits
void AllDigit(string &text) 
{
    bool flag = true; // Assume all characters are digits

    // Iterate through each character in the string
    for (int i = 0; i < text.size(); i++) 
    { 
        // Check if the character is NOT a digit (0-9)
        if (text[i] < '0' || text[i] > '9') 
        { 
            flag = false;
            break; // Stop further checking as soon as a non-digit is found
        }
    }

    // Print result
    cout << (flag ? "True" : "False") << endl;
}

int main() {
    // Display assignment details
    cout << "This is Assignment No. 6;" << endl << endl;
    cout << "Write a function to check if all characters are digits or not." << endl;

    // Prompt the user for input
    cout << "Input a franco word: ";
    string text;
    cin >> text; // Read input string from user

    // Call function to check if all characters are digits
    AllDigit(text);

    return 0; // Indicate successful program termination
}
