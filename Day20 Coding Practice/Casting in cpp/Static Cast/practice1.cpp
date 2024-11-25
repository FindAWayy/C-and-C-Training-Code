// Static Cast ( Exzample 1 ) 

#include <iostream>
using namespace std;

int main() {
    int intValue = 42;
    // Using static_cast to convert int to float
    float floatValue = static_cast<float>(intValue);

    cout << "Integer value: " << intValue << endl;
    cout << "Float value after casting: " << floatValue << endl;

    return 0;
}

//  By pointers 

#include <iostream>
using namespace std;

int main() {
    int value = 100;
    void* ptr = &value;  // void pointer pointing to an integer

    // Static cast void pointer to int pointer
    int* intPtr = static_cast<int*>(ptr);

    // Dereferencing the cast pointer
    cout << "Value pointed by intPtr: " << *intPtr << endl;

    return 0;
}

