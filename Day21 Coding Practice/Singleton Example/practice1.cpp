// Singleton Using smart pointers 

#include <iostream>
#include <memory>

class Singleton {
private:
    int count;  // A simple member variable to demonstrate functionality
    static std::unique_ptr<Singleton> instance;  // Static unique_ptr for the instance

    // Private constructor to prevent direct instantiation
    Singleton() : count(0) {}

    // Delete copy constructor and assignment operator to prevent copying
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

public:
    // Static method to access the single instance
    static Singleton* getInstance() {
        if (!instance) {
            instance = std::make_unique<Singleton>();  // Create the instance only once
        }
        return instance.get();  // Return the raw pointer to the unique_ptr
    }

    // Method to increment the count
    void increment() {
        count++;
    }

    // Method to get the current count
    int getCount() const {
        return count;
    }
};

// Initialize the static unique_ptr to nullptr
std::unique_ptr<Singleton> Singleton::instance = nullptr;

int main() {
    // Get the singleton instance and increment the count
    Singleton* singleton1 = Singleton::getInstance();
    singleton1->increment();
    singleton1->increment();

    std::cout << "Counter value (should be 2): " << singleton1->getCount() << std::endl;

    // Get the same instance again
    Singleton* singleton2 = Singleton::getInstance();
    singleton2->increment();

    std::cout << "Counter value (should be 3): " << singleton2->getCount() << std::endl;

    // Verify that both pointers are pointing to the same instance
    if (singleton1 == singleton2) {
        std::cout << "singleton1 and singleton2 are the same instance!" << std::endl;
    }

    return 0;
}
