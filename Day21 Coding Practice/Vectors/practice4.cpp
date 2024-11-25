// Vector ( Example 4 ) 


#include<iostream>
#include<vector>
using namespace std ; 

int main(){

vector<int> vec = {1, 2, 3, 4, 5};
vec.reserve(100);  // Reserve memory for 100 elements
cout << "Capacity before shrink_to_fit: " << vec.capacity() << endl;

vec.shrink_to_fit();
cout << "Capacity after shrink_to_fit: " << vec.capacity() << endl;

// int* ptr = vec.data() + 2 ;  // Valid
int* ptr = vec.data();  // Points to the first element 
// cout << "First element using data(): " << (*ptr) + 1 << endl; // valid   ;
cout << "First element using data(): " << *ptr << endl; 

// Access all elements using the pointer
cout << "Accessing elements using data(): ";
for (size_t i = 0; i < vec.size(); ++i) {
    cout << *(ptr + i) << " ";  // Outputs: 1 2 3 4 5
}
cout << endl;

}
