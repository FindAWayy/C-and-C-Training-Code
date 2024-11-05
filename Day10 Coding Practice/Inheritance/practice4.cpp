 /// Inheritance with access modifiers( Protected ) 

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

class Derived : protected Base { // Protected Inheritance
public:
    void accessBaseMethods() {
        publicMethod();      // Accessible
        protectedMethod();   // Accessible
    }
};

class FurtherDerived : public Derived {
public:
    void accessMethods() {
        publicMethod();   // Not accessible/
        protectedMethod();   // Accessible
    }
};

int main() {
    Derived d;
    d.accessBaseMethods();

    FurtherDerived fd;
    fd.accessMethods(); 
    
    fd.publicMethod(); // not accessible until make derived public 
    
    d.publicMethod(); // not accessible because protected
    

    return 0;
}
