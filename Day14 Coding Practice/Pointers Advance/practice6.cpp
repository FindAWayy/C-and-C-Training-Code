// Constant Pointer to Non-Constant Data with Arrays

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30};
    int* const ptr = arr;  // ptr is a constant pointer to non-constant data (arr elements are not constant)

    cout << "First element: " << *ptr << endl;  // prints 10
    
    arr[0] = 80 ; 
     
    cout << "First element: " << *ptr << endl;  // prints 80


    *ptr = 40;  // Okay: You can modify the value of arr[0] because the data is not constant
    cout << "Modified first element: " << *ptr << endl;  // prints 40

    // ptr++;  // Error: Cannot change ptr because it is a constant pointer

    return 0;
}


