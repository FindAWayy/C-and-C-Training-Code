// Pointers with 2d array  


#include <iostream>
using namespace std ; 

int main() {
  int a[2][2] = { {1,2},{3,4} };
  int* p = a[0];
  cout<<p<<endl;
  cout<<*p<<endl;
  p++; 
  cout<<*p<<endl;
  p++; 
  cout<<*p<<endl;
  p += 8;
  cout << *p;
  cout<<"//////"<<endl;
  
  int a2[3][3] = { {1, 2, 3}, { 11, 22, 33 }, { 17, 28, 39 } };
    int* p1 = a2[2];
    cout<<(*(p1+1)+2)<<endl;
  
  cout << a2[2][1] << endl;;
  cout << *(*(a2 + 2) + 1) << endl;
  int (*ptr)[3] = a2;

  cout << &a2[0][0] << endl;
  cout << &a2[0][1] << endl;
  cout << &a2[0][2] << endl;
  cout << &a2[1][0] << endl;
  cout << &a2[1][1] << endl;
  cout << &a2[1][2] << endl;
  cout << &a2[2][0] << endl;
  cout << &a2[2][1] << endl;
  cout << &a2[2][2] << endl;

  //cout << a2 << endl;
  //cout << (a2 + 2) << endl;
  //cout << *(a2 + 2) << endl;
  //cout << *(a2 + 2) + 1 << endl;
  //cout << *(*(a2 + 2)+1) << endl;

  p1++;
  cout<<*p1<<endl;

    return 0;
} 


////////Program 2 /////////

#include <iostream>
using namespace std;

int main() {
    int rows = 3, cols = 4;
    int** array = new int*[rows]; // Allocate an array of pointers

    for (int i = 0; i < rows; ++i) {
        array[i] = new int[cols];
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            array[i][j] = i * cols + j; 
        }
    }

    cout << "\n2D Array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < rows; ++i) {
        delete[] array[i]; // Delete each row
    }
    delete[] array; // Delete the array of pointers

    return 0;
}
