#include <iostream>  // Include input/output stream library for console operations (cout, cin)
#include <string>    // Include string library for string class and manipulation functions

using namespace std; // Use standard namespace to avoid repeating 'std::' prefix

// Function to remove all characters after the first '#' anchor in a URL
// Parameter: website (pass-by-reference to modify original string directly)
void CleanSite(string& website) {
    // Iterate through each character in the string using index-based access
    for (int i = 0; i < website.size(); i++) 
    {
        // Check if current character is the anchor symbol
        if (website[i] == '#') 
        {
            /* 
            When anchor is found:
            1. Create substring from start (0) to position before '#'
            2. substr() parameters: starting index (0) and length (i)
            3. Assign modified string back to original reference
            */
            website = website.substr(0, i);
            
            // Exit loop immediately after modification to optimize performance
            break; 
        }
    }
    // Output modified website (modifies original string due to pass-by-reference)
    cout << website;
}

int main() {
    // Display assignment header
    cout << "This is Assignment No. 13;" << endl << endl;
    
    // Program description explaining core functionality
    cout << "Write a function to return the URL with anything after the anchor (#) removed." << endl;

    // User input prompt with formatting
    cout << "Input the website please: ";
    
    // String variable declaration to store user input
    string website;
    
    /*
    Read full input line using getline() instead of cin >> to:
    1. Capture spaces in URLs
    2. Handle empty inputs consistently
    3. Receive full website path before newline
    */
    getline(cin, website); 

    // Process and display results through CleanSite function
    CleanSite(website);

    // Standard return for successful program termination
    return 0; 
}