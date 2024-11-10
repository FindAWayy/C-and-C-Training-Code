// Const in function parameters 

#include <iostream>
using namespace std;

class MyClass {
private:
 int value;

public:
    MyClass(int v) : value(v) {}

    void setValue(int v) {
        value = v;
    }

    int getValue() const {
        return value;
    }
};

void printValue(const MyClass& obj) {
    // obj.setValue(10);  // Error: Cannot call non-const member function on a const reference
    cout << "Value: " << obj.getValue() << endl;
}

int main() {
    MyClass obj(5);
    printValue(obj);  // Passed by const reference
    return 0;
}