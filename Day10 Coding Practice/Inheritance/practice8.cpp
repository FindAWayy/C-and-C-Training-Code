/// Accessing base class memeber function using scope resolution 

#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class show function." << endl;
    }
};

class Derived : public Base {
public:
    void show(int x) { // Hides Base's show()
        cout << "Derived class show function with value: " << x << endl;
    }

    void callBaseShow() {
        Base::show();
    }
};

int main() {
    Derived d;

    d.show(10);   
    d.callBaseShow();

    return 0;
}
