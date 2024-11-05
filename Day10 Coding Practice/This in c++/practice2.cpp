// Returning This 

#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter() {
	count = 0 ; 
     }

    Counter& increment() {
        count++;
        // cout<<this<<endl;
        return *this; // Return reference to the current object
    }

    // Display method
    void display() const {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c;
    // cout<<&c<<endl;
    c.increment().increment().display(); // Method chaining
    return 0;
}
