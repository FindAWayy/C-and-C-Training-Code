// const pointer to const data 

#include <iostream>
using namespace std;

int main() {
   // const int x = 10;
   int x = 10;

    const int* const ptr = &x;  // const pointer to const data (x)
    
    cout << "Value of x: " << *ptr << endl;  // prints 10
    
    // x = 40 ; 
    
    cout << "Value of x: " << *ptr << endl;  // prints 10
    
    // *ptr = 20;  // Error: can't modify data through const pointer
    // ptr = &y;  // Error: can't change ptr itself, as it's a const pointer
    
    return 0;
}

