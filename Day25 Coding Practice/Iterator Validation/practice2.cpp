//  Iterator Validation ( Example 2 - List ) 

#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> lst = {10, 20, 30, 40};
    
    // Create an iterator
    auto it = lst.begin();

    cout << "Original list: ";
    for (auto& elem : lst) cout << elem << " ";
    cout << "\n";

    // Insertion (at the beginning)
    lst.insert(lst.begin(), 5);
    cout << "After insertion: ";
    for (auto& elem : lst) cout << elem << " ";
    cout << "\n";

    // Iterator is still valid after insertion
    cout << "Iterator pointing to: " << *it << "\n";  // iterator is still valid

    // Deletion (erase element at index 1)
    auto del_it = lst.begin();
    advance(del_it, 1);
    lst.erase(del_it);
    cout << "After deletion: ";
    for (auto& elem : lst) cout << elem << " ";
    cout << "\n";

    // Iterator invalidated if pointing to erased element
    cout << "Iterator after deletion: " << *it << "\n";  // iterator may be invalid if it points to the erased element
}
