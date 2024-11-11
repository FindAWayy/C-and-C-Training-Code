// Friend class ( Example 2 ) 

#include <iostream>
using namespace std;

class Shape ; 

class Point {
private:
    int x, y;

public:
    Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}

    // Declare Shape class as a friend to access private members
    friend class Shape;

    void displayPoint() const {
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};

class Shape {
public:
    void move(Point& p, int deltaX, int deltaY) {
        p.x += deltaX;  // Access and modify private members of Point
        p.y += deltaY;
    }

    void scale(Point& p, int factor) {
        p.x *= factor; 
        p.y *= factor;
    }
};

int main() {
    Point p(2, 3);
    Shape s;
    
    p.displayPoint();
    
    s.move(p, 5, 5);  // Shape class moves the point
    p.displayPoint();
    
    s.scale(p, 2);  // Shape class scales the point
    p.displayPoint();

    return 0;
}
