// Multimap with auto 

#include <iostream>
#include <map>
using namespace std ; 

int main() {

    multimap<int,string> mp;

    mp.insert({1, "apple"});
    mp.insert({2, "banana"});
    mp.insert({1, "avocado"});
    mp.insert({2, "blueberry"});
    mp.insert({3, "cherry"});

    cout << "Iterating through multimap (with auto):"<<endl;
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        cout << "Key: " << it->first << ", Value: " << it->second << endl;
    }

    return 0;
}

// Another way to display data with using auto

#include <iostream>
#include <map>
using namespace std ; 

int main() {

    multimap<int,string> mp;

    mp.insert({1, "apple"});
    mp.insert({2, "banana"});
    mp.insert({1, "avocado"});
    mp.insert({2, "blueberry"});
    mp.insert({3, "cherry"});

    cout << "Iterating through multimap (with auto):"<<endl;
    for( auto it : mp){
         cout<<it.first<<" "<<it.second<<endl;
    }

    return 0;
}