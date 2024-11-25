// We can store unique_ptr in containers, such as std::vector, to manage collections of dynamically allocated objects. 

#include <iostream>
#include <memory>
#include <vector>
using namespace std ; 

class MyClass {
public:
    MyClass(int value) : value(value) {
        cout << "MyClass constructor, value = " << value << "\n";
    }
    ~MyClass() { cout << "MyClass destructor, value = " << value << "\n"; }

    void greet() { cout << "Hello from MyClass, value = " << value << "\n"; }

private:
    int value;
};

int main() {
    vector<unique_ptr<MyClass>> vec;

    // Add unique_ptr objects to the vector
    for (int i = 0; i < 3; ++i) {
        vec.push_back(make_unique<MyClass>(i * 10));
    }

    // Access objects via unique_ptr in the vector
    for (auto &ptr : vec) {
        ptr->greet();
    }

    // When the vector goes out of scope, all MyClass objects are destroyed automatically
}


