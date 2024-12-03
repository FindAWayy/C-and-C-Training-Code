// Unique in Vector 

// unique removes consecutive duplicate elements from a vector. It doesn't shrink the container, but it moves unique elements to the front, and you need to
// call erase to remove the remaining duplicates.

#include <iostream>
#include <vector>
#include <algorithm>  // For std::unique
using namespace std ;

int main() {
    vector<int> v = {1, 1, 2, 3, 3, 4, 5, 5};

    // Remove consecutive duplicates
    auto it = unique(v.begin(), v.end());

    // Resize vector to remove undefined elements
    v.erase(it, v.end());

    // Display the vector after removing duplicates
    cout << "Vector after removing duplicates: ";
    for (int val : v) {
        cout << val << " ";
    }

    return 0;
}
