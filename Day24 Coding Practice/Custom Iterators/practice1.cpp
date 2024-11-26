// Forward Iterartor 

#include <iostream>
#include <forward_list>
using namespace std; 

int main() {
    forward_list<int> flist = {1, 2, 3, 4, 5};

    // Using a Forward Iterator to traverse the list
    forward_list<int>::iterator it = flist.begin();
    
    cout << "Forward traversal using Forward Iterator: ";
    while (it != flist.end()) {
        cout << *it << " ";  // Dereference iterator to get the value
        ++it;                // Increment to move to the next element
    }
    cout << endl;


   // The following operations are not supported by Forward Iterators:

    // 1. Cannot move backward (it will result in a compilation error)
    // --it;  // Error: Forward Iterators do not support decrement

    // 2. Cannot access elements randomly (it will result in a compilation error)
    // cout << *(it + 2) << endl;  // Error: Forward Iterators do not support random access

    return 0;
}
