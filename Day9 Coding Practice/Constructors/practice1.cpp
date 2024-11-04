// Default Constructor 

#include <iostream>
#include <string>
using namespace std ; 

class Dog {
private:
    string name;
    int age;

public:
    Dog() {
        name = "Tom"; 
	age = 2 ; 
        cout << "Default constructor called. Dog created." <<endl;
    }

    void display() {
        cout << "Dog's Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Dog myDog;  
    myDog.display();

    return 0;
}