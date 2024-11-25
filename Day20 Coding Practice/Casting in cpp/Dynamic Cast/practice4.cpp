// Dynamic casting in references( Example 4 ) 

#include <iostream>
#include <exception>  // For std::bad_cast
using namespace std ; 

class Animal {
public:
    virtual ~Animal() = default;
    virtual void speak() { cout << "Animal speaks\n"; }
};

class Dog : public Animal {
public:
    void speak() override { cout << "Dog barks\n"; }
    void fetch() { cout << "Dog is fetching\n"; }
};

class Cat : public Animal {
public:
    void speak() override { cout << "Cat meows\n"; }
    void purr() { cout << "Cat is purring\n"; }
};

void identifyAnimal(Animal& animal) {
    try {
        // Attempt to cast the Animal reference to a Dog reference
        Dog& dog = dynamic_cast<Dog&>(animal);  // This will throw if animal is not a Dog
        dog.fetch();  // Only works if animal is actually a Dog
    }
    catch (const bad_cast& e) {
        // If the dynamic_cast fails, a bad_cast exception is thrown
        cout << "Cast failed: " << e.what() << '\n';
    }
}

int main() {
    Animal a;  // Base class object
    Dog d ;     // Derived class object
    
    // Animal a2 ; 
    // Dog &d2 = a2;
    
    // Dog * d3 =  new Dog(); 
    // d3->speak();
    
    
    // Animal a = new Dog();
    // Animal a;
    // a = new Dog();

    cout << "Trying to identify Animal a (should fail):\n";
    identifyAnimal(a);  // Should throw an exception because a is not a Dog

    cout << "Trying to identify Animal d (should succeed):\n";
    identifyAnimal(d);  // Should succeed because d is a Dog

    return 0;
}
