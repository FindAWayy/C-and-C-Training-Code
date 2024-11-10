// ( Example 2 ) 

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
 
    Rectangle(int l, int w) : length(l), width(w) {}

    inline int area() const {
        return length * width;
    }
};

int main() {
    Rectangle rect(5, 3);
    cout << "Area of rectangle: " << rect.area() << endl;  // area() is inline
    return 0;
}
