// order of constructors and destructors 

#include <iostream>

using namespace std;

class Grandparent {
public:
    Grandparent() {
        cout << "Grandparent Constructor Called" << endl;
    }
    ~Grandparent() {
        cout << "Grandparent Destructor Called" << endl;
    }
};


class Parent : public Grandparent {
public:
    Parent() {
        cout << "Parent Constructor Called" << endl;
    }
    ~Parent() {
        cout << "Parent Destructor Called" << endl;
    }
};

class Child : public Parent {
public:
    Child() {
        cout << "Child Constructor Called" << endl;
    }
    ~Child() {
        cout << "Child Destructor Called" << endl;
    }
};

class GrandChild : public Child {
public:
    GrandChild() {
        cout << "GrandChild Constructor Called" << endl;
    }
    ~GrandChild() {
        cout << "GrandChild Destructor Called" << endl;
    }
};

class GreatGrandChild : public GrandChild {
public:
    GreatGrandChild() {
        cout << "GreatGrandChild Constructor Called" << endl;
    }
    ~GreatGrandChild() {
        cout << "GreatGrandChild Destructor Called" << endl;
    }
};

int main() {
    GreatGrandChild ggc;
    return 0;
}
