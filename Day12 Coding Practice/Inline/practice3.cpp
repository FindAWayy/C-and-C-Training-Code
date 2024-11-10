// ( Example 3 ) 

#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    inline double area() const {
        return 3.14159 * radius * radius;
    }
s
    inline double getRadius() const {
        return radius;
    }
};

int main() {
    Circle c1(5.0);

    cout << "Area of the circle: " << c1.area() << endl;

    // Inline function call to get the radius of the circle
    cout << "Radius of the circle: " << c1.getRadius() << endl;

    return 0;
}
