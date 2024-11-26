// Typedef ( Example 1 ) 

#include <iostream>
#include <vector>
#include <memory>  // For smart pointers

using namespace std;

// Typedef for basic types
typedef int Integer;           // Alias for 'int'
using Float = float;           // Alias for 'float' using C++11 'using' syntax

// Typedef for pointers
typedef int* IntPtr;           // Alias for 'int*' (pointer to int)
using PtrToFloat = float*;     // Alias for 'float*' using 'using' syntax

// Typedef for function pointers
typedef int (*Operation)(int, int);  // Function pointer alias
using OpFunc = int (*)(int, int);    // Function pointer alias using 'using' syntax

// Custom function for function pointer examples
int add(int a, int b) {
    return a + b;
}

// Typedef for arrays
typedef int IntArray[5];        // Alias for 'int[5]'
using IntArr = int[5];          // Alias for 'int[5]' using 'using' syntax

// Typedef for template types (before C++11)
template<typename T>
struct TypeAlias {
    typedef vector<T> Vec;  // Alias for 'vector<T>'
};

// C++11 'using' for template types
template<typename T>
using Vec = vector<T>;

int main() {
    // Using typedefs for basic types
    Integer x = 10;  // 'Integer' is now an alias for 'int'
    Float pi = 3.14f;  // 'Float' is now an alias for 'float'

    cout << "Integer x: " << x << endl;
    cout << "Float pi: " << pi << endl;

    // Using typedef for pointers
    int a = 20;
    IntPtr ptr = &a;  // 'IntPtr' is an alias for 'int*'
    cout << "Value of a through pointer: " << *ptr << endl;

    // Using typedef for function pointers
    Operation op = add;  // 'Operation' is a function pointer alias
    cout << "Function result (add): " << op(5, 7) << endl;

    // Using typedef for arrays
    IntArray arr = {1, 2, 3, 4, 5};  // 'IntArray' is an alias for 'int[5]'
    cout << "Array elements: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Using 'using' syntax for arrays
    IntArr arr2 = {10, 20, 30, 40, 50};  // 'IntArr' is an alias for 'int[5]'
    cout << "Array2 elements: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    // Using 'using' for template types
    Vec<int> numbers = {1, 2, 3, 4, 5};  // 'Vec<int>' is an alias for 'vector<int>'
    cout << "Vector elements using 'using' syntax: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Using 'typedef' for template types (before C++11)
    TypeAlias<int>::Vec numVec = {10, 20, 30};  // 'Vec<int>' is an alias for 'vector<int>'
    cout << "Vector elements using 'typedef' for template: ";
    for (int num : numVec) {
        cout << num << " ";
    }
    cout << endl;

    // Using smart pointers with custom deleters (demonstrating with unique_ptr)
    unique_ptr<int, void(*)(int*)> smartPtr(new int(100), [](int* ptr) {
        cout << "Custom deleter deleting value: " << *ptr << endl;
        delete ptr;
    });
    cout << "Smart pointer value: " << *smartPtr << endl;

    return 0;
}
