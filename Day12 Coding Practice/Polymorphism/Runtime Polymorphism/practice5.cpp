//  Runtime Polymorphism in Multilevel Inheritance

#include <iostream>
using namespace std;

class A {
public:
    virtual void show() {
        cout << "Class A show function" << endl;
    }
};

class B : public A {
public:
    void show()  {
        cout << "Class B show function" << endl;
    }
};

class C : public B {
public:
    void show()  {
        cout << "Class C show function" << endl;
    }
};

int main() {
    C obj;
    B* bptr = &obj ; 
    A* ptr = &obj;

    bptr->show();
    ptr->show();

    return 0;
}