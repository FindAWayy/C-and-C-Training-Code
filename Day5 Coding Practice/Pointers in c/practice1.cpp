// Different pass by in C++

// Call by value 

#include <iostream>
using namespace std;

void modify(int x) {
    x += 10;
}

int main() {
    int value = 5;
    cout << "Before modify: " << value << endl;
    modify(value); // Pass by value
    cout << "After modify: " << value << endl; //  (no change)
    return 0;
}

// Pass By Reference 

#include <iostream>
using namespace std;

void modify(int& x) { 
    x += 10; 
}

int main() {
    int value = 5;
    cout << "Before modify: " << value << endl;
    modify(value); // Pass by reference
    cout << "After modify: " << value << endl;(changed)
    return 0;
}

// Pass By Pointer 

#include <iostream>
using namespace std;

void modify(int* x) { 
    *x += 10; 
}

int main() {
    int value = 5;
    cout << "Before modify: " << value << endl;
    modify(&value); // Pass by pointer
    cout << "After modify: " << value << endl;(changed)
    return 0;
}

// Null Pointer 

int *ptr = NULL;
if (ptr == NULL) {
    cout<<"Pointer is null"<<endl;
}
