// List iterators 

#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lst = {10, 20, 30, 40, 50};

    cout << "Using normal iterators (begin() and end()):\n";
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Using reverse iterators (rbegin() and rend()):\n";
    for (auto rit = lst.rbegin(); rit != lst.rend(); ++rit) {
        cout << *rit << " ";  // Dereference the reverse iterator
    }
    cout << endl;

    cout << "Using constant iterators (cbegin() and cend()):\n";
    for (auto cit = lst.cbegin(); cit != lst.cend(); ++cit) {
        // *cit = *cit + 2 ;  not allowed 
        cout << *cit << " ";  // Dereference the constant iterator (read-only)
    }
    cout << endl;

    cout << "Using constant reverse iterators (crbegin() and crend()):\n";
    for (auto crit = lst.crbegin(); crit != lst.crend(); ++crit) {
        cout << *crit << " ";  // Dereference the constant reverse iterator
    }
    cout << endl;

    cout << "Modifying elements using normal iterator:\n";
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        *it *= 2;  // Modify the elements
    }
    cout << "Modified list: ";
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        cout << *it << " ";  // Display modified elements
    }
    cout << endl;
    cout << endl;

    return 0;
}
