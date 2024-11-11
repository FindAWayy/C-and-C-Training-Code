// Diamond Problem 

#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "A's show()" << endl;
    }
};

class B : public A {
public:
    void show() {
        cout << "B's show()" << endl;
    }
};

class C : public A {
public:
    void show() {
        cout << "C's show()" << endl;
    }
};

// Class D inherits from both B and C
class D : public B, public C {
    // D does not override show(), so it faces ambiguity
};

int main() {
    D d;
    // d.show();  // Error: ambiguous which show() to call (B's or C's)
    return 0;
}

/// Solution ////

#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "A's show()" << endl;
    }
};

// Virtual inheritance to solve the diamond problem
class B : virtual public A {
public:
    void show() {
        cout << "B's show()" << endl;
    }
};

class C : virtual public A {
public:
    void show() {
        cout << "C's show()" << endl;
    }
};

class D : public B, public C {
    // No ambiguity now; only one instance of A is inherited
};

int main() {
    D d;
    d.B::show();  // Calls B's show()
    d.C::show();  // Calls C's show()
    d.show();     // Calls A's show() because of virtual inheritance
    return 0;
}

