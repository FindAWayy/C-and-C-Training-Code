/// Runtime Polymorphism in Hierarchical Inheritance

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
    void show() override {
        cout << "Class B show function" << endl;
    }
};

class C : public A {
public:
    void show() override {
        cout << "Class C show function" << endl;
    }
};

int main() {
    A* ptr;
    B bObj;
    C cObj;

    ptr = &bObj;
    ptr->show();  // Output: Class B show function

    ptr = &cObj;
    ptr->show();  // Output: Class C show function

    return 0;
}
