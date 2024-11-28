// Iterator Validation ( Example 3 - Unordered Map and Unordered Set )

#include <iostream>
#include <unordered_set>
#include <unordered_map>

using namespace std;

int main() {
    unordered_set<int> us = {10, 20, 30, 40};
    unordered_map<int, string> ump = {{1, "apple"}, {2, "banana"}, {3, "cherry"}};
    
    // Create iterators
    auto us_it = us.begin();
    auto ump_it = ump.begin();

    cout << "Original unordered_set: ";
    for (auto& elem : us) cout << elem << " ";
    cout << "\n";

    cout << "Original unordered_map: ";
    for (auto& pair : ump) cout << pair.first << ": " << pair.second << " ";
    cout << "\n";

    // Insertion (for both unordered_set and unordered_map)
    us.insert(50);
    ump.insert({4, "date"});
    cout << "After insertion: ";
    for (auto& elem : us) cout << elem << " ";
    cout << "\n";
    for (auto& pair : ump) cout << pair.first << ": " << pair.second << " ";
    cout << "\n";

    // Iterator remains valid after insertion
    cout << "Iterator pointing to: " << *us_it << "\n";
    cout << "Iterator pointing to: " << ump_it->first << ": " << ump_it->second << "\n";

    // Deletion (erase element)
    us.erase(20);
    ump.erase(2);
    cout << "After deletion: ";
    for (auto& elem : us) cout << elem << " ";
    cout << "\n";
    for (auto& pair : ump) cout << pair.first << ": " << pair.second << " ";
    cout << "\n";

    // Iterator invalidated if pointing to the erased element
    cout << "Iterator after deletion: ";
    cout << *us_it << "\n"; // Iterator may be invalid if pointing to erased element
    cout << ump_it->first << ": " << ump_it->second << "\n";  // Iterator may be invalid if pointing to erased element
}
