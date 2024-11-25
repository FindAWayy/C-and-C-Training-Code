// Weak Pointer with lock mechanism

#include <iostream>
#include <memory>
using namespace std ;

class A {
public:
    A() { cout << "A created\n"; }
    ~A() { cout << "A destroyed\n"; }
    void sayHello() { cout << "Hello from A\n"; }
};

int main() {
    // Creating a shared_ptr to manage object of class A
    shared_ptr<A> sharedPtrA = make_shared<A>();
    
    cout<<sharedPtrA.use_count()<<endl;
    
    // Creating a weak_ptr pointing to the same object managed by sharedPtrA
    weak_ptr<A> weakPtrA = sharedPtrA;
    cout<<sharedPtrA.use_count()<<endl;

    // Locking weak_ptr to get a shared_ptr
    if (auto lockedPtr = weakPtrA.lock()) {
        cout<<sharedPtrA.use_count()<<endl;
        lockedPtr->sayHello();  // Safe to use the object
        cout<<sharedPtrA.use_count()<<endl;
    } else {
        cout << "Object is no longer available.\n";
    }

    // sharedPtrA goes out of scope here and the object is destroyed
    return 0;
}
