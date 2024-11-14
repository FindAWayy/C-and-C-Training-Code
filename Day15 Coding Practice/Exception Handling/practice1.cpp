// Exception Handling( example 1 ) 

#include <iostream>
#include <stdexcept>  // For standard exception classes
using namespace std ; 

void testDivision(int a, int b) {
    if (b == 0) {
        throw invalid_argument("Division by zero error");
    }
    cout << "Result: " << a / b << endl;
}

int main() {
    try {
        testDivision(10, 0);  // This will throw an exception
    } catch (const invalid_argument& e) {
        cout << "Caught exception: " << e.what() << endl;
    }
    return 0;
}
