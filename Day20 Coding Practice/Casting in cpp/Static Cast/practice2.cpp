// Static Cast ( Example 2 ) Casting Between Classes (Base Class to Derived Class)

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() { cout << "Animal speaks" << endl; }
};

class Dog : public Animal {
public:
    void speak() override { cout << "Dog barks" << endl; }
};

int main() {
    Animal* animalPtr = new Dog();  // Base class pointer to derived class object
    
    // Static cast from Animal* to Dog*
    Dog* dogPtr = static_cast<Dog*>(animalPtr);

    // Calling derived class method
    dogPtr->speak();  // This will call Dog's speak method
    
    delete animalPtr;  // Clean up dynamically allocated memory
    return 0;
}

// Another Example 

#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() { cout << "Base class" << endl; }
};

class Derived : public Base {
public:
    void display() override { cout << "Derived class" << endl; }
};

int main() {
    Base* basePtr = new Derived();  // Base pointer pointing to a Derived object
    
    // Static cast from Base* to Derived*
    Derived* derivedPtr = static_cast<Derived*>(basePtr);

    // Calling derived class method
    derivedPtr->display();  // This will call Derived class's display()

    delete basePtr;  // Clean up dynamically allocated memory
    return 0;
}



