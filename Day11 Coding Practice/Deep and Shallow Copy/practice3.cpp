// shallow copy with array 

#include <iostream>
using namespace std; 


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

    MyClass(const MyClass& other) {
        size = other.size;
        arr = other.arr;  // Shallow copy: both objects share the same array
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
    MyClass obj1(5);
    obj1.print();

    MyClass obj2 = obj1; 
    obj2.print();

    obj2.arr[0] = 100; 
    cout << "After modifying obj2:" <<endl;
    obj1.print();
    obj2.print();

    return 0;
}