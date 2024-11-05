// Distinguishing Member Variables from Parameters


#include <iostream>
using namespace std;

class Employee {
private:
    string name;

public:
    Employee(string name) {
        this->name = name; 
    }

    void display() const {
        cout << "Employee Name: " << this->name << endl;
    }
};

int main() {
    Employee emp("Hardik");
    emp.display();
    return 0;
}
