Template( Example 2 ) 

#include<iostream>
using namespace std ; 

template<typename T > 
 T add( T x , T y ){
     return x+y ; 
       
 }

int main(){
    
    cout<<add(int(2.8) , 3 ); // This will work 
    // cout<<add( 2.8 , 3 );  // this will not beacuse of different data types 
    cout<<add<double>( 2.8 , 3 ); // this will work 
}

