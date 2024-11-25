// Shared pointer with functions 

#include <iostream>
#include <memory>
using namespace std ; 

class MyClass {
public:
    MyClass(int value) : value(value) {
        cout << "MyClass constructor with value: " << value << "\n";
    }
    ~MyClass() {
        cout << "MyClass destructor with value: " << value << "\n";
    }

    void show() { cout << "Value: " << value << "\n"; }

private:
    int value;
};

// Function that accepts a shared_ptr by reference
void process(shared_ptr<MyClass> ptr) {
    cout << "Processing MyClass object\n";
    ptr->show();
    cout << "Use count after in function: " << ptr.use_count() << "\n";
}

int main() {
    // Create a shared_ptr
    shared_ptr<MyClass> ptr1 = make_shared<MyClass>(42);
    
    cout << "Use count after ptr1 is declared" << ptr1.use_count() << "\n";

    process(ptr1); // ptr1 is passed to the function (ownership is shared)
    // process(move(ptr1)); // ptr1 is passed to the function (ownership is shared) // It will show 1 ; 
    
    cout << "Use count after function called " << ptr1.use_count() << "\n";

    std::cout << "Back in main, ptr1 still owns the object\n";
    ptr1->show();
    
    
    shared_ptr<MyClass> ptr2 = ptr1 ; 
    cout << "Use count after ptr2 is declared: " << ptr1.use_count() << "\n";

    // MyClass object will be destroyed automatically when ptr1 goes out of scope
}
