//// String Member functions 


#include<iostream>
using namespace std ; 

int main(){
string str1 = "Hello";
string str2 = " World";
string result = str1 + str2;
cout << result << endl;

str1.append("!!!");
cout << str1 << endl; 

string str = "Hello World";
string sub = str.substr(6, 5); 
cout << sub << endl;

size_t pos = str.find("World");
if (pos != string::npos) {
    cout << "Found at index: " << pos << endl;
}
