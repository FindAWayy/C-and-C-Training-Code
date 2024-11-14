// "is-a" Relationship ( Example 1 ) 

#include <iostream>
using namespace std ; 

class Vehicle {
public:
    virtual void move() {
        cout << "The vehicle moves." << endl;
    }
};

class Car : public Vehicle {
public:
    void move() {
        cout << "The car drives." << endl;
    }
};

class Truck : public Vehicle {
public:
    void move() {
        cout << "The truck hauls heavy loads." << endl;
    }
};

int main() {
    Vehicle* vehicle;
    Car car;
    Truck truck;

    vehicle = &car;
    vehicle->move(); // Outputs: The car drives.

    vehicle = &truck;
    vehicle->move(); // Outputs: The truck hauls heavy loads.

    return 0;
}



