/// copy constructors with explicit 

// Without Explicit 

#include <iostream>

using namespace std;

class Point {
private:
    int x, y;

public:
    Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {
        cout << "Constructor called for Point(" << x << ", " << y << ")" << endl;
    }
    Point(const Point& other){
        x = other.x ; 
        y = other.y; 
        cout << "Copy constructor called for Point(" << x << ", " << y << ")" << endl;
    }

    void display() const {
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(1, 2);
    Point p2 = p1;  // Copy constructor called
    p2.display();
}

/// With explicit 

#include <iostream>

using namespace std;

 class ExplicitPoint {
 private:
    int x, y;

 public:

     ExplicitPoint(int xCoord, int yCoord) : x(xCoord), y(yCoord) {
         cout << "Constructor called for ExplicitPoint(" << x << ", " << y << ")" << endl;
     }

    explicit ExplicitPoint(const ExplicitPoint& other) : x(other.x), y(other.y) {
         cout << "Copy constructor called for ExplicitPoint(" << x << ", " << y << ")" << endl;
     }

     void display() const {
         cout << "ExplicitPoint: (" << x << ", " << y << ")" << endl;
     }
 };

int main() {

     ExplicitPoint ep1(5, 6);
    //ExplicitPoint ep2 = ep1;  // Error: cannot use copy constructor implicitly
    // ep2.display();            // This line will not compile

     // Correct way 
     ExplicitPoint ep3(ep1);   // Explicit copy constructor called
     ep3.display();             // Output: ExplicitPoint: (5, 6)

    return 0;
}

