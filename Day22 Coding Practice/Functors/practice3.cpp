// Functors ( Example 3 )


#include <iostream>
#include <algorithm>
#include <vector>

class GreaterThan {
public:
    bool operator()(int a, int b) {
        return a > b;
    }
};

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    
   sort(vec.begin(), vec.end(), GreaterThan());

    for (int num : vec) {
        cout << num << " ";  // Output: 5 4 3 2 1
    }
}
