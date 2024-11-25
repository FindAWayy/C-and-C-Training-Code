// Sets Methods 

#include <iostream>
#include <set>
using namespace std ; 

int main() {
    set<int> s;
    auto result1 = s.insert(10);
    cout << "Inserted 10? " << result1.second << endl;
    auto result2 = s.insert(10);
    cout << "Inserted 10 again? " << result2.second <<endl;  // false

    for (int num : s) {
        cout << num << " "; 
    }
    cout<<endl;
    
   set<int> s2 = {90 ,10, 20, 30, 40};
    
    size_t i = s2.erase(90);
    cout<<i<<endl;
    // s.erase(s.begin());
    auto it = s2.begin();
    advance(it, 2);
    s2.erase(s2.begin() , it ); // will not include it -> 2 

    cout << "Set after erasure: ";
    for (int num : s2) {
        cout << num << " ";  
    }
    
    auto it2 = s2.find(30);
    if (it2 != s2.end()) {
        cout << "Found: " << *it2 << endl; 
    } else {
        cout << "Not found" << endl;
    }
    
        cout << "Count of 30: " << s2.count(30) << endl;  
    cout << "Count of 50: " << s2.count(50) << endl;  
    
       
    // cout << "Is the set empty? " << (s.empty() ? "Yes" : "No") << endl;
    
    // s.clear();
    
    // cout << "Is the set empty now? " << (s.empty() ? "Yes" : "No") << endl;
    
    cout << "Size of the set: " << s.size() << endl;
    
    cout << "Max size of the set: " << s.max_size() << endl;
    
      set<int> s3 = {10, 20, 30, 40};
    
    auto it3 = s3.lower_bound(22); // greater than or equal to  
    if (it3 != s3.end()) {
        cout << "Lower bound of 25: " << *it3 << endl;
    } else {
        cout << "No lower bound found" << endl;
    }
    
        auto it4 = s3.upper_bound(45); // strictly greater than
    if (it4 != s3.end()) {
        cout << "upper bound of 25: " << *it4 << endl;
    } else {
        cout << "No upper bound found" << endl;
    }
    
    //  pair<iterator , iterator> range = s.equal_range(30); correct it 
    auto range = s3.equal_range(20);
    // auto it5 = s3.end();
    // cout<<*it5<<endl; // output 4 ; the last index is 4 ; 
    
    cout << "Range for 45: [" << *range.first << ", " << *range.second << "]\n";

    
    return 0;
}

