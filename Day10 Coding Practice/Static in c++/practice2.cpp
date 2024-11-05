// Static Member Function 

#include <iostream>
using namespace std;

class Calculator {
public:

  static int count;
  int num  = 9 ; 
  
  Calculator(){
      count++; 
  }
  
    static int add(int a, int b) {
        return a + b; // Static member function for addition
    }
    
    static void display1(){
        cout<<" count "<<count<<endl;
        // cout<<"num "<<num<<endl;
    }
    
         void display2(){
        cout<<" count "<<count<<endl;
    }
};

int Calculator:: count = 0 ; 

int main() {
    Calculator c1 ; 
    Calculator c2 ; 
    Calculator c3 ; 
    c3.display1(); 
    
    // int sum = c2.add(4,5);
    int sum = Calculator::add(5, 3);
    cout << "Sum: " << sum << endl;
    return 0;
}