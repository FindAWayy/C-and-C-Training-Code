// User defined datatype in List - 1 

#include <iostream>
#include <list>
using namespace std;

class Student {
private:
    string name;
    int age;
    double grade;

public:
    Student(string n, int a, double g) : name(n), age(a), grade(g) {}

    void display() const {
        cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << endl;
    }
};

int main() {
    list<Student> students;

    // Add elements to the list using the constructor
    students.push_back(Student("Alice", 20, 90.5));
    students.push_back(Student("Bob", 22, 85.0));
    students.push_back(Student("Charlie", 21, 88.0));

    // Print details of each student
    for (const auto& student : students) {
        student.display();
    }

    return 0;
}
