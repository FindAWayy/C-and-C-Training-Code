////Overloading New operator 

#include <iostream>
#include <cstdlib> // For malloc and free

class MyClass {
public:
    // Overloaded new operator
    void* operator new(size_t size) {
        std::cout << "Allocating " << size << " bytes for MyClass.\n";
        void* ptr = std::malloc(size); // Allocate memory
        if (!ptr) {
            throw std::bad_alloc(); // Handle allocation failure
        }
        return ptr; // Return allocated memory
    }

    // Overloaded delete operator
    void operator delete(void* pointer) {
        std::cout << "Deallocating memory for MyClass.\n";
        std::free(pointer); // Free the allocated memory
    }

    // Example member function
    void display() {
        std::cout << "Hello from MyClass!\n";
    }
};

int main() {
    // Create an instance of MyClass using the overloaded new operator
    MyClass* obj = new MyClass(); // Calls overloaded new
    obj->display();                // Call a member function

    // Delete the instance using the overloaded delete operator
    delete obj;                   // Calls overloaded delete

    return 0;
}