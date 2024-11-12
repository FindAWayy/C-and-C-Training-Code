// reading from a file 

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("test1.txt"); // Open file for reading

    if (!inFile) {  // Check if file opened successfully
        cerr << "File could not be opened!" << endl;
        return 1;
    }

    int num;
    string name;
    inFile >> num >> name; // Read integer and string from file

    cout << "Number: " << num << ", Name: " << name << endl;

    inFile.close();  // Always close the file
    return 0;
}

