// User defined Datatype in Vector - 4

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

//     // Overload the '==' operator
    bool operator==(const Student& other) const {
        return name == other.name && age == other.age && grade == other.grade;
    }

//     // Overload the '+' operator
    Student operator+(const Student& other) const {
        return Student(name + "&" + other.name, age + other.age, (grade + other.grade) / 2);
    }

    // Overload the '<<' operator for output
    friend ostream& operator<<(ostream& os, const Student& s) {
        os << "Name: " << s.name << ", Age: " << s.age << ", Grade: " << s.grade;
        return os;
    }

    void display() const {
        cout << *this << endl;
    }
};

int main() {
    vector<Student> students;
    students.push_back(Student("H", 20, 90.5));
    students.push_back(Student("K", 22, 85.0));

    // Overloaded '==' operator
    if (students[0] == students[1]) {
        cout << "H and K are the same student." << endl;
    } else {
        cout << "H and K are different students." << endl;
    }

//     // Overloaded '+' operator
    Student combined = students[0] + students[1];
    combined.display(); // Displays combined student info

    return 0;
}
