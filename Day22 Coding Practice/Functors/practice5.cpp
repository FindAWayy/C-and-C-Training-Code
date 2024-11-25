
// Functors ( Example 5 ) with different operator 

#include <iostream>
using namespace std ; 

class Adder {
private:
    int valueToAdd;
public:
    Adder(int value) : valueToAdd(value) {}

    // Overloading the + operator
    int operator+(int num) {
        return num + valueToAdd;
    }
};

int main() {
    Adder add5(5);
    int result = add5 + 10;  // Uses the overloaded + operator
    cout << "Result: " << result << endl;  // Output: Result: 15
}

// 

#include <iostream>
using namespace std ;

class ArrayAccessor {
private:
    int arr[5] = {1, 2, 3, 4, 5};
public:
    // Overloading the [] operator to access elements of the array
    int operator[](int index) {
        return arr[index];
    }
};

int main() {
    ArrayAccessor arr;
    cout << "Element at index 2: " << arr[2] << endl;  // Output: Element at index 2: 3
}



