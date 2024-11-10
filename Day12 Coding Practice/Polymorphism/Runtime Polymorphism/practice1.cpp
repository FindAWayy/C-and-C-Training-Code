// (Example 1 ) 

#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void sound() {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Animal* animalPtr;

    Dog dog;
    Cat cat;

    animalPtr = &dog;
    animalPtr->sound();  // Calls Animal's sound(), NOT Dog's sound

    animalPtr = &cat;
    animalPtr->sound();  // Calls Animal's sound(), NOT Cat's sound

    return 0;
}
