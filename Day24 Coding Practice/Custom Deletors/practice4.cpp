//  Custom Deleter with std::shared_ptr and Lambda

#include <iostream>
#include <memory>
using namespace std ;

int main() {
    // Create a shared_ptr with a lambda as a custom deleter
    auto custom_deleter = [](int* ptr) {
        cout << "Custom lambda deleting (shared_ptr): " << *ptr << endl;
        delete ptr;
    };

    shared_ptr<int> ptr(new int(200), custom_deleter);

    cout << "Value managed by shared_ptr: " << *ptr << endl;

    // When the last shared_ptr goes out of scope, the custom lambda deleter is called.
    return 0;
}


