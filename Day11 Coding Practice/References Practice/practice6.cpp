// Using References in operator overloading 

#include <iostream>
using namespace std;

class MyClass {
public:
    int x;
    
    MyClass(int val) : x(val) {}

    MyClass& operator+(const MyClass& other) {
        this->x += other.x;
        return *this;
    }

    void display() const {
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    MyClass obj1(10);
    MyClass obj2(20);

       obj1 + obj2;

    obj1.display();    
    return 0;
}
