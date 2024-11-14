// "is-a" Relationship ( Example 1 - High Level ) 

#include <iostream>
using namespace std;

// Abstract Base Class: Animal
class Animal {
public:
    virtual void speak() = 0;
    virtual void move() = 0;
    
    virtual ~Animal() {}
};


class Mammal : virtual public Animal {
public:
    // Inherited from Animal, but Mammal is not abstract
    void move() {
        cout << "Mammal is moving." << endl;
    }
    
    virtual void speak() = 0; // Still pure virtual, needs to be implemented by derived classes
};

// Derived Class: Dog (Mammal)
class Dog : public Mammal {
public:
    void speak() {
        cout << "Woof!" << endl;
    }
    
    void move() {
        cout << "Dog is running!" << endl;
    }
};

// Base Class: Bird
class Bird :virtual public Animal {
public:
    // Inherited from Animal, but Bird is not abstract
    void move() {
        cout << "Bird is flying." << endl;
    }
    
    virtual void speak() override = 0; // Still pure virtual, needs to be implemented by derived classes
};

// Derived Class: Sparrow (Bird)
class Sparrow : public Bird {
public:
    void speak() {
        cout << "Chirp!" << endl;
    }
    
    void move() {
        cout << "Sparrow is soaring!" << endl;
    }
};

// Derived Class: Eagle (Bird)
class Eagle : public Bird {
public:
    void speak()  {
        cout << "Screech!" << endl;
    }
    
    void move()  {
        cout << "Eagle is gliding!" << endl;
    }
};

// Derived Class: Bat (Mammal and Bird) - Multiple Inheritance Example
class Bat :  public Mammal,  public Bird {
public:
    void speak()  {
        cout << "Screech!" << endl;
    }
    
    // Override move() for both mammal and bird behaviors
    void move()  {
        cout << "Bat is flying like a bird, but it's a mammal!" << endl;
    }
};

int main() {

    Dog dog;
    Sparrow sparrow;
    Eagle eagle;
    Bat bat;
    
    // Using Animal pointers to demonstrate polymorphism
    Animal* animal1 = &dog;
    Animal* animal2 = &sparrow;
    Animal* animal3 = &eagle;
    Animal* animal4 = &bat;
    
    // Demonstrating polymorphism through pointers
    animal1->speak();  // Woof!
    animal1->move();   // Dog is running!
    
    animal2->speak();  // Chirp!
    animal2->move();   // Sparrow is soaring!
    
    animal3->speak();  // Screech!
    animal3->move();   // Eagle is gliding!
    
    animal4->speak();  // Screech!
    animal4->move();   // Bat is flying like a bird, but it's a mammal!
    
    return 0;
}
