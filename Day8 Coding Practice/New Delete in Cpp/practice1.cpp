// new and delete keyword 

#include <iostream>
using namespace std ; 

int main() {

    int* a = new int;
    *a = 42;

    cout << "Single Integer: " << *a << endl;

    int size = 5;
    int* arr = new int[size];

    for (int i = 0; i < size; ++i) {
        arr[i] = i * 10;
    }

   cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << std::endl;


    delete a;
    delete[] arr;

    return 0;
}
