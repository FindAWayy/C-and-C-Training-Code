/// (Example 4 ) 

#include <iostream>
#include <vector>
using namespace std;

inline int square(int x) {
    return x * x;
}

inline int sumOfSquares(const vector<int>& values) {
    int sum = 0;
    for (int value : values) {
        sum += square(value);  // Inline function call
    }
    return sum;
}

int main() {
    vector<int> data = {1, 2, 3, 4, 5};

    cout << "Sum of squares: " << sumOfSquares(data) << endl;

    return 0;
}
