// Reverse the order of set ( Descending ) 

#include <iostream>
#include <set>
#include <functional>
using namespace std ; 

int main() {
    set<int, greater<int>> s;

    s.insert(10);
    s.insert(20);
    s.insert(5);
    s.insert(15);

    // ( largest to smallest )
    for (int num : s) {
        cout << num << " ";
    }

    return 0;
}

// Way 2 

#include <iostream>
#include <set>
using namespace std;

struct CustomComparator {
    bool operator()(int a, int b) const {
        // Custom comparison logic: order by the last digit
        return (a % 10) < (b % 10);  // Compare based on last digit
    }
};

int main() {

    set<int, CustomComparator> s;

    s.insert(10);
    s.insert(21);
    s.insert(5);
    s.insert(18);

       for (int num : s) {
       cout << num << " ";
    }

    return 0;
}

