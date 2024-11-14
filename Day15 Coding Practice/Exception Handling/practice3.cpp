// Exception Handling( example 3 )  Using Custom Exception 

#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

//  a custom exception class for invalid age
class InvalidAgeException : public exception {
public:
    const char* what()  noexcept  {
        return "Error: Invalid age provided. Age cannot be negative.";
    }
};

// Function that takes age as input and throws an exception if the age is invalid (negative)
void setAge(int age) {
    if (age < 0) {
        throw InvalidAgeException();  // Throwing custom exception
    }
    cout << "Age is set to: " << age << endl;
}

int main() {
    try {
        int age;
        cout << "Enter age: ";
        cin >> age;
        
        setAge(age);
    }
    catch ( InvalidAgeException& e) {
        cout << "Caught custom exception: " << e.what() << endl;
    } catch (const exception& e) {
        cout << "Caught a general exception: " << e.what() << endl;
    }

    return 0;
}



