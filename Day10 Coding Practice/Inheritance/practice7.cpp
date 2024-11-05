
/// ( Private inheritance ) Example 2

#include <iostream>
using namespace std;

class Book {
public:
    void read() {
        cout << "Reading the book." << endl;
    }
protected:
    void bookmark() {
        cout << "Bookmarking the page." << endl;
    }
};

class EBook : private Book { // Private Inheritance
public:
    void useEBook() {
        read();      // Accessible
        bookmark();  // Accessible
        cout << "Using the eBook." << endl;
    }
};

int main() {
    EBook ebook;
    ebook.useEBook(); 

    // ebook.read();    //  Not accessible
    // ebook.bookmark(); // Not accessible

    return 0;
}
