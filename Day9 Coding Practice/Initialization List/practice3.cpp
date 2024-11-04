// Member Initialization Order 

#include <iostream>
using namespace std ; 

class Calculator {
private:
    int a;
    int b;

public:
    Calculator(int x, int y) : a(x), b(a + y) {
    }

    void display() const {
        std::cout << "a: " << a << ", b: " << b << std::endl;
    }
};

int main() {
    Calculator calc(5, 10);
    calc.display();
    return 0;
}