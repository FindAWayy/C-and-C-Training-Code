/// Constructors in Derived class 

#include <iostream>
using namespace std ; 

class Rectangle {
protected:
     int width;
     int height;

public:
    Rectangle(int w, int h){
        cout << "Rectangle constructor called: Width = " << w << ", Height = " << h <<endl;
    }

    int area() {
        return width * height;
    }
};

class Square : public Rectangle {
public:
    Square( int side ) : Rectangle( 10 , 20 ) { 
        cout << "Square constructor called: Side = " << side << endl;
    }
};

int main() {
    Square square(5); 

    return 0;
}