// Pointer to const Data with Arrays

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    const int* ptr = arr;  // ptr points to a constant integer (array elements are constant)

    cout << "Original first element: " << *ptr << endl; 

    // *ptr = 40;  // Error: Cannot modify the value of arr[0] through ptr because it's a pointer to const data

    ptr++;  // Okay: We can change the pointer itself
    cout << "Next element: " << *ptr << endl;
    
    ptr += 2 ; 
    cout<< "Next element: "<< *ptr <<endl;

    return 0;
}