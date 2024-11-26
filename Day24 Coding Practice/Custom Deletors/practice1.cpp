//  Custom Deleter Using Function Pointer

#include <iostream>
#include <memory>
using namespace std ; 

// Custom deleter function
void custom_deleter(int* ptr) {
    cout << "Custom deleting: " << *ptr << std::endl;
    delete ptr;
}

int main() {
    // Create a unique_ptr with a custom deleter
    unique_ptr<int, void(*)(int*)> ptr(new int(42), custom_deleter);

    cout << "Value managed by unique_ptr: " << *ptr << endl;

    // When the unique_ptr goes out of scope, custom_deleter is called automatically.
    return 0;
}
