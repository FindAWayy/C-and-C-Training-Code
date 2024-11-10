//  Mutable Members and Const Objects


#include <iostream>
using namespace std;

class MyClass {
private:
    int value;
    mutable int cache;  // Mutable member, can be modified in const objects

public:
    MyClass(int v) : value(v), cache(0) {}

    // Const member function that modifies a mutable member
    int getValue() const {
        // value = 15 // this will not work 

        if (cache == 0) {
            cache = value * 2; 
        }
        return cache;
    }

    int getRawValue() const {
        return value;
    }
};

int main() {
    const MyClass obj(5);

    // You can modify the mutable cache in a const object
    cout << "Cached Value: " << obj.getValue() << endl;  // 
    cout << "Raw Value: " << obj.getRawValue() << endl;

    return 0;
}
