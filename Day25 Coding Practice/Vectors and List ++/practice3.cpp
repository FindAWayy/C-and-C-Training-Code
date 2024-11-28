// User defined Datatype in Vector - 2

#include <iostream>
#include <vector>
using namespace std;

class Student {
private:
    string name;
    int age;
    double grade;

public:
    Student(string n, int a, double g) : name(n), age(a), grade(g) {}

    string getName() const { return name; }
    int getAge() const { return age; }
    double getGrade() const { return grade; }

    void setName(const string& n) { name = n; }
    void setAge(int a) { age = a; }
    void setGrade(double g) { grade = g; }

    void display() const {
        cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << endl;
    }
};

int main() {
    vector<Student> students;
    students.push_back(Student("H", 20, 90.5));
    students.push_back(Student("K", 22, 85.0));
    students.push_back(Student("R", 21, 88.0));

    // Modify Bob's data
    students[1].setAge(23);
    students[1].setGrade(87.5);

    // Display updated data
    for (const auto& student : students) {
        student.display();
    }

    return 0;
}
