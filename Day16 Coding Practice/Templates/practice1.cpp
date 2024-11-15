// Template ( Example 1 ) 

#include <iostream>
using namespace std;

template <typename T>  // T is a placeholder for any data type
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add(5, 3) << endl;           // Works for int // default -> if no data type is given int is taken as default 
    cout << add(5.5, 3.3) << endl;       // Works for double
    cout << add(1.1f, 2.2f) << endl;     // Works for float
    cout << add(string("Hello "), string("World")) << endl;  // Output: Hello World
    return 0;
}


