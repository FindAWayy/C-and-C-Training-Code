// Lambdas in STL Algorithms

#include <iostream>
#include <vector>
#include <algorithm>
usinag namespace std ;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    // Using lambda to print each element in the vector
    for_each(nums.begin(), nums.end(), [](int n) {
        cout << n << " ";
    });
    cout << endl;

    // Sorting with a lambda as a custom comparison function
    sort(nums.begin(), nums.end(), [](int a, int b) {
        return a > b;  // Sort in descending order
    });

    // Print sorted numbers
    for_each(nums.begin(), nums.end(), [](int n) {
        cout << n << " ";
    });
    cout << endl;

    return 0;
}
