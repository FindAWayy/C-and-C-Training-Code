// Dynamic cast( Example 1 ) 

#include <iostream>
using namespace std;

class Animal {
public:
Animal(){
    cout<<" Constructor called Base class"<<endl;;
}
    virtual void speak() { cout << "Animal speaks" << endl; }
    virtual ~Animal() {
        cout<<"Animal destructor "<<endl;;
    }
};

class Dog : public Animal {
public:
Dog(){
    cout<<" Constructor called Dog Class"<<endl;; 
}
    void speak() override { cout << "Dog barks" << endl; }
    void fetch() { cout << "Dog fetches the ball!" << endl; }  // Derived class-specific method
    ~Dog(){
        cout<<"Dog destructor"<<endl;
    };
};

int main() {
    Animal* animalPtr = new Dog();  // Base pointer to a derived class object
    

    // Access base class method
    animalPtr->speak();  // Output: Dog barks
    
    // Downcast to access derived class-specific method
    // animalPtr->fetch(); // Reason for downcast  
    Dog* dogPtr = dynamic_cast<Dog*>(animalPtr);  // Downcast
    
    if (dogPtr) {
        dogPtr->fetch();// Output: Dog fetches the ball!
        dogPtr->speak(); // Dog barks
    } else {
        cout << "Invalid downcast" << endl;
    }
    
    // dogPtr->speak(); //  Dog barks

    delete animalPtr;
    return 0;
}


