// List ( Example 3 ) 

#include <iostream>
#include <list>
using namespace std;

int main() {

    list<int> list1 = {1, 2, 3, 4};
    list<int> list2 = {5, 6, 7, 8};

    cout << "Before swap:\n";
    cout << "List 1: ";
    for (int val : list1) {
        cout << val << " ";
    }
    cout << "\nList 2: ";
    for (int val : list2) {
        cout << val << " ";
    }
    cout << endl;


    list1.swap(list2);

    cout << "After swap:\n";
    cout << "List 1: ";
    for (int val : list1) {
        cout << val << " ";
    }
    cout << "\nList 2: ";
    for (int val : list2) {
        cout << val << " ";
    }
    cout << endl;

#include <iostream>
#include <list>
using namespace std;

int main() {
    // Initialize two sorted lists
    list<int> list1 = {1, 3, 5, 7};
    list<int> list2 = {2, 4, 6, 8};

    cout << "Before merge:\n";
    cout << "List 1: ";
    for (int val : list1) {
        cout << val << " ";
    }
    cout << "\nList 2: ";
    for (int val : list2) {
        cout << val << " ";
    }
    cout << endl;

    // Merge list2 into list1
    list1.merge(list2);

    cout << "After merge:\n";
    cout << "List 1: ";
    for (int val : list1) {
        cout << val << " ";
    }
    cout << "\nList 2 (should be empty): ";
    for (int val : list2) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}




    return 0;
}
