// Constructor Delegation in inheritance 

#include <iostream>
using namespace std ; 

class Base {
   public: 
    Base( int x ){
        cout<<"Base Constructor with Value : "<< x <<endl; 
    }
};

class Derived : public Base{ 
    public: 
    
    Derived() : Derived(5) {
        cout<<"Derived Class default constructor "<<endl;
    }
    
    Derived( int x ) : Base(x) {
        cout<<"Derived class Parameterized constructor with value : "<<x<<endl;
    }
}; 

int main(){
    
    Derived d; 
}