// ( Important Example )

#include <iostream>
#include <cstring>
using namespace std;

class Person {
public:
    char* name;
    int age;

    Person(const char* n, int a) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        age = a;
        cout << "Person constructor called." << endl;
    }

    virtual void showDetails() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    virtual ~Person() {
        delete[] name;
        cout << "Person destructor called." << endl;
    }
};

class Employee : virtual public Person {
public:
    int employeeID;
    float salary;

    Employee(const char* n, int a, int id, float s)
        : Person(n, a), employeeID(id), salary(s) {
        cout << "Employee constructor called." << endl;
    }

    void showDetails() override {
        Person::showDetails();  // Show common details
        cout << "Employee ID: " << employeeID << ", Salary: " << salary << endl;
    }

    virtual ~Employee() {
        cout << "Employee destructor called." << endl;
    }
};


class Customer : virtual public Person {
public:
    int customerID;
    float totalPurchases;

    Customer(const char* n, int a, int cid, float tp)
        : Person(n, a), customerID(cid), totalPurchases(tp) {
        cout << "Customer constructor called." << endl;
    }

    void showDetails() override {
        Person::showDetails();  // Show common details
        cout << "Customer ID: " << customerID << ", Total Purchases: " << totalPurchases << endl;
    }

    virtual ~Customer() {
        cout << "Customer destructor called." << endl;
    }
};


class Manager : public Employee, public Customer {
public:
    int managerLevel;

    Manager(const char* n, int a, int id, float s, int cid, float tp, int lvl)
        : Person(n, a), Employee(n, a, id, s), Customer(n, a, cid, tp), managerLevel(lvl) {
        cout << "Manager constructor called." << endl;
    }

    void showDetails() override {
        Employee::showDetails();  // Show Employee details
        cout << "Manager Level: " << managerLevel << endl;
    }

    virtual ~Manager() {
        cout << "Manager destructor called." << endl;
    }
};

int main() {
    Manager m("John Doe", 40, 101, 75000.5f, 2001, 15000.75f, 3);

    cout << "\nManager Details:" << endl;
    m.showDetails();

    cout << "\nDestroying Manager object..." << endl;

    return 0;
}
