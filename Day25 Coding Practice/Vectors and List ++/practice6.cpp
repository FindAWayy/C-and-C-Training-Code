//Pointers Datatype in Vector - 5

#include <iostream>
#include <vector>
using namespace std;

class Person {
public:
    virtual void display() const = 0;  // Pure virtual function
    virtual ~Person(){ }  // Virtual destructor
};

// Derived class 1
class Student : public Person {
private:
    string name;
    int age;

public:
    Student(string n, int a) : name(n), age(a) {}

    void display() const override {
        cout << "Student: " << name << ", Age: " << age << endl;
    }
};

// Derived class 2
class Teacher : public Person {
private:
    string name;
    string subject;

public:
    Teacher(string n, string s) : name(n), subject(s) {}

    void display() const override {
        cout << "Teacher: " << name << ", Subject: " << subject << endl;
    }
};

int main() {
    vector<Person*> people;
    Person *p1 = new Student("H", 20);
    Person *p2 = new Student("k", 20);
    people.push_back(p1);
    people.push_back(p2);
    // people.push_back(new Student("Alice", 20));
    // people.push_back(new Teacher("Mr. Smith", "Mathematics"));

    // Displaying all persons in the vector using polymorphism
    for (const auto& person : people) {
        person->display();
    }

    // Cleanup dynamically allocated memory
    for (auto& person : people) {
        delete person;
    }

    return 0;
}
