// Lambda function Implicit Return Type

#include <iostream>

int main() {
    auto multiply = [](int a, int b) { return a * b; };  // Return type is inferred as int
    std::cout << "Product: " << multiply(4, 5) << std::endl;  // Output: Product: 20

    return 0;
}

// Lambda Expressions with No Parameters

#include <iostream>

int main() {
    // Lambda with no parameters
    auto greet = []() {
        std::cout << "Hello, World!" << std::endl;
    };
    greet();  // Output: Hello, World!
    
    return 0;
}
