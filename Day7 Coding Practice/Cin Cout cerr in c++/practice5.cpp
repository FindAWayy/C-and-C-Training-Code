/// cerr in cpp

#include <iostream>
using namespace std;

int main() {
    int divisor = 0;
    int dividend = 10;

    if (divisor == 0) {
        cerr << "Error: Division by zero!" << endl;
    } else {
        cout << "Result: " << dividend / divisor << endl;
    }

    return 0;
}


