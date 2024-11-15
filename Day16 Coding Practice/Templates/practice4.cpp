// Template( Example 4 ) - SWAP FUNCTION PRACTICE 

#include <iostream>
using namespace std;

template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    //integers
    int x = 10, y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    // doubles
    double a = 1.23, b = 4.56;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swapValues(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;

    // strings
    string str1 = "apple", str2 = "orange";
    cout << "Before swap: str1 = " << str1 << ", str2 = " << str2 << endl;
    swapValues(str1, str2);
    cout << "After swap: str1 = " << str1 << ", str2 = " << str2 << endl;
    

    return 0;
}

