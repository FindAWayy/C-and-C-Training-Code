// Constant Pointer to Constant Data with Arrays

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30};
    const int* const ptr = arr;  // ptr is a constant pointer to constant data (arr)

    cout << "First element: " << *ptr << endl;  // prints 10

    arr[2] = 90  ; 
    
    cout << "First element: " << *ptr << endl;  // prints 90


    // *ptr = 40;  // Error: Cannot modify the value of arr[0] because it's a constant pointer to constant data
    // ptr = arr2;  // Error: Cannot change ptr because it's a constant pointer

    return 0;
}




