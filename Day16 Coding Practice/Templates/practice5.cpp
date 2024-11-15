// Template( Example 4 ) - SWAP FUNCTION PRACTICE - With vectors 

#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5, 6};
    
    cout << "Before swap:" << endl;
    for (int val : v1) cout << val << " ";
    cout << endl;
    for (int val : v2) cout << val << " ";
    cout << endl;

    swapValues(v1, v2);

    cout << "After swap:" << endl;
    for (int val : v1) cout << val << " ";
    cout << endl;
    for (int val : v2) cout << val << " ";
    cout << endl;

    return 0;
}