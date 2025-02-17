#include <iostream>
#include <string>

using namespace std;

// Function to convert a string to lowercase without using <cctype>
void Lowercase(string &text) 
{
    // Iterate through each character in the string
    for (int i = 0; i < text.size(); i++) 
    { 
        // Check if the character is an uppercase letter (A-Z)
        if (text[i] >= 'A' && text[i] <= 'Z') 
        { 
            // Convert uppercase letter to lowercase by adding 32 (ASCII conversion)
            text[i] = text[i] + 32;
        }
    }

    // Output the modified string
    cout << text << endl;
}

int main() {
    // Display assignment details
    cout << "This is Assignment No. 5;" << endl << endl;
    cout << "Write a function that receives a string and converts it into lowercase." << endl;

    // Prompt the user for input
    cout << "Input the text: ";
    string text;
    cin >> text; // Read input string from user

    // Call function to convert text to lowercase
    Lowercase(text);

    // Indicate successful program termination
    return 0;
}
