// const pointer to non-const data ; 


#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 20;
    
    int* const ptr = &x;  // ptr is a const pointer to non-const data (x)

    cout << "Value of x: " << *ptr << endl;  // prints 10
    
    *ptr = 30;  // Okay: we can modify the value pointed to by ptr
    
    cout << "Modified value of x: " << *ptr << endl;  // prints 30
    
    // ptr = &y;  // Error: can't change ptr itself, as it's a const pointer
    
    return 0;
}
