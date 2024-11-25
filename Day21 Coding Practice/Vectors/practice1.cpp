// Vectors methods in STL 

#include <iostream>
#include <vector>
using namespace std ; 

int main() {
    vector<int> vec;

    // Inserting elements at the end using push_back
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.pop_back();


    // Accessing elements by index
    cout << "First element: " << vec[0] << std::endl;
    cout << "Second element: " << vec.at(1) << std::endl;

    // Size and capacity
    size_t sz = vec.size();
    cout << "Size: " << sz << endl;
    size_t cap = vec.capacity();
    cout << "Capacity: " << cap <<endl;
    
    bool isEmpty = vec.empty();
    cout<<"Checking if vector is empty: "<<isEmpty<<endl;
    
    // vec.clear();
    
    vec.resize(5);  // Resize to 5 elements
    size_t cap2 = vec.capacity();
    cout << "Capacity: " << cap2 <<endl;
    vec.pop_back();
    
    //  Requests that the vector allocate space for at least n elements. This doesn't change the size of the vector but ensures it can hold that many elements without needing to reallocate.
    // vec.reserve(100);  // Reserve space for 100 elements
    
    // vec.shrink_to_fit(); 
    size_t cap3 = vec.capacity();
    cout << "Capacity: " << cap3 <<endl;
    
    int first = vec.front();
    cout<<"First element: "<<first<<endl;
    
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    
    for( auto i : vec){
        cout<<i<<endl;
    }
    
    int last = vec.back();
    cout<<"Last element: "<<last<<endl;
    
    int val = vec.at(2);
    cout<<"Value at vector 2 is: "<<val<<endl;
    
    int val2 = vec.at(4);
    cout<<"Value at vector 4 is: "<<val2<<endl;
    
    // cout<<(vec[vec.begin() + 1] );
    
    vec.insert(vec.begin() + 2, 15);  // Insert 15 at index 1
    cout<<"Position 2: "<<vec.at(2)<<endl;
        for( auto i : vec){
        cout<<i<<endl;
    }
    
    cout<<endl<<endl;
    
    vec.erase(vec.begin() + 3);  // Erase the element at index 1
    
        for( auto i : vec){
        cout<<i<<endl;
    }
// vec.erase(vec.begin(), vec.begin() + 2);  // Erase elements from index 0 to 2

   vector<int> vec2 = {1, 2, 3};
   vec.swap(vec2);
   cout<<"Vector 1 after swapping: "<<endl;
   
        for( auto i : vec){
        cout<<i<<endl;
    }
    
   vector<int>vec3(3, 10);  // Assign 3 elements with value 10
   cout<<endl;
   cout<<"Vector 3 values: "<<endl;
         for( auto i : vec3){
        cout<<i<<endl;
    }




    return 0;
}
