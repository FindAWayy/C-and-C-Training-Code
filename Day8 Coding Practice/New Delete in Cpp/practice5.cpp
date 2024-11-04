//// using delete instead of delete[] and analyzing the results 

#include <iostream>
using namespace std ; 

int main() {
    int* arr = new int[10];

    for (int i = 0; i < 10; ++i) {
        arr[i] = i + 1; 
    }
    
       for (int i = 0; i < 10; ++i) {
        cout << arr[i] << " "; //1 2 3 4 5 6 7 8 9 10 -> Common in all compilers 
    }
    
   cout<<endl;

    delete arr; // Incorrect: should use delete[]
    // arr = nullptr; // Prevents dangling pointer issues

    // Attempt to print values
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << " "; // Output after the program 
    }
    cout <<endl;

    return 0;
}

//// Results : 

/*
/// Shows Undefined Compiler 


tutorialspoint - 1588051611 5 50182811 916408123 5 6 7 8 9 10 
codechef - 1477511363 5 -1968127185 17002077 5 6 7 8 9 10
gfg online compiler - 0 0 3 4 5 6 7 8 9 10
GDB compiler - 0 0 3 4 5 6 7 8 9 10
one compiler - 1565662111 5 205701012 1478522409 5 6 7 8 9 10
C++ shell = 1 2 3 4 5 6 7 8 9 10
mycompiler.io - 1587447954 5 -2004881595 1133561659 5 6 7 8 9 10
programiz - 0 0 5820432 0 5 6 7 8 9 10

*/ 














