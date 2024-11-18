/// MultiMap without auto 

#include <iostream>
#include <map>
using namespace std ; 

int main() {
    multimap<int, string> mp;

    // Insert elements into the multimap
    mp.insert({1, "apple"});
    mp.insert({2, "banana"});
    mp.insert({1, "avocado"});
    mp.insert({2, "blueberry"});
    mp.insert({3, "cherry"});
    mp.insert({1, "grapes"});

    cout << "Iterating through multimap (without auto):"<<endl;
    for (multimap<int, string>::iterator it = mp.begin(); it != mp.end(); ++it) {
        cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    }

    return 0;
}