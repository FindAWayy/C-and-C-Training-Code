// Move semantics with vector - It works differently in case of vector 
// C++ standard containers like std::vector already support move semantics

#include <iostream>
#include <vector>
using namespace std; 

void processVector(vector<int>&& vec) {
    cout << "Processing vector: ";
    for (int x : vec) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vec1 = {1, 2, 3, 4, 5};
    
    // Move vec1 to the function
    processVector(move(vec1));

    // After move, vec1 is empty
    cout << "vec1 after move: ";
    for (int x : vec1) {
        cout << x << " ";  // No output, because vec1 is now in a valid empty state
    }
    cout << endl;

    return 0;
}


// ( Example 2 )

#include <iostream>
#include <vector>

vector<int> generateVector() {
    vector<int> temp = {1, 2, 3, 4, 5};
    return temp;  // Return using move semantics (optimized by RVO/NRVO)
}

int main() {
    vector<int> vec = generateVector();  // No copy, move occurs

    // Output the moved vector
    cout << "Moved vector: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


// ( Example 3 ) 

#include <iostream>
#include <vector>
using namespace std ; 

 vector<int> createLargeVector() {
    vector<int> largeVec;
    for (int i = 0; i < 1000000; ++i) {
        largeVec.push_back(i);
    }
    return largeVec;  // Move semantics applied here
}

int main() {
    vector<int> vec = createLargeVector();  // No copy, move occurs
    cout << "Vector size: " << vec.size() << endl;

    return 0;
}



