// Function Overloading 

#include <iostream>
using namespace std;

class Printer {
public:

    void print(int i) {
        cout << "Printing integer: " << i << endl;
    }

    void print(float f) {
        cout << "Printing float: " << f << endl;
    }

    void print(string s) {
        cout << "Printing string: " << s << endl;
    }
};

int main() {
    Printer printer;
    
    
    printer.print(10);        
    printer.print(3.14f);    
    printer.print("Hello");  

    return 0;
}
