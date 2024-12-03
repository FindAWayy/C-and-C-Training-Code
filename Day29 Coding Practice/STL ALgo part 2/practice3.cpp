// fill in swap 

#include <iostream>
#include <vector>
#include <algorithm>  // For std::fill
using namespace std ;

int main() {
    vector<int> v(5, 0);  // Vector of 5 elements initialized to 0

    // Fill the vector with the value 7
    fill(v.begin(), v.end(), 7);

    // Display the vector after filling
    cout << "Vector after filling: ";
    for (int val : v) {
        cout << val << " ";
    }

    return 0;
}
