//// nullptr in c++

#include <iostream>
using namespace std ; 

void process(int* ptr) {
    if (ptr) {
        cout << "Pointer points to: " << *ptr <<endl;
    } else {
       cout << "Pointer is null." <<endl;
    }
}

int main() {
    int value = 42;
    int* p1 = &value;
    int* p2 = nullptr;

    process(p1); //Pointer points to: 42
    process(p2); // Pointer is null.

    return 0;
}


///// using delete with nullptr 

#include <iostream>
using namespace std; 

class MyClass {
public:
    MyClass() { cout << "MyClass constructed." << endl; }
    ~MyClass() { cout << "MyClass destructed." << endl; }
};

int main() {
    MyClass* ptr = nullptr;

    // Safe to delete a null pointer
    delete ptr; // Does nothing; no error

    ptr = new MyClass();
    delete ptr;
    ptr = nullptr; // Resetting to nullptr after deletion

    return 0;
}

