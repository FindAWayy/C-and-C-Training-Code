// Nested Structures

#include <iostream>
#include <string>
using namespace std;

struct Address {
    string street;
    string city;
    string state;
    string zipCode;
};

struct Person {
    string name;
    int age;
    Address address; // Nested structure
};

void printPerson(const Person& p) {
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Address: " << p.address.street << ", " 
         << p.address.city << ", " 
         << p.address.state << " " 
         << p.address.zipCode << endl;
}

int main() {
    // Initialize the Address structure
    Address addr1 = {"123 Main St", "Springfield", "IL", "62701"};
    
    // Initialize the Person structure with a nested Address
    Person p1 = {"Alice", 30, addr1};

    // Print person's details
    cout << "Before Address Update:" << endl;
    printPerson(p1);

    return 0;
}
