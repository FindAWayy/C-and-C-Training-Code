// Shared Pointer Circular Reference 

#include <iostream>
#include <memory>
using namespace std ; 

class Student;

class Teacher
{
public:
    shared_ptr<Student> s;  // shared_ptr to a Student object
    void setStudent(shared_ptr<Student> s1)
    {
        s = s1;  // Sets the shared_ptr to the Student object
    }
};

class Student
{
public:
    shared_ptr<Teacher> t;  // weak_ptr to a Teacher object
    void setTeacher(shared_ptr<Teacher> t1)
    {
        t = t1;  // Sets the weak_ptr to the Teacher object
    }
};

int main()
{
    shared_ptr<Teacher> tt;
    shared_ptr<Student> ss;
    cout << "use_count of tt (Teacher): " << tt.use_count() << endl;
    cout << "use_count of ss (Student): " << ss.use_count() << endl;

    tt = make_shared<Teacher>();  // Create a shared_ptr to a Teacher
    ss = make_shared<Student>();  // Create a shared_ptr to a Student

    cout << "Before setting relationships:" << endl;
    cout << "use_count of tt (Teacher): " << tt.use_count() << endl;
    cout << "use_count of ss (Student): " << ss.use_count() << endl;

    tt->setStudent(ss);  // Set the Student for the Teacher
    ss->setTeacher(tt);  // Set the Teacher for the Student

    cout << "\nAfter setting relationships:" << endl;
    cout << "use_count of tt (Teacher): " << tt.use_count() << endl;
    cout << "use_count of ss (Student): " << ss.use_count() << endl;

    return 0;
}
