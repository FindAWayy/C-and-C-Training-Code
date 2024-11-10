// Inline function (example 1 ) 

#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    int num = 5;
    int result = square(num);  // Function call gets replaced with x * x
    cout << "Square of " << num << " is " << result << endl;
    return 0;
}
