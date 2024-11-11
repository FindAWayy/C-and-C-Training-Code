// Friend Class ( Example 3 ) 

#include <iostream>
using namespace std;

class Manager;

class Vector {
private:
    int* data;
    int size;

public:
    Vector(int s) : size(s) {
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = i + 1;
        }
    }

    ~Vector() {
        delete[] data;
    }

    // Friend class declaration
    friend class Manager;

    void display() const {
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

class Manager {
public:
    void multiply(Vector& v, int factor) {
        for (int i = 0; i < v.size; ++i) {
            v.data[i] *= factor;  // Access and modify the private data of Vector
        }
    }

    void reset(Vector& v) {
        for (int i = 0; i < v.size; ++i) {
            v.data[i] = 0;  // Access and reset the private data of Vector
        }
    }
};

int main() {
    Vector v(5);
    Manager m;

    v.display();
    m.multiply(v, 2);  // Multiply all elements by 2
    v.display();
    
    m.reset(v);  // Reset all elements to 0
    v.display();

    return 0;
}
