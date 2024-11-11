/// Example 2 

#include <iostream>
using namespace std;

class A {
public:
    int a;
    A() : a(5) {}

    void show() {
        cout << "A's show(), a = " << a << endl;
    }
};

class B : virtual public A {
public:
    void show() {
        cout << "B's show(), a = " << a << endl;
    }
};

class C : virtual public A {
public:
    void show() {
        cout << "C's show(), a = " << a << endl;
    }
};

class D : public B, public C {
public:
    void show() {
        cout << "D's show(), a = " << a << endl;
    }
};

int main() {
    D d;
    d.show();  // Calls D's show() (no ambiguity)
    cout << "Value of a in D: " << d.a << endl;  // Accesses a from A via virtual inheritance
    return 0;
}
