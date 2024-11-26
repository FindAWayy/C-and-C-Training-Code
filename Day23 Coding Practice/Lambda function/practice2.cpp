// Lambda function by Reference or Value

#include <iostream>

int main() {
    int x = 10, y = 20;

    // Capture all by reference
    auto sumByRef = [&]() {
        x += 5;  // Modifies the original x
        y += 10; // Modifies the original y
        return x + y;
    };
    std::cout << "Sum by ref: " << sumByRef() << std::endl;  // Output: Sum by ref: 45

    // Capture all by value
    auto sumByVal = [=]() {
        return x + y;  // Uses captured values of x and y
    };
    std::cout << "Sum by value: " << sumByVal() << std::endl;  // Output: Sum by value: 30

    return 0;
}
