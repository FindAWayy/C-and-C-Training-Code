// 

#include <iostream>
using namespace std;

class Box {
public:
    int length;

    Box(int len) : length(len) {}

    void display()  {
        cout << "Length: " << length << " at memory address: " << this << endl;
    }
};

void passByValue(Box box) {
    cout << "Inside passByValue - Memory address of box: " << &box << endl;
    box.length = 20;
    cout << "Inside passByValue after modification: ";
    box.display();
}

void passByReference(Box &box) {
    cout << "Inside passByReference - Memory address of box: " << &box << endl;
    box.length = 20;
    cout << "Inside passByReference after modification: ";
    box.display();
}

int main() {
    Box box1(10);
    cout << "Original box1 before modification - Memory address: " << &box1 << endl;
    box1.display();

    passByValue(box1);

    cout << "Original box1 after passByValue - Memory address: " << &box1 << endl;
    box1.display();

    passByReference(box1);

    cout << "Original box1 after passByReference - Memory address: " << &box1 << endl;
    box1.display();

    return 0;
}