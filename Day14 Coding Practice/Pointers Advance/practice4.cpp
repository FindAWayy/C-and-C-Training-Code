// const pointer to a data 

#include <iostream>
using namespace std;

int main() {
    int x = 10;
    
     int* const ptr = &x ;

    cout << "Value of x: " << *ptr << endl;  // prints 10
    x = 30;
    cout << "Value of x: " << *ptr << endl;
    *ptr = 60 ; 
    cout << "Value of x: " << *ptr << endl;
    
    // *ptr++; // can't change this 
    

    return 0;
}