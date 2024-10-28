////  Formatting and Stream Manipulators


#include <iostream>
#include <iomanip> // for std::setw
using namespace std;

int main() {
    cout << left << setw(10) << "Item" << setw(10) << "Price" << endl;
    cout << left << setw(10) << "Apple" << setw(10) << "$1.00" << endl;
    cout << left << setw(10) << "Banana" << setw(10) << "$0.50" << endl;
    return 0;
}

//////

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double num = 12345.6789;
    cout << "Default: " << num << endl;
    cout << "Fixed: " << fixed << num << endl;
    cout << "Scientific: " << scientific << num << endl;
    return 0;
}

/////

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 3.14159265358979323846;
    cout << "Pi to 2 decimal places: " << fixed << setprecision(2) << pi << endl;
    return 0;
}





