//  Custom Deleter Using Function Pointer for std::shared_ptr

#include <iostream>
#include <memory>
using namespace

// Custom deleter function for shared_ptr
void custom_deleter(int* ptr) {
    cout << "Custom deleting (shared_ptr): " << *ptr << endl;
    delete ptr;
}

int main() {
    // Create a shared_ptr with a custom deleter
    shared_ptr<int> ptr(new int(50), custom_deleter);

    cout << "Value managed by shared_ptr: " << *ptr << endl;

    // When the last shared_ptr goes out of scope, custom_deleter is called automatically.
    return 0;
}
