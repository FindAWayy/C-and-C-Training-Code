// Input Iterator 

#include <iostream>
#include <vector>
#include <iterator> // For std::istream_iterator

using namespace std;

int main() {
    // Create an input iterator to read from standard input
    cout << "Enter some integers followed by Ctrl+D (or Ctrl+Z on Windows) to stop:" << endl;
    
    istream_iterator<int> start(cin), end;
    
    vector<int> vec(start, end);  // Copy all input values into a vector
    
    vector<int>:: iterator it = vec.begin(); 
        cout << "You entered the following values: ";
    for(  it ; it != vec.end() ; it++){
          cout<<*it<<endl;
    }
    cout << endl;
    
    // The following operations will not work with Input Iterators:

    // 1. Cannot modify values (it will result in a compilation error)
    // *start = 10;  // Error: Input Iterators are read-only
    
    // 2. Cannot move backward (it will result in a compilation error)
    // --start;  // Error: Input Iterators do not support backward movement

    return 0;
}
