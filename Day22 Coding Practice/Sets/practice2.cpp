// Sets Iterators 

#include <iostream>
#include <set>
using namespace std ;

int main() {
    set<int> s = {10, 20, 30, 40};
    
    auto it = s.begin();
    cout << "First element: " << *it << endl;
    
    auto it2 = s.end();
    cout << "Last element: " << *it2 << endl;
    --it2;
    cout<<"Last element after traversing back: "<<*it2<<endl;
    
        auto rit = s.rbegin();
    cout << "Last element (using rbegin): " << *rit << endl; 
    
        auto rit2 = s.rend();
    // --rit2;  // Move to the first element in reverse
    cout << "First element (using rend): " << *rit2 << endl;
    
        for (auto it3 = s.begin(); it3 != s.end(); ++it3) {
        cout << *it3 << " "; 
    }
    
        for (auto it = s.rbegin(); it != s.rend(); ++it) {
        std::cout << *it << " ";  // Output: 40 30 20 10
    }
    
    
    return 0;
}