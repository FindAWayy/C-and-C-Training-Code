/// Double Evaluation 

#include <iostream>
using namespace std ; 

// Macro with side effect
#define INCREMENT(x) (++(x))

inline int increment(int& x) {
    return ++x;
}

int main() {
    int a = 5;
    int b = 5;

    // Macro (evaluates multiple times)
    cout << "Macro INCREMENT: " << INCREMENT(a) + INCREMENT(a) << endl;  // 'a' is incremented twice!

    // Inline function (evaluates once)
    cout << "Inline increment: " << increment(b) + increment(b) << endl;  // 'b' is incremented only once

    return 0;
}