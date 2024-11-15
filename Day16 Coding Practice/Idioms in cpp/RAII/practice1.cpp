// RAII ( Resource Acquisition Is Initialization ) with Arrays


#include <iostream>
using namespace std ; 

class MyArray {
private:
    int* data;
    int size;

public:

    MyArray(int n) : size(n) {
        data = new int[size];
        cout << "Memory allocated for " << size << " elements.\n";
    }

    ~MyArray() {
        delete[] data;
        cout << "Memory released.\n";
    }

    void set(int index, int value) {
        if (index >= 0 && index < size)
            data[index] = value;
    }

    int get(int index) const {
        if (index >= 0 && index < size)
            return data[index];
        return -1;  // Error value
    }
};

int main() {
    {
        MyArray arr(10);  // Memory is allocated here
        arr.set(0, 42);
        cout << "Value at index 0: " << arr.get(0) <<endl;
    }  // Memory is automatically released when arr goes out of scope
    cout<<"Main function Completed ";

    return 0;
}
