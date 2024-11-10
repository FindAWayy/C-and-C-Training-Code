// Function Overloading with Different Number of Arguments

#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    int add(int a, int b, int c, int d) {
        return a + b + c + d;
    }
};

int main() {
    Calculator calc;

    cout << "Sum of 5 and 10: " << calc.add(5, 10) << endl;         
    cout << "Sum of 1, 2, and 3: " << calc.add(1, 2, 3) << endl;    
    cout << "Sum of 1, 2, 3, and 4: " << calc.add(1, 2, 3, 4) << endl; 

    return 0;
}
