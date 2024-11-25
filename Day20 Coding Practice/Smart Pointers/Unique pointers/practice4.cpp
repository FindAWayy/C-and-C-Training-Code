// Unique Pointers with arrays 

#include <iostream>
#include <memory>
using namespace std ; 

int main() {
    // Create a unique_ptr managing an array of 5 integers
    unique_ptr<int[]> arr1 = make_unique<int[]>(5);

    // Assign values to the array
    for (int i = 0; i < 5; ++i) {
        arr1[i] = i * 10;
    }

    // Output the values before transferring ownership
    cout << "arr1 before transfer: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr1[i] << " ";
    }
    cout << "\n";

    // Transfer ownership from arr1 to arr2 using std::move
    unique_ptr<int[]> arr2 = move(arr1);

    // arr1 is now empty, so attempting to use it would be undefined behavior
    if (!arr1) {
        cout << "arr1 no longer owns the array after transfer.\n";
    }

    // Output the values after ownership transfer
    cout << "arr2 after transfer: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr2[i] << " ";
    }
    cout << "\n";

    // No need to manually delete the array; arr2 will automatically clean up when it goes out of scope
}


// using classes and constructor and destructor 

#include <iostream>
#include <memory>
using namespace std;

class ArrayManager {
    
    private:
    int size_;
    unique_ptr<int[]> arr_;
    
public:
    // Constructor: Initializes an array of given size and assigns values
    ArrayManager(int size) : size_(size), arr_(make_unique<int[]>(size)) {
        cout << "ArrayManager constructor\n";
        // Assign values to the array
        for (int i = 0; i < size_; ++i) {
            arr_[i] = i * 10; 
        }
    }

    // Destructor: Will automatically clean up the array (no need for manual deletion)
    ~ArrayManager() {
        cout << "ArrayManager destructor\n";
    }

    // Function to display the values of the array
    void display() const {
        for (int i = 0; i < size_; ++i) {
            cout << arr_[i] << " ";
        }
        cout << "\n";
    }

    // Getter for the unique_ptr (to transfer ownership if needed)
    unique_ptr<int[]> releaseArray() {
        return move(arr_);
    }


};

int main() {
    // Create an instance of ArrayManager with an array of size 5
    ArrayManager manager1(5);

    cout << "manager1 array values: ";
    manager1.display(); // Output values before transfer

    // Transfer ownership of the array from manager1 to manager2
    unique_ptr<int[]> arr2 = manager1.releaseArray();

    // After releasing the array, manager1 no longer owns it
    cout << "manager1 no longer owns the array.\n";

    // Display values through arr2 (which now owns the array)
    cout << "arr2 array values: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr2[i] << " ";
    }
    cout << "\n";

    // No need to manually delete the array, it's cleaned up when arr2 goes out of scope
    return 0;
}



