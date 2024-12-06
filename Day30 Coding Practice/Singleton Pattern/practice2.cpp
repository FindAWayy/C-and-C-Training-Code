/* In a multi-threaded application, you need to ensure that the Singleton instance is created only once, even when multiple threads are trying to access it simultaneously. Without synchronization, two threads might enter the getInstance() function and create two different instances, which violates the Singleton principle.

Thread-Safe Singleton with Mutex Locking */

#include <iostream>
#include <mutex>
using namespace std ; 

class Singleton {
private:
    static Singleton* instance;
    static std::mutex mtx;  // Mutex to make the method thread-safe

    Singleton() {
        cout << "Singleton created!" << endl;
    }

public:
    static Singleton* getInstance() {
        lock_guard<std::mutex> lock(mtx);  // Lock the mutex for thread safety
        if (instance == nullptr) {
            instance = new Singleton();  // Create instance if it does not exist
        }
        return instance;
    }

    void showMessage() {
        cout << "Hello from Singleton!" << endl;
    }

    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
};

Singleton* Singleton::instance = nullptr;
std::mutex Singleton::mtx;

int main() {
    Singleton* obj1 = Singleton::getInstance();
    Singleton* obj2 = Singleton::getInstance();

    obj1->showMessage();
    obj2->showMessage();

    cout << "Are both instances the same? " << (obj1 == obj2 ? "Yes" : "No") << endl;

    return 0;
}

By Using Double Locking 

#include <iostream>
#include <mutex>
using namespace std ; 

class Singleton {
private:
    static Singleton* instance;
    static std::mutex mtx;

    Singleton() {
        cout << "Singleton created!" << endl;
    }

public:
    static Singleton* getInstance() {
        if (instance == nullptr) {  // First check (no lock)
            std::lock_guard<std::mutex> lock(mtx);  // Lock mutex
            if (instance == nullptr) {  // Second check (with lock)
                instance = new Singleton();
            }
        }
        return instance;
    }

    void showMessage() {
        cout << "Hello from Singleton!" << endl;
    }

    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
};

Singleton* Singleton::instance = nullptr;
std::mutex Singleton::mtx;

int main() {
    Singleton* obj1 = Singleton::getInstance();
    Singleton* obj2 = Singleton::getInstance();

    obj1->showMessage();
    obj2->showMessage();

    cout << "Are both instances the same? " << (obj1 == obj2 ? "Yes" : "No") << endl;

    return 0;
}

