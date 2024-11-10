/// Deep copy 

#include <iostream>
using namespace std ; 

class MyClass {
public:
    int* value;

    MyClass(int val) {
        value = new int(val);
    }

    // Deep copy constructor
    MyClass(const MyClass& other) {
        value = new int(*other.value);  // Allocates new memory and copies the value
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