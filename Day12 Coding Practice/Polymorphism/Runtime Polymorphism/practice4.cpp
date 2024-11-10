//  Runtime Polymorphism in Multiple Inheritance

#include <iostream>
using namespace std;

class A {
public:
    virtual void show() {
        cout << "Class A show function" << endl;
    }
};

class B {
public:
    virtual void show() {
        cout << "Class B show function" << endl;
    }
};

class C : public A, public B {
public:
    void show() override {
        cout << "Class C show function" << endl;
    }
};

int main() {
    C obj;
    A* ptrA = &obj;
    B* ptrB = &obj;

    ptrA->show(); 
    ptrB->show();  

    return 0;
}
