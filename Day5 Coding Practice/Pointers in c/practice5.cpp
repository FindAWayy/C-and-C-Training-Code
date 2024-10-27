// pointers and functions 

#include <iostream>
using namespace std;

void increment(int* ptr) {
    (*ptr)++;
}

int main() {
    int value = 5;
    cout << "Original value: " << value << endl;

    increment(&value);
    cout << "Value after increment: " << value << endl;

    return 0;
}

/////

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

// Function that takes a function pointer and two integers
int compute(int (*operation)(int, int), int x, int y) {
    return operation(x, y); // Call the function pointed to by 'operation'
}

int main() {
    int a = 5, b = 10;

    int (*funcPtr)(int, int);

    funcPtr = add;
    cout << "Addition:" << compute(funcPtr, a, b) << endl;

    funcPtr = multiply;
    cout << "Multiplication:" << compute(funcPtr, a, b) << endl;

    return 0;
}


////

#include <iostream>
using namespace std;

void greet();
void farewell();

// Function pointer type
typedef void (*FuncPtr)();

int main() {
    FuncPtr func;

    func = greet;
    func(); // Call greet

    func = farewell;
    func(); // Call farewell

    return 0;
}

void greet() {
    cout << "Hello!" << endl;
}

void farewell() {
    cout << "Goodbye!" << endl;
}


