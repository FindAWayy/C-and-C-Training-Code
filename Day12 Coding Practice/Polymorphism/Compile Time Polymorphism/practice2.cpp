// Overloading Based on const

#include <iostream>
using namespace std;

class Data {
public:
    void showData() {
        cout << "Non-const version: Data" << endl;
    }

    void showData() const {
        cout << "Const version: Data (read-only)" << endl;
    }
};

int main() {
    Data d1;
    const Data d2; 

    d1.showData();  // Calls non-const version
    d2.showData();  // Calls const version

    return 0;
}
