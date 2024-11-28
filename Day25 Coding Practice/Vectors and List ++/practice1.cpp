// User defined Datatype in Vector - 1 

#include <iostream>
#include <vector>
using namespace std;

// Define a user-defined data type using class
class Student {
private:
    string name;
    int age;
    double grade;

public:
    // Constructor to initialize the student data
    Student(string n, int a, double g) : name(n), age(a), grade(g) {}

    // Method to display student information
    void display() const {
        cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << endl;
    }
};

int main() {
    // Create a vector of Student objects
    vector<Student> students;

    // Add elements to the vector using the constructor
    students.push_back(Student("H", 20, 90.5));
    students.push_back(Student("K", 22, 85.0));
    students.push_back(Student("R", 21, 88.0));

    for (const auto& student : students) {
        student.display();
    }

    return 0;
}
