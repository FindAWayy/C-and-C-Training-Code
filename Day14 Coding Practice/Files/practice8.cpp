// writing a paragraph in a file 

#include <iostream>
#include <fstream>
#include <string>
using namespace std ; 

int main() {
    // File path
    string fileName = "example.txt";
    
    // Text to append
    string paragraph = "This is a new paragraph that will be appended to the file.\n"
                            "It can span multiple lines, as shown in this example.\n"
                            "C++ file I/O is easy to use with <fstream>.\n";

    // Open file for appending (if file doesn't exist, it will be created)
    ofstream outFile(fileName, ios::app);

    // Check if the file opened successfully
    if (outFile.is_open()) {
        // Append the paragraph
        outFile << paragraph;

        // Optionally print a message to confirm the action
        cout << "Paragraph appended to " << fileName << "\n";

        // Close the file
        outFile.close();
    } else {
        cout << "Error opening file for writing.\n";
    }

    return 0;
}
