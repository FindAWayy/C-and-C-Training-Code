/// Reference as class members 

#include <iostream>
using namespace std;

class Box {
public:
    int length;
    int& refLength;

    Box(int len) : length(len), refLength(length) {
    }

    void display() {
        cout << "Box length: " << length << ", Reference to length: " << refLength << endl;
    }
};

int main() {
    Box box1(10);
    box1.display();


    box1.length = 20;


    cout << "After modifying length: ";
    box1.display();

    box1.refLength = 30;
    cout << "After modifying reference (refLength): ";
    box1.display();

    return 0;
}