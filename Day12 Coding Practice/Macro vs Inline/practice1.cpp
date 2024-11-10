// operator precedence

#include <iostream>
using namespace std ; 

// Macro: Operator precedence issues
#define SQUARE(x) ((x) * (x)) // 5+3 = 8*8 // 
 /// (5+3) * (5+3) 

// Inline function: Correct operator precedence
inline int square(int x) {
    return x * x;
}

int main() {
    int a = 5;
    int b = 3;

    cout << "Macro square (a + b): " << SQUARE(a + b) << endl; 

    cout << "Inline function square (a + b): " << square(a + b) <<endl;

    return 0;
}
