// Normal Destructors vs Virtual Destructors 
( with virtual destructors ) 

#include <iostream>
using namespace std;

class Base {
public:
    int* data;
    Base() { data = new int(5); }
    virtual ~Base() { cout << "Base Destructor Called" << endl; delete data; }
};

class Derived : public Base {
public:
    Derived() { data = new int(10); }
    ~Derived() { cout << "Derived Destructor Called" << endl; delete data; }
};

int main() {
    Base* basePtr = new Derived();  // Derived object
    delete basePtr;  // Both Base and Derived destructors are called
    return 0;
}

