// Functors ( Example 2 )

#include<iostream>
using namespace std ;

class Multiplier {
private:
    int factor;
public:
    Multiplier(int f) : factor(f) {}
    int operator()(int num) {
        return num * factor;
    }
};

int main(){
Multiplier times2(2);
cout << times2(5) << endl;
}

