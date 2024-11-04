// Explicit keyword in Constructors 

#include <iostream>
using namespace std; 

class Rectangle {
private:
    int width;
    int height;

public:
    explicit Rectangle(int w, int h) : width(w), height(h) {}

    void display() {
        cout << "Width: " << width << ", Height: " << height <<endl;
    }
};

int main() {
    Rectangle rect(10, 20); 
    rect.display();

    // Rectangle rect2 = 30; // Error: cannot convert int to Rectangle // Output: Width: 10, Height: 0 
    // Automatically gives 0 if explicit is not used 

    return 0;
}
