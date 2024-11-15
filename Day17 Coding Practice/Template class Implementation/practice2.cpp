// Doubly Linked list implementation in templates class


#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
    T data;       
    Node* next;   
    Node* prev;  

    Node(T value){
        data = value ; 
        next = nullptr ; 
        prev = nullptr ; 
    }
};

template <typename T>
void insertAtFront(Node<T>*& head, Node<T>*& tail, T value) {
    Node<T>* temp = new Node<T>(value);
    if (head == nullptr) { 
        head = tail = temp;
    } else {
        temp->next = head;   // Link the new node to the current head
        head->prev = temp;   // Set the previous pointer of the current head to the new node
        head = temp;         // Update head to the new node
    }
}

template <typename T>
void insertAtEnd(Node<T>*& head, Node<T>*& tail, T value) {
    Node<T>* temp = new Node<T>(value);
    if (tail == nullptr) {  // If list is empty
        head = tail = temp;
    } else {
        temp->prev = tail;   // Link the new node to the current tail
        tail->next = temp;   // Set the next pointer of the current tail to the new node
        tail = temp;         // Update tail to the new node
    }
}

// Function to insert a node at a specific position
template <typename T>
void insertAtPosition(Node<T>*& head, Node<T>*& tail, T value, int position) {
    if (position < 1) {
        cout << "Invalid position!" << endl;
        return;
    }
    if (position == 1) {
        insertAtFront(head, tail, value);
        return;
    }
    Node<T>* curr = head;
    int currentPos = 1;
    while (curr != nullptr && currentPos < position - 1) {
        curr = curr->next;
        currentPos++;
    }
    if (curr == nullptr) {
        cout << "Position out of range!" << endl;
        return;
    }
    Node<T>* temp = new Node<T>(value);
    temp->next = curr->next;
    temp->prev = curr;
    if (curr->next != nullptr) {
        curr->next->prev = temp;  // Update the previous pointer of the next node if it exists
    }
    curr->next = temp;  // Link the current node to the new node
    if (temp->next == nullptr) {  // If the node is inserted at the end
        tail = temp;  // Update the tail
    }
}

template <typename T>
void deleteFromFront(Node<T>*& head, Node<T>*& tail) {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }
    Node<T>* temp = head;
    if (head == tail) {  // If there is only one node
        head = tail = nullptr;
    } else {
        head = head->next;   // Move head to the next node
        head->prev = nullptr;  // Set the new head's prev pointer to nullptr
    }
    delete temp;  // Delete the old head node
}

// Function to delete a node from the end
template <typename T>
void deleteFromEnd(Node<T>*& head, Node<T>*& tail) {
    if (tail == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }
    Node<T>* temp = tail;
    if (head == tail) {  // If there is only one node
        head = tail = nullptr;
    } else {
        tail = tail->prev;  // Move tail to the previous node
        tail->next = nullptr;  // Set the new tail's next pointer to nullptr
    }
    delete temp;  // Delete the old tail node
}

// Function to delete a node at a specific position
template <typename T>
void deleteFromPosition(Node<T>*& head, Node<T>*& tail, int position) {
    if (position < 1) {
        cout << "Invalid position!" << endl;
        return;
    }
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }
    if (position == 1) {
        deleteFromFront(head, tail);
        return;
    }
    Node<T>* curr = head;
    int currentPos = 1;
    while (curr != nullptr && currentPos < position) {
        curr = curr->next;
        currentPos++;
    }
    if (curr == nullptr) {
        cout << "Position out of range!" << endl;
        return;
    }
    if (curr->prev != nullptr) {
        curr->prev->next = curr->next;  // Link the previous node to the next node
    }
    if (curr->next != nullptr) {
        curr->next->prev = curr->prev;  // Link the next node to the previous node
    }
    if (curr == tail) {
        tail = curr->prev;  // Update the tail if the node was the last node
    }
    delete curr;  // Delete the node
}

// Function to search for a node in the list
template <typename T>
bool search(Node<T>* head, T value) {
    Node<T>* curr = head;
    while (curr != nullptr) {
        if (curr->data == value) {
            return true;
        }
        curr = curr->next;
    }
    return false;
}

// Function to display the doubly linked list from head to tail
template <typename T>
void display(Node<T>* head) {
    if (head == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }
    Node<T>* curr = head;
    while (curr != nullptr) {
        cout << curr->data << " <-> ";
        curr = curr->next;
    }
    cout << "NULL" << endl;
}

// Function to display the doubly linked list from tail to head
template <typename T>
void displayReverse(Node<T>* tail) {
    if (tail == nullptr) {
        cout << "List is empty!" << endl;
        return;
    }
    Node<T>* curr = tail;
    while (curr != nullptr) {
        cout << curr->data << " <-> ";
        curr = curr->prev;
    }
    cout << "NULL" << endl;
}

int main() {
    Node<int>* head = nullptr;
    Node<int>* tail = nullptr;

    // Insert elements at the front
    insertAtFront(head, tail, 10);
    insertAtFront(head, tail, 20);
    insertAtFront(head, tail, 30);

    // Insert elements at the end
    insertAtEnd(head, tail, 40);
    insertAtEnd(head, tail, 50);

    // Insert at a specific position
    insertAtPosition(head, tail, 60, 3);

    cout << "Doubly Linked List (Forward): ";
    display(head);

    cout << "Doubly Linked List (Reverse): ";
    displayReverse(tail);

    cout << "Is 40 in the list? " << (search(head, 40) ? "Yes" : "No") << endl;
    cout << "Is 100 in the list? " << (search(head, 100) ? "Yes" : "No") << endl;

    deleteFromFront(head, tail);
    cout << "After deleting from the front: ";
    display(head);

    // Delete from the end
    deleteFromEnd(head, tail);
    cout << "After deleting from the end: ";
    display(head);

    // Delete from a specific position
    deleteFromPosition(head, tail, 2);
    cout << "After deleting from position 2: ";
    display(head);

    return 0;
}
