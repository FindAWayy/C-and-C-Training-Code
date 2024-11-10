/// Call by refererence ( Example 1 )

#include <iostream>
using namespace std;

class Box {
public:
    int length;

    Box(int len) : length(len) {}

    void display() {
        cout << "Length: " << length << endl;
    }
};

void passByValue(Box box) {
    cout << "Inside passByValue - Memory address of box: " << &box << endl;
    box.length = 30 ; 
    box.display();
}

void passByReference(Box &box) {
    cout << "Inside passByReference - Memory address of box: " << &box << endl;
    box.display();
}

int main() {
    Box box1(10);

    cout << "Original box1 - Memory address: " << &box1 << endl;
    passByValue(box1);
    passByReference(box1);

    return 0;
}