// Exception Handling( example 4 ) Constructor Destructor with exception 

#include <iostream>
#include <stdexcept>  // For standard exceptions
#include <memory>     // For std::unique_ptr
using namespace std ; 

class MyClass {
private:
    int* data;  // Pointer to dynamically allocated memory

public:
    // Constructor that may throw an exception
    MyClass(int value) {
        cout << "Constructor: Allocating memory and initializing...\n";
        if (value < 0) {
            throw invalid_argument("Negative value not allowed during object creation.");
        }
        // Dynamically allocate memory and initialize
        data = new int(value);
        cout << "Constructor: Memory allocated, value initialized to " << *data << "\n";
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor: Cleaning up resources...\n";
        delete data;  // Free allocated memory
        cout << "Destructor: Memory deallocated.\n";
    }

    // A method to display the value
    void display() {
        if (data) {
            cout << "Data value: " << *data << "\n";
        }
    }
};

int main() {
    try {
        // Create an object of MyClass with a negative value to trigger the exception
        MyClass obj(-5);  // This will throw an exception
        obj.display();
    } catch (const invalid_argument& e) {
        cout << "Caught exception in main: " << e.what() << endl;
    } catch (...) {
        cout << "Caught an unknown exception in main.\n";
    }

    // Create another object to demonstrate successful creation
    try {
        MyClass obj(10);  // This should succeed
        obj.display();
    } catch (const std::exception& e) {
        cout << "Caught exception: " << e.what() << endl;
    }

    return 0;
}






