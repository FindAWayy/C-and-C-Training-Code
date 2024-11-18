// Using class objects 

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

class Names {
public:
    string name;
    int age;

    Names(string n, int a){
        name = n ; 
        age = a ; 
    }

   friend ostream& operator<<(ostream &os, const Names& n) {
        os << "Name: " << n.name << ", Age: " << n.age;
        return os;
    }
};


int main(){
    
    Names n1("Hardik" , 22 ) ; 
    Names n2("Kanishka" , 22 ) ; 
    print( 1,"Go","hARDIK",4,5.4 , n1 , n2);

}
