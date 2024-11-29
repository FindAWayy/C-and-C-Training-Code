// Example 4 

#include <iostream>
#include <memory>
#include <vector>
using namespace std ; 

int main() {
    // Create a shared pointer to a vector of integers
    shared_ptr<vector<int>> vec = make_shared<vector<int>>(5, 1);  // Initialize with 5 ones

    // Create another shared pointer to the same vector
    shared_ptr<vector<int>> vec2 = vec;

    // Modify the vector through the second shared pointer
    vec->push_back(2);
    vec2->push_back(3);

    // Both shared pointers point to the same vector, so changes are reflected
    for (const auto& val : *vec) {
        cout << val << " ";
    }
    cout << endl;

    // The memory for the vector will be freed when both shared_ptr instances go out of scope
    return 0;
}
