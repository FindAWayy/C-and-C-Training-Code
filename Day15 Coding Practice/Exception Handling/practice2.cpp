// Exception Handling( example 2 ) Types of Exception 

#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

void testLogicError(int num) {
    if (num < 0) {
        throw logic_error("Logic error: Negative number provided, but only positive numbers are allowed.");
    }
}

void testRuntimeError(int divisor) {
    if (divisor == 0) {
        throw runtime_error("Runtime error: Division by zero.");
    }
}

void testOutOfRangeError(int index) {
    const int array_size = 5;
    int array[array_size] = {10, 20, 30, 40, 50};
    if (index < 0 || index >= array_size) {
        throw out_of_range("Out of range error: Index exceeds the bounds of the array.");
    }
    cout << "Array value at index " << index << ": " << array[index] << endl;
}

void testInvalidArgumentError(int value) {
    if (value <= 0) {
        throw invalid_argument("Invalid argument error: Value must be greater than zero.");
    }
}

int main() {
    try {
        int num = -5;
        testLogicError(num);
    } catch (const logic_error& e) {
        cout << "Caught logic_error: " << e.what() << endl;
    }

    try {
        int num1 = 10, num2 = 0;
        testRuntimeError(num2);
        cout << "Result: " << num1 / num2 << endl; // This won't be executed due to the exception
    } catch (const runtime_error& e) {
        cout << "Caught runtime_error: " << e.what() << endl;
    }

    try {
        int index = 10;
        testOutOfRangeError(index);
    } catch (const out_of_range& e) {
        cout << "Caught out_of_range: " << e.what() << endl;
    }

    try {
        int value = -3;
        testInvalidArgumentError(value);
    } catch (const invalid_argument& e) {
        cout << "Caught invalid_argument: " << e.what() << endl;
    }

    return 0;
}
