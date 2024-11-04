// Parameterized Constructor 

#include <iostream>
#include <string>
using namespace std ; 

class Car {
private:
    string brand;
    int year;

public:
    Car(string b, int y){
        brand = b ; 
        year = y ; 
        cout << "Parameterized constructor called. Car created." <<endl;
    }

    void display() {
        cout << "Car Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car myCar("Toyota", 2021);
    myCar.display(); 

    return 0;
}

