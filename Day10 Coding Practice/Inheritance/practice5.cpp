/// ( Protected inheritance ) Example 2 

#include <iostream>
using namespace std;

class Employee {
public:
    void work() {
        cout << "Employee is working." << endl;
    }
protected:
    void takeBreak() {
        cout << "Employee is taking a break." << endl;
    }
};

class Manager : protected Employee {
public:
    void manage() {
        work();    
        takeBreak();
        cout << "Manager is managing." << endl;
    }
};

int main() {
    Manager manager;
    manager.manage(); 

    // manager.takeBreak(); // Not accessible
    // manager.work(); //  Not accessible
    

    return 0;
}