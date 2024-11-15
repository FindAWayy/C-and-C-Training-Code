// Pointer to implementation ( EXAMPLE 1 ) 

#include <iostream>
#include <memory>  // Include this for unique_ptr
using namespace std;

class first {
    int a;
    int b;

public:
    void getdata() {
        a = 10;
        b = 20;
    }

    void putdata() {
        cout << a << " " << b << endl;
    }
};

class Second {
    unique_ptr<first> f;

public:
    Second() {
        // Initialize the unique_ptr
        f = make_unique<first>();
    }

    void getdata() {
        f->getdata();
    }

    void putdata() {
        f->putdata();
    }
};

int main() {
    Second s;
    s.getdata();  
    s.putdata();  

    return 0;
}