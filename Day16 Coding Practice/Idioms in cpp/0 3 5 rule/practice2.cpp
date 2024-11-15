// 0/3/5 rule example ( Rule of 3 ) 

#include <iostream>
#include <stdexcept>

using namespace std;

class PointerManager {
private:
    int* ptr;

public:
    PointerManager(int value){
        ptr = new int(value);
        cout << "Constructor: Allocating memory for the integer with value " << value << endl;
    }

    // Copy constructor: Performs a deep copy of the integer
    PointerManager(const PointerManager& other) {
         ptr = new int ; 
         *ptr = (*other.ptr);
        cout << "Copy constructor: Deep copying the integer value " << *other.ptr << endl;
    }

    // Copy assignment operator: Performs deep copy with cleanup of existing memory
    PointerManager& operator=(const PointerManager& other) {
        cout << "Copy assignment operator: Copying integer value " << *other.ptr << endl;
        if (this != &other) {
            delete ptr;  // Free existing memory

            ptr = new int(*other.ptr);  // Allocate new memory and copy the value
        }
        return *this;
    }

    // Destructor: Frees the dynamically allocated integer
    ~PointerManager() {
        cout << "Destructor: Deallocating memory for the integer." << endl;
        delete ptr;  // Free the dynamically allocated memory
    }

    // Function to display the value of the integer
    void display() const {
        cout << "Value: " << *ptr << endl;
    }
};

int main() {

    PointerManager pm1(10);
    pm1.display();

    // Create another object using the copy constructor
    PointerManager pm2 = pm1; 
    pm2.display();

    // Create an object and assign the value of pm1 to it using copy assignment
    PointerManager pm3(5);
    pm3.display();
    pm3 = pm1;
    pm3.display();

    return 0;
}

