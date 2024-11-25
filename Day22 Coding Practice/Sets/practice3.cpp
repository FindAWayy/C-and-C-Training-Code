// Sets Methods ( Example 3 ) 

#include <iostream>
#include <set>
using namespace std ; 

int main() {
    set<int> s1 = {10, 20, 30};
    set<int> s2 = {40, 50, 60};
    
    s1.swap(s2); 
    
   cout << "Set 1: ";
    for (int num : s1) {
       cout << num << " ";
    }
    cout << "\nSet 2: ";
    for (int num : s2) {
        cout << num << " ";
    }
    
    cout << "Contains 20: " << (s2.contains(20) ? "Yes" : "No") << endl;
    cout << "Contains 50: " << (s2.contains(50) ? "Yes" : "No") <<endl;
    
      s2.emplace(25);  // Emplace an element
    s2.emplace(25);  // Duplicate, will not be inserted

    cout << "Set after emplace: ";
    for (int num : s2) {
        cout << num << " "; 
    }
    return 0;
}


