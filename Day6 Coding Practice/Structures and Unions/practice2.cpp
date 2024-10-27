// Direct Initialization and with pointers 

#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
    float height;
};

int main() {
    Person p2 = {"Kanishka", 22, 5.6}; // Direct initialization
    Person p1 = {}; // Default initialization (zero-initialized)

    Person* ptr = &p1;
    cout << ptr->name; // Accessing via pointer

    // Access and print the fields
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Height: " << p1.height << endl;

    return 0;
}