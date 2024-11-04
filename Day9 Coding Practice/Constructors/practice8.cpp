/// Inheritance with default and parameterized constructor 

#include <iostream>
using namespace std ; 

class Base {
   public: 
    Base(){
        cout<<"Base Class default constructor "<<endl;
    }
    
    Base( int x ){
        cout<<"Base Constructor with Value : "<< x <<endl; 
    }
};

class Derived : public Base{ 
    public: 
    
    Derived( int x ) : Base(x) {
        cout<<"Derived class Parameterized constructor with value : "<<x<<endl;
    }
}; 

int main(){
    
    Derived d = 30 ; 
}