// RAII ( Resource Acquisition Is Initialization ) with Files 

#include <iostream>
#include <fstream>
using namespace std ; 

class FileHandler {
private:
    ifstream file;

public:
    // Constructor opens the file
    FileHandler(const string& filename) {
        file.open(filename);
        if (!file.is_open()) {
            throw runtime_error("Failed to open file.");
        }
        cout << "File opened successfully.\n";
    }

    // Destructor closes the file
    ~FileHandler() {
        if (file.is_open()) {
            file.close();
            cout << "File closed.\n";
        }
    }

    // Other methods to read from the file
    void readLine() {
        string line;
        if (getline(file, line)) {
            cout << "Read line: " << line << endl;
        } else {
            cout << "End of file or error.\n";
        }
    }
};

int main() {
    try {
        FileHandler fh("example.txt");
        fh.readLine();  // Read a line from the file
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
    // The file will be automatically closed here when fh goes out of scope
    return 0;
}
