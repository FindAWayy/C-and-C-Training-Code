 /// Inheritance with access modifiers( Private ) 

#include <iostream>
using namespace std;

// Base class
class Base {
    
    void privateMethod(){
        cout<<"Private Method in Base Class "<<endl;
    }
    
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
class Derived : private Base { // Private Inheritance
public:
    void accessBaseMethods() {
        // privateMethod(); // not accessible
        publicMethod();      // Accessible
        protectedMethod();   // Accessible
    }
};

int main() {
    Derived d;
    d.accessBaseMethods(); 

    // d.publicMethod();     // Not accessible
    // d.protectedMethod();   // Not accessible

    return 0;
}