 //  Iterator Validation ( Example 3 - Map and Set )

#include <iostream>
#include <set>
#include <map>

using namespace std;

int main() {
    set<int> st = {10, 20, 30, 40};
    map<int, string> mp = {{1, "one"}, {2, "two"}, {3, "three"}};
    
    // Create iterators
    auto st_it = st.begin();
    auto mp_it = mp.begin();

    cout << "Original set: ";
    for (auto& elem : st) cout << elem << " ";
    cout << "\n";

    cout << "Original map: ";
    for (auto& pair : mp) cout << pair.first << ": " << pair.second << " ";
    cout << "\n";

    // Insertion (for both set and map)
    st.insert(50); // Insert into set
    mp.insert({4, "four"}); // Insert into map
    cout << "After insertion: ";
    for (auto& elem : st) cout << elem << " ";
    cout << "\n";
    for (auto& pair : mp) cout << pair.first << ": " << pair.second << " ";
    cout << "\n";

    // Iterator still valid after insertion
    cout << "Iterator pointing to: " << *st_it << "\n";
    cout << "Iterator pointing to: " << mp_it->first << ": " << mp_it->second << "\n";

    // Deletion (erase element)
    st.erase(20); // Erase from set
    mp.erase(2);  // Erase from map
    cout << "After deletion: ";
    for (auto& elem : st) cout << elem << " ";
    cout << "\n";
    for (auto& pair : mp) cout << pair.first << ": " << pair.second << " ";
    cout << "\n";

    // Iterator invalidated if pointing to the erased element
    cout << "Iterator after deletion: ";
    cout << *st_it << "\n"; // Should be invalidated if pointing to erased element
    cout << mp_it->first << ": " << mp_it->second << "\n";  // Invalidated if pointing to erased element
}


