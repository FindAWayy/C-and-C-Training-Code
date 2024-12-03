// Copying in vector 
// Uisng assingment operator 

#include <iostream>
#include <vector>
using namespace std ;

int main() {
    vector<int> source = {1, 2, 3, 4, 5};
    vector<int> destination;

    // Copy using the assignment operator
    destination = source;

    // Display the destination vector
    cout << "Destination vector: ";
    for (int val : destination) {
        cout << val << " ";
    }

    return 0;
}

// using copy constructor 

#include <iostream>
#include <vector>

int main() {
    vector<int> source = {1, 2, 3, 4, 5};
    
    // Copy using the copy constructor
    vector<int> destination(source);

    // Display the destination vector
    cout << "Destination vector: ";
    for (int val : destination) {
        cout << val << " ";
    }

    return 0;
}

// Using copy function 

#include <iostream>
#include <vector>
#include <algorithm>  // For std::copy

int main() {
    vector<int> source = {1, 2, 3, 4, 5};
    vector<int> destination(5);  // Initialize destination with the same size as source

    // Copy using std::copy
   copy(source.begin(), source.end(), destination.begin());

    // Display the destination vector
    cout << "Destination vector: ";
    for (int val : destination) {
        cout << val << " ";
    }

    return 0;
}

// Using insert 

#include <iostream>
#include <vector>

int main() {
    vector<int> source = {1, 2, 3, 4, 5};
    vector<int> destination;

    // Copy using insert
    destination.insert(destination.end(), source.begin(), source.end());

    // Display the destination vector
    cout << "Destination vector: ";
    for (int val : destination) {
        cout << val << " ";
    }

    return 0;
}

// Using assign

#include <iostream>
#include <vector>

int main() {
    vector<int> source = {1, 2, 3, 4, 5};
    vector<int> destination;

    // Copy using assign
    destination.assign(source.begin(), source.end());

    // Display the destination vector
    cout << "Destination vector: ";
    for (int val : destination) {
       cout << val << " ";
    }

    return 0;
}





