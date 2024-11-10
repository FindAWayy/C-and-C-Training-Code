// Scope 

#include <iostream>
using namespace std ; 

#define PRINT(x) cout << x << endl;


inline void print(int a) {
    int a = 7 ; 
    cout << a << endl;
}

int main() {
    int a = 5;

    PRINT(a);  
    int b = 10;
    PRINT(b);


    print(a);
    print(b);

    return 0;
}
