// Shared Pointers ( Example 1 ) 

#include <iostream>
#include <memory>
using namespace std ; 

class MyClass {
public:
    MyClass() { cout << "MyClass constructor\n"; }
    ~MyClass() { cout << "MyClass destructor\n"; }
    void greet() { cout << "Hello from MyClass\n"; }
};

int main() {
    shared_ptr<MyClass> ptr1 = make_shared<MyClass>(); // ptr1 owns MyClass object
    cout << "Use count: " << ptr1.use_count() << "\n";

    {
        shared_ptr<MyClass> ptr2 = ptr1; // ptr2 shares ownership with ptr1
        cout << "Use count: " << ptr1.use_count() << "\n"; // Both ptr1 and ptr2 point to the same object
        ptr2->greet();
    } // ptr2 goes out of scope here, but the object is not deleted yet

    cout << "Use count after ptr2 goes out of scope: " << ptr1.use_count() << "\n";
    
    {
    shared_ptr<MyClass>ptr3 = ptr1 ;
    cout << "Use count: " << ptr3.use_count() << "\n";
    }
    
     cout << "Use count after ptr3 goes out of scope: " << ptr1.use_count() << "\n";
    

    // ptr1 still owns the object
    ptr1->greet();
}
