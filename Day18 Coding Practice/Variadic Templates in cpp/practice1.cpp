// Variadic Template: Recursion-Based Approach

#include<iostream>
using namespace std ; 

template<typename T > 
void print(T x ){
    cout<<x<<endl;
    
}

template<typename T , typename...Args> 
void print(T first,  Args...args) {
    cout << first << " "<<endl;
    print(args...);
}

int main(){
    
    print( 1,2,3,4,5);
    print( 1,2.6,3.1,50);
    print( 1,"Go","hARDIK",4,5.4);
    print( 1,2,true,4,false);
}