// Erasing elements in vector 
// Erasing a single element in array 

#include <iostream>
#include <vector>
using namespace std ;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    // Erase the second element (index 1)
    v.erase(v.begin() + 1);

    // Display the vector after erasing the element
    cout << "Vector after erasing second element: ";
    for (int val : v) {
        cout << val << " ";
    }

    return 0;
}

// Erasing a range 

#include <iostream>
#include <vector>

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    // Erase elements from the second to the fourth element (index 1 to index 3)
    v.erase(v.begin() + 1, v.begin() + 4);

    // Display the vector after erasing a range of elements
    cout << "Vector after erasing a range of elements: ";
    for (int val : v) {
        cout << val << " ";
    }

    return 0;
}

// Erasing all elements 

#include <iostream>
#include <vector>

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    // Erase all elements
    v.clear();

   cout << "Vector after clear(): " << (v.empty() ? "Empty" : "Not Empty") << endl;

    return 0;
}



