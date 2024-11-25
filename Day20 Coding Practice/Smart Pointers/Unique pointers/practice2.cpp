// Unique Pointers ( Example 2 ) 

#include <iostream>
#include <memory>
using namespace std ; 

class MyClass {
public:
    MyClass() { cout << "MyClass constructor\n"; }
    ~MyClass() { cout << "MyClass destructor\n"; }

    void greet() { cout << "Hello from MyClass!\n"; }
};

// Function that takes ownership of the unique_ptr
void takeOwnership(unique_ptr<MyClass> ptr2) {
    ptr2->greet(); // Access the object
}

int main() {
    unique_ptr<MyClass> ptr = make_unique<MyClass>();
    takeOwnership(move(ptr)); // Transfer ownership to the function

    if (!ptr) {
        cout << "ptr no longer owns the object\n";
    }
    // After this, ptr will be empty, and the object is owned by the function parameter
}
