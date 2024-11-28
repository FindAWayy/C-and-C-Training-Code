// User defined Datatype in Vector - 3

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student {
private:
    string name;
    int age;
    double grade;

public:
    Student(string n, int a, double g) : name(n), age(a), grade(g) {}

    double getGrade() const { return grade; }

    void display() const {
        cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << endl;
    }
};

bool compareByGrade(const Student& s1, const Student& s2) {
    return s1.getGrade() > s2.getGrade(); // Descending order
}

int main() {
    vector<Student> students;
    students.push_back(Student("Alice", 20, 90.5));
    students.push_back(Student("Bob", 22, 85.0));
    students.push_back(Student("Charlie", 21, 88.0));

    // Sort students by grade
    sort(students.begin(), students.end(), compareByGrade);

    for (const auto& student : students) {
        student.display();
    }

    return 0;
}
