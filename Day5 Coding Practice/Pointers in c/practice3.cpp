// pointers and pointers

#include<iostream>
using namespace std ;


int main() {
    int value = 42;
    int* ptr = &value;
    int** ptrToPtr = &ptr;
    cout << "Value: " << value << endl;
    cout << "Value via pointer: " << *ptr << endl;
    cout << "Value via pointer to pointer: " << **ptrToPtr << endl;

    **ptrToPtr = 100;
    cout << "New Value: " << value << endl;

    cout<<ptr<<endl;
    cout<<*(ptrToPtr)<<endl;

} 
