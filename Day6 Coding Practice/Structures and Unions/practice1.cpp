// Basics of Structures and Unions 

#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
    float height;
};

int main() {
    Person p1;

    p1.name = "Hardik";
    p1.age = 22;
    p1.height = 5.9;

    // Access and print the fields
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Height: " << p1.height << endl;

    return 0;
}

////Unions/////

#include <iostream>
using namespace std;

union Data {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    Data data;

    // Assigning an integer value
    data.intValue = 5;
    cout << "Integer: " << data.intValue << endl;

    // Assigning a float value (overwrites the int value)
    data.floatValue = 3.14;
    cout << "Float: " << data.floatValue << endl;

    // Assigning a char value (overwrites the float value)
    data.charValue = 'A';
    cout << "Char: " << data.charValue << endl;

    // Accessing the int value after assigning char
    cout << "Integer after char assignment: " << data.intValue << endl; // This will not give a valid value

    return 0;
}

