/// with references 

#include <iostream>
#include <string>
using namespace std ; 

class Person {
private:
    string& name;

public:
    Person(string& n) : name(n) { }

    void display() {
        cout << "Person's name is: " << name <<endl;
    }

    void changeName(const string& newName) {
        name = newName;
    }
};

int main() {
    string myName = "Hardik";
    Person p(myName);

    p.display();

    p.changeName("Kanishka");
    p.display();

   cout << "The original name is now: " << myName <<endl;
    return 0;
}

//// Example 2 

#include <iostream>
using namespace std ;

class Statistics {
private:
    int& number;      
    int square;       

public:
    Statistics(int& num) 
        : number(num), square(num * num) {  }

    void display() {
        cout << "Number: " << number << ", Square: " << square << endl;
    }
};

int main() {
    int value = 5;                        
    Statistics stats(value);    

    stats.display(); 

    value = 10;                 
    stats.display();                 
    return 0;
}
