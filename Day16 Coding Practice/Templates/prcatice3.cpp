// Template( Example 3 ) - With Strings 

#include <iostream>
#include <string>
using namespace std;

template <typename T>
T concatenate(T a, T b) {
    return a + b ;
}

// string strfun( string a , string b ){
//     return a > b ;
// }

int main() {
    string str1 = "Hello, ";
    string str2 = "world!";
    
    // string result = concatenate("hello", "world");// This will not work as char* is treated as a argument 
    
    //  string result = strfun("hello", "world"); // this will work but in function 
    
    // string result = concatenate(str1, str2); // this will work
    
    string result = concatenate(string("hello"), string("world") ); // this will work as explicitely we are changing into strings 
    
    cout << result << endl;

    return 0;
}