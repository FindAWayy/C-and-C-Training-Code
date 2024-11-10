// ( Example 2 ) 

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }

    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void sound() override { 
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
    animalPtr->sound();  // Calls Dog's sound() at runtime

    animalPtr = &cat;
    animalPtr->sound();  // Calls Cat's sound() at runtime

    return 0;
}
