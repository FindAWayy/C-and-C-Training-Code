// Unique Pointers ( Example 1 ) 

#include <iostream>
#include <memory>
using namespace std ; 

class MyClass {
public:
    MyClass() { cout << "MyClass constructor\n"; }
    ~MyClass() { cout << "MyClass destructor\n"; }
    void greet() {cout << "Hello from MyClass\n"; }
};

int main() {
    
    unique_ptr<MyClass> ptr1 = make_unique<MyClass>(); // ptr1 owns MyClass object
    ptr1->greet();
    

    // Ownership transfer via std::move
    unique_ptr<MyClass> ptr2 = move(ptr1); // Now ptr2 owns the object

    if (!ptr1) {
        cout << "ptr1 is now empty.\n"; // ptr1 no longer owns the object
    }

    ptr2->greet(); // ptr2 still owns the object
}
