// Comma Operator 

#include<iostream>
using namespace std ; 

int main(){

  int a = 1, b = 2, c = 20;
  int a = 1;
  int b = 2;
  int c = 0;
  c = (a += 1, b += 2, 25);

  cout << "value of a is " << a <<endl;
  cout << "value of b is " << b <<endl;
  cout << "value of c is " << c <<endl;

}