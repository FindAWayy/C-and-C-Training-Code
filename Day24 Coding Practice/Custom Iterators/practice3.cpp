// Random Iterator

#include <iostream>
#include <vector>
using namespace std ; 

int main() {
    vector<int> vec = {100, 200, 300, 400, 500};

    // Using a Random Access Iterator to traverse the vector forward
    vector<int>::iterator it = vec.begin();
    
    cout << "Forward traversal using Random Access Iterator: ";
    for (; it != vec.end(); ++it) {
        cout << *it << " ";  // Dereference iterator to get the value
    }
   cout << endl;

    // Random access: Access specific elements directly
   cout << "Accessing specific elements using Random Access Iterator:" << endl;
    cout << "Second element: " << *(vec.begin() + 1) <<endl;  // Output: 200
    cout << "Fourth element: " << *(vec.begin() + 3) << endl;  // Output: 400

    // Backward traversal using Random Access Iterator
   cout << "Backward traversal using Random Access Iterator: ";
    it = vec.end();
    --it;  // Move to the last element
    while (it != vec.begin()) {
        cout << *it << " ";  // Dereference iterator to get the value
        --it;                     // Move to the previous element
    }
    cout << *it << endl;  // Print the first element

    return 0;
}
