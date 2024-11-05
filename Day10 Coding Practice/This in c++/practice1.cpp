// Accessing member variables using this pointer

#include <iostream>
using namespace std;

class Rectangle {
private:
    int width, height;

public:
    Rectangle(int w, int h) {
        this->width = w; 
        this->height = h;
    }

    int area() {
        return this->width * this->height;
    }
};

int main() {
    Rectangle rect(5, 10);
    cout << "Area: " << rect.area() << endl;
    return 0;
}
