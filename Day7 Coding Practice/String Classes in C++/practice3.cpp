//// String Member Functions 

#include<iostream>
using namespace std ; 

int main(){


string str = "Hello World";
str.replace(6, 5, "C++");
cout << str << endl; // Hello C++
str.erase(5, 3); 
cout << str << endl; // Hello
str.insert(5, " World");
cout << str << endl; // Hello World

string str1 = "Hello";
string str2 = "Hello";
string str3 = "World";
cout << str1.compare(str2) << endl; //0 (equal)
cout << str1.compare(str3) << endl; //-1 (str1 is less than str3)

}


