/// Constructor Initialization List 

// In classes 

#include<iostream>
using namespace std ; 

class Base {
    int x ; 
public:
    Base(int a ){
        x = a ; 
        cout<<a<<endl;
    }
};

class Derived : public Base {
    int y ; 
    public:
    Derived( int b ) : Base(10) {
        y = b ; 
        cout<<y<<endl;
    }
};

int main(){
    Derived obj(90); 
}

/// Other example 

#include <iostream>
#include <string>
using namespace std ; 

class Car {
private:
    string brand;
    int year;

public:
    Car(string b, int y) : brand(b) , yaer(y) { 
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

