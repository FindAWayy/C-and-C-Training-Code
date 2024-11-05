/// ( Public inheritance ) Example 2 

#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

class Dog : public Animal { // Public Inheritance
public:
    void showBehavior() {
        eat();   // OK: Public method
        cout << "Dog is barking." << endl;
    }
};

int main() {
    Dog dog;
    dog.showBehavior(); // OK: Calls methods of Dog

    return 0;
}
