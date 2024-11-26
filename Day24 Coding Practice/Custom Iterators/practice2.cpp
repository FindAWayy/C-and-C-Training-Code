// Bidirectional Iterator 

#include <iostream>
#include <list>
using namespace std ; 

int main() {
    list<int> lst = {10, 20, 30, 40, 50};

    // Using a Bidirectional Iterator to traverse the list forward
    list<int>::iterator it = lst.begin();
    
    cout << "Forward traversal using Bidirectional Iterator: ";
    while (it != lst.end()) {
        cout << *it << " ";  // Dereference iterator to get the value
        ++it;                     // Move to the next element
    }
    cout << endl;

    // Move iterator to the end and traverse backward
    --it;  // Now it points to the last element
    cout << "Backward traversal using Bidirectional Iterator: ";
    while (it != lst.begin()) {
        cout << *it << " ";  // Dereference iterator to get the value
        --it;                     // Move to the previous element
    }
    cout << *it << endl;  // Print the first element
    
    // The following operations are not supported by Bidirectional Iterators:

    // 1. Cannot access elements randomly (it will result in a compilation error)
    // std::cout << *(it + 2) << std::endl;  // Error: Bidirectional Iterators do not support random access

    // 2. Cannot access elements via indexing (it will result in a compilation error)
    // std::cout << it[2] << std::endl;  // Error: Bidirectional Iterators do not support indexing

    return 0;
}

