// Swap in Vector 

#include <iostream>
#include <vector>
#include <algorithm>  // For std::swap
using namespace std ;

int main() {
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5, 6};

    // Swap the contents of v1 and v2
    swap(v1, v2);

    // Display the vectors after swapping
    cout << "v1 after swap: ";
    for (int val : v1) {
        cout << val << " ";
    }
    cout << "\nv2 after swap: ";
    for (int val : v2) {
        cout << val << " ";
    }

    return 0;
}
