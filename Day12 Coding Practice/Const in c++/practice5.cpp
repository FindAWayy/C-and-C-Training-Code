/// Const with Static 


#include <iostream>
using namespace std;

class MyClass {
private:
    int value; 
    static int count;

public:
    MyClass(int v) : value(v) {
        count++;  // Static variable can be accessed and modified
    }
    

    // Const member function: Can access and modify static members
    void display() const {
        // value = 10 ; // read only 
        count = 8 ; 
        cout << "Value: " << value << ", Static Count: " << count << endl;
    }

    // Static member function: Can only access static members
    static void displayStaticCount() {
        cout << "Static Count: " << count << endl;
    }

    // Static member function: Can modify static members
    static void incrementCount() {
        count++;
    }
};

// Initialize static member variable
int MyClass::count = 0;

int main() {
    MyClass obj1(10);
    MyClass obj2(20);

    obj1.display();
    obj2.display(); 

    MyClass::displayStaticCount();

    // // Modify static variable using static member function
    MyClass::incrementCount();
    MyClass::displayStaticCount(); 

    return 0;
}


     