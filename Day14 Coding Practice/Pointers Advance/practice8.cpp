( Example with new const placing )  

#include <iostream>
using namespace std;

int main() {
    const int arr[] = {10, 20, 30, 40, 50};
     const int* const ptr = arr;  // ptr points to a constant integer (array elements are constant)

    cout << "Original first element: " << *ptr << endl; 

    // *ptr = 40;  // Error: Cannot modify the value of arr[0] through ptr because it's a pointer to const data
    
    // arr[3] = 90; // can't change it   

    // ptr++;  // can't change it
    cout << "Next element: " << *ptr << endl;
    
    return 0;
}