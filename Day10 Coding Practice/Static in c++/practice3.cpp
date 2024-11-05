// Static data member and member functions in inheritance( Example 1 ) 

#include <iostream>
using namespace std;

class Vehicle {
public:
int num = 10 ; 
    static int vehicleCount; 

    Vehicle() {
        vehicleCount++;
    }

    static void displayCount() { 
        cout << "Total Vehicles: " << vehicleCount << endl;
    }
};

int Vehicle::vehicleCount = 0;

class Car : public Vehicle {
public:
    Car() {
        // Each Car object also counts as a vehicle
    }
};

class Bike : public Vehicle {
public:
static int bikecount ; 
    Bike() {
        // Each Bike object also counts as a vehicle
        bikecount++; 
    }
    
    static void display(){
        cout<<"bikecount: "<<bikecount<<endl;
    }
};

int Bike::bikecount = 0; 

int main() {
    Car car1;
    Car car2;
    Bike bike1;
    
    bike1.display(); 

    Vehicle::displayCount(); // Output: Total Vehicles: 3

    return 0;
}

