/// Shallow Copy 

#include <iostream>
using namespace std ; 

class MyClass {
public:
    int* value; // add - 200
    
    MyClass(int val) {
        value = new int(val);
    }

    MyClass(const MyClass& other) {
        value = other.value;  // Shallow copy: both objects share the same pointer
    }

    ~MyClass() {
        delete value;
    }

    void print() const {
        cout << "Value: " << *value << endl;
    }
};

int main() {
    MyClass obj1(10);
    obj1.print();

    MyClass obj2 = obj1;
    obj2.print();

    *obj2.value = 20; 
    cout << "After modifying obj2:" << endl;
    obj1.print(); 
    obj2.print();

    return 0;
}