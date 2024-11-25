// Vectors Iterators in STL 

#include <iostream>
#include <vector>
using namespace std ; 

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};

    // Accessing elements using iterators
    cout << "Using begin() and end() iterators:\n";
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        int val = (*it) + 4 ; 
        cout <<val << " ";
    }
    cout << endl;

    // Accessing elements in reverse using rbegin() and rend()
    cout << "Using rbegin() and rend() iterators:\n";
    for (auto it = vec.rbegin(); it != vec.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Using const iterators (for read-only access)
    cout << "Using cbegin() and cend() iterators:\n";
    for (auto it = vec.cbegin(); it != vec.cend(); ++it) {
        // *it = (*it) + 4;  // Error: cannot assign to a value through a const_iterator
        cout << (*it) + 4 << " ";
    }
    cout << endl;

    // Using insert to add an element at a specific position
    vec.insert(vec.begin() + 2, 25);  // Insert 25 at index 2
    cout << "After inserting 25 at index 2: ";
    for (const auto& elem : vec) {
        cout << elem << " ";
    }
    cout << endl;

    // Using erase to remove an element
    vec.erase(vec.begin() + 1);  // Remove element at index 1
    cout << "After erasing element at index 1: ";
    for (const auto& elem : vec) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
