//  Has a Relationship ( Example 2 - High Level  )

#include <iostream>
#include <vector>
using namespace std;

// Book class (represents a book in the library)
class Book {
private:
    string title;
    string author;
    
public:
    Book(string title, string author) : title(title), author(author) {}
    
    void displayInfo() {
        cout << "Book Title: " << title << ", Author: " << author << endl;
    }

};

// Staff class (represents a staff member in the library)
class Staff {
    
private:
    string name;
    string role;
    
public:
    Staff(string name, string role)  {
        this->name = name ; 
        this->role = role ; 
    }
    
    void displayInfo() {
        cout << "Staff Name: " << name << ", Role: " << role << endl;
    }
};

// Library class (represents a library with many books and staff)
class Library {
private:
    string libraryName;
    vector<Book> books;        // Library has many Books
    vector<Staff> staffMembers; // Library has many Staff
    
public:
    // Constructor to add books and staff to the library
    Library(string name) : libraryName(name) {}
    
    
    void addBook(Book book) {
        books.push_back(book);
    }

    void addStaff(Staff staff) {
        staffMembers.push_back(staff);
    }

    void displayLibraryInfo() {
        cout << "Library Name: " << libraryName << endl;

        cout << "\nBooks in the library:" << endl;
        for (auto& book : books) {
            book.displayInfo();
        }

        cout << "\nStaff Members:" << endl;
        for (auto& staff : staffMembers) {
            staff.displayInfo();
        }
    }


};

int main() {
    // Create library, books, and staff
    Library library("City Central Library");

    // Adding books
    library.addBook(Book("1984", "George Orwell"));
    library.addBook(Book("To Kill a Mockingbird", "Harper Lee"));

    // Adding staff
    library.addStaff(Staff("Ram", "Librarian"));
    library.addStaff(Staff("Shyam", "Assistant Librarian"));

    // Displaying library information
    library.displayLibraryInfo();

    return 0;
}


 