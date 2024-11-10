// Return By reference 

#include <iostream>
using namespace std ; 

class MyClass {
public:
    int value;

    MyClass(int v) : value(v) {}

    MyClass& modifyValue(int newValue) {
        value = newValue;
        return *this;  // Return reference to current object
    }
};

int main() {
    MyClass obj(10);


    cout << "Before modification: value = " << obj.value << ", address = " << &obj << endl;

    obj.modifyValue(20);

    cout << "After modification: value = " << obj.value << ", address = " << &obj << endl;

    return 0;
}
