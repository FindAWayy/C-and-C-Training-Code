// Set with custom operator in class 

#include <iostream>
#include <set>
#include <cmath> // For abs()

using namespace std;

// Custom comparator to sort numbers by their absolute values
class CompareByAbsoluteValue {
public:
    bool operator()(int a, int b) const {
        // Sort based on absolute value; if absolute values are equal, sort by actual value
        if (abs(a) == abs(b)) {
            return a < b; // Ensure uniqueness of elements in the set
        }
        return abs(a) < abs(b);
    }
};

int main() {
    // Declare a set of integers with a custom comparator
    set<int, CompareByAbsoluteValue> numbers;

    numbers.insert(10);
    numbers.insert(-20);
    numbers.insert(15);
    numbers.insert(-10); // Duplicate absolute value of 10

    // Display the elements in the set
    cout << "Numbers in the set (sorted by absolute value):" << endl;
    for (const auto& num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Insert a new number
    cout << "\nInserting a new number (5):" << endl;
    numbers.insert(5);

    // Display the updated set
    cout << "Updated set of numbers:" << endl;
    for (const auto& num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
