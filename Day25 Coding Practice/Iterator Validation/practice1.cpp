// Iterator Validation ( Example 1 - Vector ) 

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40};
    
    auto it = vec.begin();

    cout << "Original vector: ";
    for (auto& elem : vec) cout << elem << " ";
    cout << "\n";

    // Insertion (at the beginning)
    vec.insert(vec.begin(), 5);
    cout << "After insertion: ";
    for (auto& elem : vec) cout << elem << " ";
    cout << "\n";

    // Check if the iterator is invalid
    cout << "Iterator pointing to: " << *it << "\n"; // iterator may be invalid if reallocation occurs

    // Deletion (erase element at index 1)
    vec.erase(vec.begin() + 1);
    cout << "After deletion: ";
    for (auto& elem : vec) cout << elem << " ";
    cout << "\n";
    cout << "Iterator after deletion: " << *it << "\n";  // iterator may still be valid or invalid
}
