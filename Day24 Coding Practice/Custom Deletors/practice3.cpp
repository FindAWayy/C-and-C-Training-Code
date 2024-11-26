
// Custom Deleter Using Lambda for std::unique_ptr

#include <iostream>
#include <memory>

using namespace std;

int main() {
    // Create a unique_ptr with a lambda as a custom deleter
    auto custom_deleter = [](int* ptr) {
        cout << "Custom lambda deleting: " << *ptr << endl;
        delete ptr;
    };

    unique_ptr<int, decltype(custom_deleter)> ptr(new int(100), custom_deleter);

    cout << "Value managed by unique_ptr: " << *ptr << endl;

    // When the unique_ptr goes out of scope, the custom lambda deleter is called.
    return 0;
}
