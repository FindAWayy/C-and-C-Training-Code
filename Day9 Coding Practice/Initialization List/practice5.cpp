//// with different constructors 

#include <iostream>
using namespace std ; 

class Point {
private:
    int x;
    int y;

public:

    Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) { }

    Point(int xCoord) : x(xCoord), y(0) { }

    Point() : x(0), y(0) { }

    void display(){
        cout << "Point(" << x << ", " << y << ")" <<endl;
    }
};

int main() {
    Point p1(3, 4);
    Point p2(5);
    Point p3;

    p1.display();
    p2.display();
    p3.display();

    return 0;
}
