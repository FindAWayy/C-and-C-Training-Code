// Return a copy of the object 

#include <iostream>
using namespace std;

class MyClass {
public:
    int value;

    MyClass() {}

    MyClass(int v) : value(v) {}

    MyClass modifyValue(int newValue) {
        MyClass obj2;
        obj2.value = newValue;
        return obj2;
    }
};

int main() {
    MyClass obj(10);

    cout << "Before modification: value = " << obj.value << ", address = " << &obj << endl;

    MyClass newObj = obj.modifyValue(20);

    cout << "New object after modification: value = " << newObj.value << ", address = " << &newObj << endl;

    return 0;
}
