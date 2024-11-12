// Writing in a file and then reading it 

#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream outFile("test2.txt");  // Open file for writing
    if (!outFile) {
        cerr << "File could not be opened!" << endl;
        return 1;
    }
    outFile << "Hello, this is a test file.\n";
    outFile << "Writing more lines of text.";
 
    ifstream inFile("test2.txt");
 
    if (!inFile) {  // Check if file opened successfully
        cout << "File could not be opened!" << endl;
        return 1;
    }
 
 
    string line;
    while (getline(inFile, line)) {  // Read line by line
        cout << line << endl;  // Print each line to console
    }
    inFile.close();
    return 0;
}
