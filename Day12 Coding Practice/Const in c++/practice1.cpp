// Const Member function 

#include<iostream>
using namespace std ; 

class MyClass {
public:
    int value;

    MyClass(int v) : value(v) {}


    int getValue() const {
        value = 20 ; 
        return value;
    }

    void printValue() const {
        cout << "Value: " << value << endl;
    }

    void setValue(int v) {
        value = v; 
    }
};

int main(){
    MyClass my(30) ; 
    my.getValue(); // this will not work , its constant( Read only )
    my.printValue();
    my.setValue(60) ; // allowed 
    my.printValue();
}