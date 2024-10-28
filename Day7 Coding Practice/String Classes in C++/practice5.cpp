///// Copy in Strings 

/// Method 1 

#include <iostream>
#include <string>
using namespace std;

int main() {
    string original = "Hello, World!";
    string copy = original;

    cout << "Original: " << original << endl; 
    cout << "Copy: " << copy << endl;

    return 0;
}

//// Method 2 

#include <iostream>
#include <string>
using namespace std;

int main() {
    string original = "Hello, World!";
    string copy;
    copy.assign(original);

    cout << "Original: " << original << endl;
    cout << "Copy: " << copy << endl; 

    return 0;
}


///// Method 3 

#include <iostream>
#include <string>
using namespace std;

int main() {
    string original = "Hello, World!";
    string copy(original); // Using copy constructor

    cout << "Original: " << original << endl; // Outputs: Hello, World!
    cout << "Copy: " << copy << endl;           // Outputs: Hello, World!

    return 0;
}


//// Method 4 

#include <iostream>
#include <string>
using namespace std;

int main() {
    string original = "Hello, World!";
    string copy = original.substr(0, 5); // Copy first 5 characters

    cout << "Original: " << original << endl;
    cout << "Copy: " << copy << endl;           // Outputs: Hello

    return 0;
}










