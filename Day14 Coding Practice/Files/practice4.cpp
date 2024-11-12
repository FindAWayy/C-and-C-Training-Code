// Reading a file with checks 

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("test2.txt");

    if (!inFile.is_open()) {
        cerr << "Failed to open the file!" << endl;
        return 1;
    }

    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    if (inFile.eof()) {
        cout << "End of file reached." << endl;
    }

    inFile.close();
    return 0;
}
