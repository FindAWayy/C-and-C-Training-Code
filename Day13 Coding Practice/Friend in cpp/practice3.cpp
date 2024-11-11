// Friend Class

#include <iostream>
using namespace std;

class Calculator;

class Box {
private:
    double length;
    double width;
    
public:
    Box(double l, double w) : length(l), width(w) {}
    
    // Declaring class Calculator as a friend
    friend class Calculator;
};

class Calculator {
public:
    double calculateArea(Box& b) {
        return b.length * b.width;  // Access private members directly
    }
};

int main() {
    Box b(5.0, 10.0);
    Calculator calc;
    
    cout << "Area of the box: " << calc.calculateArea(b) << endl;  // Calculator can access Box's private members

    return 0;
}
