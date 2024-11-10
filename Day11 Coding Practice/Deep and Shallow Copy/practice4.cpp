// deep copy with array 

#include <iostream>
using namespace std ; 


class MyClass {
public:
    int* arr;
    int size;

    
    MyClass(int s) : size(s) {
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = i * 10;
        }
    }

    // Deep copy constructor (creates a new array and copies the data)
    MyClass(const MyClass& other) {
        size = other.size;
        arr = new int[size]; 
        for (int i = 0; i < size; ++i) {
            arr[i] = other.arr[i]; 
        }
    }

    ~MyClass() {
        delete[] arr;
    }

    void print() const {
        for (int i = 0; i < size; ++i) {
           cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    MyClass obj1(3); 
    obj1.print();

    MyClass obj2 = obj1;
    obj2.print();

    obj2.arr[0] = 100;

    cout << "After modifying obj2:" << endl;
    obj1.print();
    obj2.print();

    return 0;
}
