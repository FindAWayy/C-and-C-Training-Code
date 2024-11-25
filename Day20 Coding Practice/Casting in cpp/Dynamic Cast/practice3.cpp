// Dynamic casting ( Example 3 ) 

#include <iostream>
#include <stdexcept>
using namespace std;

class Base {
public:
    virtual void speak() { cout << "Base class speaking" << endl; }
    virtual ~Base() {}
};

class Derived : public Base {
public:
    void speak() override { cout << "Derived class speaking" << endl; }
};

class AnotherClass {};

int main() {
    Base* basePtr = new Base();
    
    try {
        Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
        if (derivedPtr) {
            derivedPtr->speak();
        } else {
            cout << "Invalid downcast to Derived" << endl;
        }

        // Attempting an invalid cast
        AnotherClass* anotherPtr = dynamic_cast<AnotherClass*>(basePtr);  // Invalid cast
        if (!anotherPtr) {
            cout << "Invalid downcast to AnotherClass" << endl;
        }
    } catch (const bad_cast& e) {
        cout << "Caught exception: " << e.what() << endl;
    }

    delete basePtr;
    return 0;
}
