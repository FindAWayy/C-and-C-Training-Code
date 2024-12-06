// Cleaning Dynamanically allocated memory 

#include <iostream>
using namespace std ; 

class Singleton {
private:
    static Singleton* instance;

    Singleton() {
        cout << "Singleton created!" << endl;
    }

public:
    static Singleton* getInstance() {
        if (instance == nullptr) {
            instance = new Singleton();  // Dynamic memory allocation
        }
        return instance;
    }

    void showMessage() {
        cout << "Hello from Singleton!" << endl;
    }

    static void cleanup() {
        delete instance; 
        instance = nullptr;
    }
};

Singleton* Singleton::instance = nullptr;

int main() {
    Singleton* singleton = Singleton::getInstance();
    singleton->showMessage();

    // Forgetting to call cleanup() causes memory leak!
    Singleton::cleanup(); 

    return 0;
}
