// With parameterized constructor 

#include <iostream>
using namespace std ; 

class Base {
   public: 
    
    Base( int x ){
        cout<<"Base Constructor with Value : "<< x <<endl; 
    }
};

class Derived : public Base{ 
    int x ; 
    public: 
    
    Derived( int  baseval , int derivedval) : Base(baseval) , x(derivedval) {
        cout<<"Derived class Parameterized constructor with value : "<<x<<endl;
    }
}; 

int main(){
    
    Derived d(20 , 30) ; 
}