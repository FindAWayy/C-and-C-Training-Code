// Weak pointer to break circular reference 

#include <iostream>
#include <memory>
using namespace std ; 

class Student; 

class Teacher {
public:
    shared_ptr<Student> student;  // shared_ptr to Student
    void setStudent(shared_ptr<Student> s) {
        student = s;
    }
};

class Student {
public:
    weak_ptr<Teacher> teacher;  // weak_ptr to Teacher
    void setTeacher(std::shared_ptr<Teacher> t) {
        teacher = t;
    }
};

int main() {
    shared_ptr<Teacher> teacher = make_shared<Teacher>();
    shared_ptr<Student> student = make_shared<Student>();
    
       cout << "use_count of teacher: " << teacher.use_count() << endl;
    cout << "use_count of student: " << student.use_count() << endl;

    teacher->setStudent(student);  // Set student for teacher
    student->setTeacher(teacher);  // Set teacher for student

    cout << "use_count of teacher: " << teacher.use_count() << endl;
    cout << "use_count of student: " << student.use_count() << endl;

    return 0;
}
