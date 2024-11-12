// Pointer to a const 

#include <iostream>
using namespace std;

int main() {
     int x = 10;
    int y = 20;
    
     const int* ptr = &x;  // ptr points to constant data (x)

    cout << "Value of x: " << *ptr << endl;  // prints 10
    
    // *ptr = 30;  // Error: can't modify the value of *ptr, it's a const pointer
    
    x = 30 ; 
    cout << "Value of x: " << *ptr << endl;  // prints 30
    
    ptr = &y;  // Okay: the pointer itself can change
    
    cout << "Value pointed by ptr: " << *ptr << endl;  // prints 20
    
    return 0;
}
