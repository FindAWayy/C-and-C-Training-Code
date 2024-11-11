// friend function 

#include <iostream>
using namespace std;

class Box {
private:
    double length, width, height;
    
public:
    Box(double l, double w, double h) : length(l), width(w), height(h) {}

    // Declare volume as a friend function
    friend double volume(Box b);
};

// Friend function to calculate volume of the Box
double volume(Box b) {
    return b.length * b.width * b.height;
}

int main() {
    Box b(3.0, 4.0, 5.0);
    cout << "Volume of Box: " << volume(b) << endl;  // Accessing private members through friend function
    return 0;
}
