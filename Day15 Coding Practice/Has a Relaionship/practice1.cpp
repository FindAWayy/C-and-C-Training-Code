// Has a Relationship ( Example 1 ) 

#include <iostream>
using namespace std;

// Engine class (represents an engine of the car)
class Engine {
    
private:
    string engineType;  // Type of engine (e.g., V6, Electric, etc.)
    
public:
    Engine(string type) : engineType(type) {}
    
    void start() {
        cout << "Engine is starting." << endl;
    }
    
    void stop() {
        cout << "Engine is stopping." << endl;
    }

    string getType() {
        return engineType;
    }

};

// Car class (represents a car that "has a" Engine)
class Car {

private:
    string model;  // Car model (e.g., Tesla, Ford Mustang)
    Engine engine; // Engine is part of Car (has-a relationship)
    
public:
    Car(string carModel, string engineType) : model(carModel), engine(engineType) {}  // Engine is part of the Car
    
    void start() {
        cout << model << " is starting." << endl;
        engine.start();  // Using Engine's start method
    }
    
    void stop() {
        cout << model << " is stopping." << endl;
        engine.stop();  // Using Engine's stop method
    }

    void displayCarDetails() {
        cout << "Car Model: " << model << ", Engine Type: " << engine.getType() << endl;
    }

};

int main() {
    // Create a Car object that has an Engine
    Car myCar("Tesla Model S", "Electric");

    // Display car details
    myCar.displayCarDetails();

    // Start and stop the car
    myCar.start();
    myCar.stop();

    return 0;
}


