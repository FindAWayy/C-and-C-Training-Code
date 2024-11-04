// With Const member 

#include<iostream>
using namespace std ; 

class MyClass {
private:
    const int value;
    int val2 ; 
public:
    MyClass(int val , int val2) : value(val) {
        cout<<" const value is "<<value<<endl;
        this->val2 = val2 ; 
        cout<<" normal value is "<<val2<<endl;
    }
};

int main(){
    MyClass my(10 , 20);
}