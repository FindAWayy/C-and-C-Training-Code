// Vectors ( Example 3 ) 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ; 

int main() {
    vector<int> vec = {10, 20, 30};

    // Modify vector
    vec.push_back(40);
    vec.push_back(50);

    // Access elements
    cout << "First element: " << vec.front() << endl;
    cout << "Last element: " << vec.back() << endl;

    // Emplace example
    vec.emplace_back(60);
    vec.emplace(vec.begin()+2, 100);  // Construct 10 in place at position 0
    cout << "After emplace_back: ";
    for (auto x : vec) cout << x << " ";
    cout << endl;

    // Searching using find()
    auto it = find(vec.begin(), vec.end(), 30);
    if (it != vec.end()) {
        cout << "Found 30 at index: " << distance(vec.begin(), it)<<endl;
    }
    return 0;
}
