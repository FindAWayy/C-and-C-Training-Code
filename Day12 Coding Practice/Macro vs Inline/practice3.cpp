// Type checking 

#include <iostream>
using namespace std ;

#define ADD(x, y) ((x) + (y))

inline int add(int x, int y) {
    return x + y;
}

int main() {

    cout << "Macro ADD: " << ADD(5, 3) << endl;  
    cout << "Macro ADD (wrong types): " << ADD(5, "Hello") <<endl;  // Undefined behavior


    cout << "Inline ADD: " << add(5, 3) << endl;  
    cout << "Inline ADD (wrong types): " << add(5, "Hello") << endl;  // Compile-time error

    return 0;
}
