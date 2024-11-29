// Example 3

#include <iostream>
#include <memory>
using namespace std ; 

void deleteArray(int* ptr) {
    cout << "Deleting array..." << endl;
    delete[] ptr;  // Custom deleter to delete array properly
}

int main() {
    // Create a shared pointer to an array of 5 integers, with a custom deleter
   shared_ptr<int> arr(new int[5]{1, 2, 3, 4, 5}, deleteArray);

    // Accessing and printing the array elements
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // When the shared_ptr goes out of scope, deleteArray() is called to delete the array
    return 0;
}
