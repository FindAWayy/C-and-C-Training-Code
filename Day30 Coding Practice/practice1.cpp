// Don't want to dynamically create the object the class with new keyword 

#include <iostream>
using namespace std ; 

class MyClass {
private:
    // Private constructor
    MyClass() {
        cout << "MyClass instance created!" << endl;
    }

    // Delete the new operator
    void* operator new(size_t size);

public:
    // Static method to create an instance
    static MyClass createInstance() {
        return MyClass(); // Objects can be created statically or through factory methods
    }

    void showMessage() {
       cout << "Hello from MyClass!" << endl;
    }
};

int main() {
    // You cannot do this:
    // MyClass* obj = new MyClass(); // Error: `new` is private
    
    // Correct way to create the object:
    MyClass obj = MyClass::createInstance();
    obj.showMessage();

    return 0;
}

// When want to call from class but not from outside 

#include <iostream>
using namespace std ; 

class MyClass {
private:
    // Private constructor
    MyClass() {
       cout << "MyClass instance created!" << endl;
    }

    // Private static new operator, can only be used inside the class
    static void* operator new(size_t size) {
       cout << "Custom new operator called inside the class!" << endl;
        return ::operator new(size);  // Calls global new
    }

    // Delete the new operator for outside use
    void* operator new(size_t size) = delete;
    
    // Delete the delete operator for outside use
    void operator delete(void* pointer) = delete;

public:
    // Static method to create an instance (using the custom new operator)
    static MyClass* createInstance() {
        return new MyClass();  // Using the custom `new` operator inside the class
    }

    void showMessage() {
        std::cout << "Hello from MyClass!" << std::endl;
    }
};

int main() {
    // Correct way to create the object: use createInstance()
    MyClass* obj = MyClass::createInstance();
    obj->showMessage();

    // You cannot do this:
    // MyClass* obj2 = new MyClass(); // Error: `new` is deleted outside the class

    delete obj;  // Don't forget to delete the object created with custom `new` inside the class

    return 0;
}


