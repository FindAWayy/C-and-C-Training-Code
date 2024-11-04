/// using with class 

#include <iostream>
using namespace std ; 

class MyClass {
public:
    MyClass() {
        cout << "Constructor called!" << endl;
    }
    
    ~MyClass() {
       cout << "Destructor called!" <<endl;
    }
};

int main() {
    MyClass* obj = new MyClass(); // Constructor is called

    delete obj; // Destructor is called

    int Size = 3;
    MyClass* objArray = new MyClass[Size]; // Constructors called for each object

    delete[] objArray; // Destructors called for each object

    return 0;
}
