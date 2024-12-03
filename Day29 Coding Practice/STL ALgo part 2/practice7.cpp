// Example 2 

#include <iostream>
#include <vector>
#include <algorithm> // For std::transform
using namespace std ; 

int transform(int x) {
    return x * x * x ;
}

int main() {
    vector<int> vec;
    for (int i = 1; i <= 10; ++i) {
        vec.push_back(i);
    }

    cout << "Original vector: ";
    for (int n : vec) {
        cout << n << " ";
    }
    cout << endl;

    // Step 2: Transform the vector (e.g., square each element)
    vector<int> transformedVec(vec.size());
    transform(vec.begin(), vec.end(), transformedVec.begin(), transform);

    // Output the transformed vector
    cout << "Transformed vector: ";
    for (int n : transformedVec) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}


