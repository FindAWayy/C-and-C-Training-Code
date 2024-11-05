// Static data member and member functions in inheritance( Example 2 )

#include <iostream>
using namespace std;

class Animal {
public:
    static int animalCount;

    Animal() {
        animalCount++;
    }

    static void displayCount() {
        cout << "Total Animals: " << animalCount << endl;
    }
};

int Animal::animalCount = 0;

class Dog : public Animal {
public:
static int dogcount ; 
    Dog() {
        animalCount++;
        dogcount++; 
    }

    static void bark() {
        cout << "Woof! Woof!" << endl;
    }
};

int Dog :: dogcount = 0 ; 

class Cat : public Dog {
public:
    Cat() {
        // Each Cat object counts as an animal
        // Calling 2 constructors at a same time 
    }

    static void meow() {
        cout << "Meow! Meow!" << endl;
    }
};

int main() {
    Animal a1 ; 
    Dog dog1;
    Dog dog2;
    Cat cat1;
    
    cat1.bark();
    Animal::displayCount(); // Output: Total Animals: 7

    Dog::bark();
    Cat::meow();

    return 0;
}

