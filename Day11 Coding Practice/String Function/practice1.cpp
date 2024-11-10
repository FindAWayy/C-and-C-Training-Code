/// String Class 

#include <bits/stdc++.h>
using namespace std;

class MyString {
    char* p;

public:
    MyString() {
        p = nullptr;
        cout << "Inside default constructor" << endl;
    }

    MyString(const char* arg) {
        p = new char[strlen(arg) + 1];  // +1 for null terminator
        cout << "Inside parameterized constructor" << endl;
        myStrCopy(p, arg);  // Using custom strcpy
    }

    MyString(const MyString& obj) {
        this->p = new char[strlen(obj.p) + 1];
        myStrCopy(p, obj.p);  // Using custom strcpy
        cout << "Inside copy constructor" << endl;
    }

    MyString& operator=(const MyString& obj) {
        if (this != &obj) {
            delete[] p;
            p = new char[strlen(obj.p) + 1];
            myStrCopy(p, obj.p);  // Using custom strcpy
        }
        cout << "Inside assignment operator" << endl;
        return *this;
    }

    ~MyString() {
        delete[] p;
    }

    int lengthOfString() const {
        if (p == nullptr) {
            return 0;
        }
        return strlen(p);
    }

    int numberOfSpecialCharacters() const {
        if (p == nullptr) {
            return 0;
        }
        int count = 0;
        for (int i = 0; i < lengthOfString(); i++) {
            if (!isalnum(p[i])) {
                count++;
            }
        }
        return count;
    }

    char* reverseString() const {
        if (p == nullptr) {
            return nullptr;
        }
        int len = lengthOfString();
        char* reversedStr = new char[len + 1];
        for (int i = 0; i < len; i++) {
            reversedStr[i] = p[len - i - 1];
        }
        reversedStr[len] = '\0';
        return reversedStr;
    }

    void toUpperCase() {
        if (p == nullptr) {
            return;
        }
        for (int i = 0; i < lengthOfString(); i++) {
            p[i] = toupper(p[i]);
        }
    }

    void toLowerCase() {
        if (p == nullptr) {
            return;
        }
        for (int i = 0; i < lengthOfString(); i++) {
            p[i] = tolower(p[i]);
        }
    }

    const char* getString() const {
        return p;
    }

    bool startsWith(const char* prefix) const {
        if (p == nullptr || prefix == nullptr) return false;
        int lenPrefix = strlen(prefix);
        if (lenPrefix > lengthOfString()) return false;
        return myStrCompare(p, prefix) == 0;  // Using custom strcmp
    }

    bool endsWith(const char* suffix) const {
        if (p == nullptr || suffix == nullptr) return false;
        int lenSuffix = strlen(suffix);
        int lenStr = lengthOfString();
        if (lenSuffix > lenStr) return false;
        return myStrCompare(p + lenStr - lenSuffix, suffix) == 0;  // Using custom strcmp
    }

    int toInt() const {
        if (p == nullptr) return 0;
        return atoi(p); // Converts string to int
    }

    float toFloat() const {
        if (p == nullptr) return 0.0f;
        return atof(p); // Converts string to float
    }

    bool isDigit() const {
        if (p == nullptr) return false;
        for (int i = 0; i < lengthOfString(); i++) {
            if (!isdigit(p[i])) {
                return false;
            }
        }
        return true;
    }

    bool isAlpha() const {
        if (p == nullptr) return false;
        for (int i = 0; i < lengthOfString(); i++) {
            if (!isalpha(p[i])) {
                return false;
            }
        }
        return true;
    }

    void removeSpaces() {
        if (p == nullptr) return;
        int len = lengthOfString();
        int newIndex = 0;
        char* temp = new char[len + 1]; // Temporary string to hold the result

        for (int i = 0; i < len; i++) {
            if (p[i] != ' ') {
                temp[newIndex++] = p[i];
            }
        }
        temp[newIndex] = '\0';
        delete[] p;  // Delete old string
        p = temp;    // Assign new string without spaces
    }

    // Custom strcpy implementation
    void myStrCopy(char* dest, const char* src) const {
        while (*src != '\0') {
            *dest = *src;  // Copy the character
            dest++;        // Move to the next position in destination
            src++;         // Move to the next position in source
        }
        *dest = '\0';  // Null-terminate the destination string
    }

    // Custom strcmp implementation
    int myStrCompare(const char* str1, const char* str2) const {
        while (*str1 != '\0' && *str2 != '\0') {
            if (*str1 != *str2) {
                return *str1 - *str2;  // Return difference of first non-matching character
            }
            str1++;
            str2++;
        }
        return *str1 - *str2;  // If strings are of different lengths, return the difference
    }
};

int main() {
    MyString str1("Hello World!");
    MyString str2("12345");
    MyString str3(str2);
    MyString str4("oalngoal#@ngf123");
   
    str1 = str2;

    cout << "Length of string is : " << str1.lengthOfString() << endl;
    cout << "Number of special characters in string : " << str4.numberOfSpecialCharacters() << endl;

    char* reversed = str1.reverseString();
    cout << "Reversed string : " << reversed << endl;
    delete[] reversed;

    str2.toUpperCase();
    cout << "Uppercase string : " << str2.getString() << endl;

    str2.toLowerCase();
    cout << "Lowercase string : " << str2.getString() << endl;

    str1 = str2 = str3 = str4;

    cout << "Starts with 'Hel': " << (str1.startsWith("Hel") ? "Yes" : "No") << endl;
    cout << "Ends with 'World!': " << (str1.endsWith("World!") ? "Yes" : "No") << endl;

    cout << "String '12345' to int: " << str2.toInt() << endl;

    MyString str5("123.456");
    cout << "String '123.456' to float: " << str5.toFloat() << endl;

    MyString str6("12345");
    cout << "Is '12345' digits only? " << (str6.isDigit() ? "Yes" : "No") << endl;

    cout << "Is 'hello' alphabetic? " << (str3.isAlpha() ? "Yes" : "No") << endl;

    MyString str7(" H e l l o  W o r l d! ");
