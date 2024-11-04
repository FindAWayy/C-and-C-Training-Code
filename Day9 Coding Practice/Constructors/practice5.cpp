// Delagating Constructor 

#include <iostream>
using namespace std ; 

class Point {
private:
    int x;
    int y;

public:
    Point(int x, int y) : x(x), y(y) {
        cout << "Point constructor called with x and y." << endl;
    }

    Point(int value) : Point(value, value) {  // Delegates to the first constructor
       cout << "Delegating constructor called." <<endl;
    }

    void display() const {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(10, 20);  
    p1.display();   

    Point p2(15);    
    p2.display(); 

    return 0;
}
