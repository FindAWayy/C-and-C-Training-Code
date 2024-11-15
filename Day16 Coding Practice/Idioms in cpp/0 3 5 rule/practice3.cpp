//  0/3/5 rule example ( Rule of 5 ) 

#include <iostream>
#include <stdexcept>
#include <utility>  // For std::move

using namespace std;

class PointerManager {
private:
    int* ptr;

public:
    // Constructor: Allocates memory for the integer
    PointerManager(int value) : ptr(new int(value)) {
        cout << "Constructor: Allocating memory for integer with value " << value << endl;
    }

    // Copy constructor: Deep copies the integer value
    PointerManager(const PointerManager& other){
        ptr = new int(*other.ptr);
        cout << "Copy constructor: Deep copying the integer value " << *other.ptr << endl;
    }

    // Copy assignment operator: Performs deep copy and releases old memory
    PointerManager& operator=(const PointerManager& other) {
        cout << "Copy assignment operator: Copying integer value " << *other.ptr << endl;
        if (this != &other) {  // Avoid self-assignment
            delete ptr;  // Free old memory
            ptr = new int(*other.ptr);  // Allocate new memory and copy the value
        }
        return *this;
    }

    // Move constructor: Transfers ownership of resources
    PointerManager(PointerManager&& other){
        ptr = other.ptr ; 
        cout << "Move constructor: Transferring ownership of integer value " << *other.ptr << endl;
        other.ptr = nullptr;  // Leave the original object in a valid state
    }

    // Move assignment operator: Transfers ownership of resources
    PointerManager& operator=(PointerManager&& other)  {
        cout << "Move assignment operator: Transferring ownership of integer value " << *other.ptr << endl;
        if (this != &other) {
            delete ptr;  // Free old memory
            ptr = other.ptr;  // Transfer ownership
            other.ptr = nullptr;  // Leave the original object in a valid state
        }
        return *this;
    }

    // Destructor: Frees dynamically allocated memory
    ~PointerManager() {
        cout << "Destructor: Deallocating memory for the integer." << endl;
        delete ptr;  // Free dynamically allocated memory
    }

    // Function to display the value of the integer
    void display() const {
        cout << "Value: " << *ptr << endl;
    }
};

int main() {

    PointerManager pm1(10);
    pm1.display();

    // Create a new object using copy constructor
    PointerManager pm2 = pm1;  // Copy constructor is called
    pm2.display();

    // Create another object and assign using copy assignment
    PointerManager pm3(5);  
    pm3.display();
    pm3 = pm1;
    pm3.display();

    // Create a new object using move constructor
    PointerManager pm4 = move(pm1);  // Move constructor is called
    pm4.display();
    // pm1.display();  // Undefined behavior if not handled properly (nullptr)

     // Move assignment
    PointerManager pm5(15);
    pm5 = move(pm4);  // Move assignment
    pm5.display(); 

    return 0;
}



