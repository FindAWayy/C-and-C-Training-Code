//// Initialization of Strings and Basic Member functions 

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Hello";         
    string str2("World");           
    string str3(5, 'A');   // Initialize with 5 'A's
    cout << str1 << " " << str2 << " " << str3 << endl;

    string str = "Hello";
    cout << "Size: " << str.size() << ", Length: " << str.length() << endl;

    string str = "Hello";
    cout << str[0] << endl; 
    cout << str.at(1) << endl;

   
    return 0;
}




