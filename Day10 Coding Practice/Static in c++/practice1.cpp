// Static Data Member 

#include <iostream>
using namespace std;

class MyClass {
public:
    static int count;

    MyClass() {
        count++;
    }

    void display2(){
       cout<<" count: "<< count<<endl;
    }

    static void displayCount() {
        cout << "Count: " << count << endl;
    }
};

int MyClass::count = 0;

int main() {
    MyClass obj1;
    MyClass obj2;

    obj1.display2(); 
    
    // obj1.displayCount(); 
    // obj1.count = 9 ; 
    
    cout<<MyClass::count<<endl; 
    
    MyClass::displayCount();

    return 0;
}