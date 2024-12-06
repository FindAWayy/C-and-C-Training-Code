// Singleton Pattern Example 

#include <iostream>
using namespace std; 

class Singleton {
private:
    static Singleton* instance;  // Pointer to the single instance of the class

    // Private constructor to prevent direct instantiation
    Singleton() {
        cout << "Singleton created!" << endl;
    }

public:
    // Static method to get the instance of the Singleton
    static Singleton* getInstance() {
        if (instance == nullptr) {
            instance = new Singleton();  // Create the instance if not already created
        }
        return instance;
    }

    // A method to demonstrate functionality
    void showMessage() {
        cout << "Hello from Singleton!" << endl;
    }

    // Prevent copying and assignment
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
};

// Initialize the static pointer to nullptr
Singleton* Singleton::instance = nullptr;

int main() {
    // Only one instance will be created, even if getInstance() is called multiple times
    Singleton* obj1 = Singleton::getInstance();
    Singleton* obj2 = Singleton::getInstance();

    obj1->showMessage();
    obj2->showMessage();

   cout << "Are both instances the same? " << (obj1 == obj2 ? "Yes" : "No") << endl;

    return 0;
}
