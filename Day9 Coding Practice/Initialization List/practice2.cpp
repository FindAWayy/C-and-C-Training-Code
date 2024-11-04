// Using Classes and Base Class constructor 

#include<iostream>
using namespace std ; 

class Base {
    int x ; 
public:
    Base(int a ){
        x = a ; 
        cout<<a<<endl;
    }
};

class Derived : public Base {
    int y ; 
    public:
    Derived( int b ) : Base(10) {
        y = b ; 
        cout<<y<<endl;
    }
};

int main(){
    Derived obj(90); 
}