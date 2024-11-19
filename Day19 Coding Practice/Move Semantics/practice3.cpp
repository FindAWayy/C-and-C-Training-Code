// Move Semantics and R value and L value 

#include <iostream>
#include <vector>
#include <utility>  // For std::move

using namespace std;  // Now we can omit 'std::' prefix

// A simple class that demonstrates move semantics
class MyClass {
private:
    int* data;

public:
    // Constructor
    MyClass(int value) : data(new int(value)) {
        cout << "Constructor: Allocated memory for data with value " << *data << "\n";
    }

    // Move Constructor (Rvalue Reference)
    MyClass(MyClass&& other) : data(other.data) {
        other.data = nullptr;  // Set the moved-from object to a valid state
        cout << "Move Constructor: Moved resource, data is now nullptr\n";
    }

    // Move Assignment Operator (Rvalue Reference)
    MyClass& operator=(MyClass&& other)  {
        if (this != &other) {  // Check for self-assignment
            delete data;  // Clean up current resource
            data = other.data;  // Transfer ownership
            other.data = nullptr;  // Set the moved-from object to a valid state
            cout << "Move Assignment Operator: Moved resource, data is now nullptr\n";
        }
        return *this;
    }

    // Copy Constructor (Lvalue Reference)
    MyClass(const MyClass& other) : data(new int(*other.data)) {
        cout << "Copy Constructor: Copied data with value " << *data << "\n";
    }

    // Destructor
    ~MyClass() {
        if (data) {
            cout << "Destructor: Deleting data with value " << *data << "\n";
            delete data;
        } else {
            cout << "Destructor: No resource to delete (moved-from object)\n";
        }
    }
    
    // A function that returns a temporary object (rvalue)
MyClass createTempObject() {
    MyClass tempObj(40);  // Constructor called
    return tempObj;       // Move semantics allows this to avoid copy
}

    // Getter for data
    int getData() const {
        return *data;
    }
};

int main() {
    // Demonstrating lvalue (modifiable object)
    MyClass obj1(10);  // Constructor called
    cout << "obj1 data: " << obj1.getData() << "\n";

    // Demonstrating copy constructor (lvalue)
    MyClass obj2 = obj1;  // Copy constructor called
    cout << "obj2 data: " << obj2.getData() << "\n";

    // Demonstrating rvalue (temporary object) with move semantics
    MyClass obj3 = MyClass(20);  // Move constructor called
    cout << "obj3 data: " << obj3.getData() << "\n";

    // Demonstrating move assignment (rvalue reference)
    MyClass obj4(30);
    obj4 = move(obj3);  // Move assignment operator called
    cout << "obj4 data: " << obj4.getData() << "\n";

    // obj3 is now in a valid but unspecified state
    cout << "obj3 data after move: " << (obj3.getData() ? to_string(obj3.getData()) : "null") << "\n";

    // // Demonstrating move semantics with a return value
    // MyClass obj5 = createTempObject();  // Move constructor or copy constructor depending on optimization
    // cout << "obj5 data after move: " << obj5.getData() << "\n";

    return 0;
}




