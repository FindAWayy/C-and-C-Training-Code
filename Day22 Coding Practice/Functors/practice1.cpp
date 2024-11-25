// Functors ( Example 1 ) 

#include<iostream>
using namespace std ; 

class Add {
public:
    int operator()(int a, int b) {
        return a + b;
    }
};


int main(){
Add add;
int result = add(2, 3);
cout << result << endl;

}