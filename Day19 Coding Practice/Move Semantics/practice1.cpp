// Move Semantics in string 

#include <iostream>
#include <cstring>
using namespace std ; 

class MyString {
public:
    // Default constructor
    MyString(const char* str) {
       cout << "Constructor"<<endl;
        size_ = strlen(str);
        data_ = new char[size_ + 1];
        strcpy(data_, str);
    }

    // Move constructor
    MyString(MyString&& other) {
        cout << "Move Constructor"<<endl;
        size_ = other.size_;
        data_ = other.data_;
        other.size_ = 0;
        other.data_ = nullptr;
    }

    // Move assignment operator
    MyString& operator=(MyString&& other)  {
        cout << "Move Assignment Operator"<<endl;
        if (this != &other) {
            delete[] data_; 

            size_ = other.size_;
            data_ = other.data_;

            other.size_ = 0;
            other.data_ = nullptr;
        }
        return *this;
    }

    // Destructor
    ~MyString() {
        std::cout << "Destructor\n";
        delete[] data_;
    }

    // Display function
    void display() {
      cout << data_ << endl;
    }

private:
    char* data_;
    size_t size_;
};

int main() {
    MyString str1("Hello, World!");
    MyString str2 = move(str1); 
    str2.display(); 

    MyString str3("Temp String");
    str3 = move(str2);  
    str3.display();       
    str2.display(); // Displays nothing, str2 is now in a valid but empty state

    return 0;
}


