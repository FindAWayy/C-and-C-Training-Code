// Some More Examples 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

int main() {
    vector<int> nums = {10, 20, 30, 40, 50};

    // Multiply each number by 2 using a lambda function
    for_each(nums.begin(), nums.end(), [](int& num) {
        num *= 2;  // Doubling each element in the vector
    });

    // Output the modified vector
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

// 

#include <iostream>
using namespace std;

int main() {
    auto multiply = [](int a, int b) -> double {
        return a * b / 2.0;
    };

    cout << "Result: " << multiply(10, 5) << endl;

    return 0;
}
