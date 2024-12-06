// Using Unique ptr -> Smart Pointers 

#include <iostream>
#include <memory>  // For std::unique_ptr
#include <mutex>   // For std::mutex

using namespace std;

class Singleton {
private:
    static unique_ptr<Singleton> instance;
    static mutex mtx;  // Mutex for thread safety

    Singleton() {
        cout << "Singleton created!" << endl;
    }

public:
    static Singleton* getInstance() {
        // Lock the mutex to ensure thread safety during initialization
        lock_guard<mutex> lock(mtx);
        if (instance == nullptr) {
            instance = make_unique<Singleton>();
        }
        return instance.get();  // Returning the raw pointer to the object because can't return unique ptr when return type is a raw pointer , by using unique ptr there may be chanches that it may transfer the ownership
    }

    void showMessage() {
       cout << "Hello from Singleton!" << endl;
    }

    Singleton(const Singleton&) = delete;  // Prevent copying
    Singleton& operator=(const Singleton&) = delete;  // Prevent assignment
};

// Initialize the static members
unique_ptr<Singleton> Singleton::instance = nullptr;
mutex Singleton::mtx;

int main() {
    Singleton* singleton = Singleton::getInstance();
    singleton->showMessage();

    // No need to manually delete the instance, unique_ptr will take care of that
    return 0;
}
