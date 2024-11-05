/// Inheritance with access modifiers( Public ) 

#include <iostream>
using namespace std;

class Base {
public:
    void publicMethod() {
        cout << "Public method in Base class." << endl;
    }
protected:
    void protectedMethod() {
        cout << "Protected method in Base class." << endl;
    }
};

// Derived class
class Derived : public Base { // Public Inheritance
public:
    void accessBaseMethods() {
        publicMethod();      // Accessible
        protectedMethod();   // Accessible
    }
};

int main() {
    Derived d;
    d.accessBaseMethods(); // OK: Calls methods of Base

     d.publicMethod();     // accessible
    // d.protectedMethod();   // Not accessible

    return 0;
}
