// List methods in Cpp

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {

    list<int> lst = {10, 20, 30, 40, 50};

    cout << "Front element: " << lst.front() << endl; 
    cout << "Back element: " << lst.back() << endl;  

    cout << "List size: " << lst.size() << endl; 
    cout << "Is the list empty? " << (lst.empty() ? "Yes" : "No") << endl; 

    lst.push_back(60);       // Adds 60 at the back
    lst.push_front(5);       // Adds 5 at the front
    
    // Insert 17 at the 3rd position (2nd index) using iterator
    auto it = lst.begin();
    advance(it, 2);  // Move iterator to the 3rd position (index 2)
    lst.insert(it, 17);  // Insert 17 at the 3rd position
    
    lst.insert(lst.begin() , 100);
    
    // lst.erase(lst.begin() + 1); // You cannot erase using an index; use an iterator
    
    lst.pop_back();  // Removes the last element (60)
    lst.pop_front(); // Removes the first element (5)

    lst.resize(5);  // Resize the list to have 5 elements (will shrink)
    
    // Use an iterator to insert a new value at a specific position
    auto it2 = lst.begin();
    advance(it2, 2);  // Move iterator to the 3rd position
    lst.emplace(it2, 30);  // Insert 30 at the 3rd position

    lst.emplace_front(50);  // Emplace 50 at the front

    // Print the final list
    cout << "List: ";
    for (int val : lst) {
        cout << val << " ";
    }
    cout << endl;

    // 4. Operations
    lst.remove(30);       // Removes all occurrences of 30
        cout << "List: ";
    for (int val : lst) {
        cout << val << " ";
    }
    cout << endl;
    // lst.remove_if([](int x) { return x % 20 == 0; });  // Removes all elements divisible by 20

    lst.push_back(25);
    lst.push_back(25);

    lst.unique();  // Removes consecutive duplicates
    // cout << "After unique: ";
    lst.remove(30);       // Removes all occurrences of 30
    for (int val : lst) {
        cout << val << " ";
    }
    cout<<endl;

    lst.reverse();  // Reverses the list
    cout << "After reverse: ";
    for (int val : lst) {
        cout << val << " ";
    }

    lst.sort();  // Sort the list
    cout << "After sort: ";
    for (int val : lst) {
        cout << val << " ";
    }
    cout << endl;


     // 7. Emplace examples
     lst.emplace_back(75);  
     lst.emplace_front(10);

     cout<<"List: "<<endl;

     for (int val : lst) {
        cout << val << " ";
    }
    cout << endl;


    return 0;
}
