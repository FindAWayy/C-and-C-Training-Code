// Runtime Polymorphism in Constructors and Destructors 

#include<iostream>
using namespace std;

class A {
public:
    A() {
        cout << "A's constructor called." << endl;
        fun(); 
    }
    
    virtual void fun() {  
        cout << "A::fun() called." << endl;
    }

    virtual ~A() { 
        cout << "A's destructor called." << endl;
    }
    
        virtual void fun2() { 
        cout << "A::fun2() called." << endl;
    }
};

class B : public A {
public:
    B() {
        cout << "B's constructor called." << endl;
        fun();
    }

    ~B() {
        cout << "B's destructor called." << endl;
        fun2();  
    }

    virtual void fun()  { 
        cout << "B::fun() called." << endl;
    }

    virtual void fun2() {  // New virtual function in B
        cout << "B::fun2() called." << endl;
    }
};

int main() {
    A a;  // Creating an object of type A
    
    B b;  // Creating an object of type B
    
    return 0;
}