// Dynamic cast ( Example 2 ) 

#include <iostream>
using namespace std;

class Base {
public: 
    Base(){
        cout<<"Base constructor "<<endl;
    }
    virtual void speak() { cout << "Base class speaking" << endl; }
    virtual ~Base() {
        cout<<"Base Destructor"<<endl;
    }
};

class Derived1 : public Base {
public:
     Derived1(){
        cout<<"Derived1 constructor "<<endl;
    }
    void speak() override { cout << "Derived1 class speaking" << endl; }
    
       ~Derived1() {
        cout<<"Derived1 Destructor"<<endl;;
    }
};

class Derived2 : public Base {
public:
       Derived2(){
        cout<<"Derived2 constructor "<<endl;
    }
    void speak() override { cout << "Derived2 class speaking" << endl; }
    
        ~Derived2() {
        cout<<"Derived2 Destructor"<<endl;
    }
};

void processObject(Base* obj) {
    // Downcast to specific types to perform special behavior
    if (Derived1* d1 = dynamic_cast<Derived1*>(obj)) {
        cout << "Handling Derived1: ";
        d1->speak();
        // delete d1;
    }
    else if (Derived2* d2 = dynamic_cast<Derived2*>(obj)) {
        cout << "Handling Derived2: ";
        d2->speak();
    }
    else {
        cout << "Unknown object type" << endl;
    }
}

int main() {
    Base* base1 = new Derived1();
    Base* base2 = new Derived2();

    processObject(base1);  // Output: Handling Derived1: Derived1 class speaking
    processObject(base2);  // Output: Handling Derived2: Derived2 class speaking

    delete base1;
    delete base2;
    return 0;
}
