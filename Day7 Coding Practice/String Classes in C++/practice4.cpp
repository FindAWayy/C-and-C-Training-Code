///// String Conversion and Member Functions 

#include <sstream>
#include<iostream>

int main() {
    int num = 42;
    string str = to_string(num); 
    cout << str << endl;     

    string str2 = "123";
    int num2 = stoi(str2);  
    cout << num2 << endl;

    string str = "Hello";
    for (auto it = str.begin(); it != str.end(); ++it) {
    cout << *it; 
    }
    cout<<endl;

    char first = str.front();
    char last = str.back();
    cout<<first<<" "<<last<<endl;

    str.clear();
    return 0;
}




