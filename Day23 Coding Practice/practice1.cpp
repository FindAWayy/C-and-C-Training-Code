
// Implement the set for the class and user defined datatypes

#include <iostream>
#include <set>
#include <string>
using namespace std ; 

class Person {
public:
    string name;
    int age;

    Person(string n, int a) {
        name = n ; 
        age = a ; 
    }
    
    // Overload operator< to compare Person objects
    bool operator<( const Person  & obj)const{
          return age < obj.age ; 
    }

    void print() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Create objects of Person class
    Person p1("Hardik", 22);
    Person p2("Kavya", 21);
    Person p3("Sam", 28);
    Person p4("Danny", 35);
    Person p5("K", 21);

    // Create a set to hold Person objects
    set<Person> people;
    people.insert(p1);
    people.insert(p2);
    people.insert(p3);
    people.insert(p4);
    people.insert(p5);

    cout << "People in the set (sorted by age):" << endl;
    for ( auto& obj : people) {
        obj.print();
    }

    return 0;
}
