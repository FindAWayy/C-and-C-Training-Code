// Linked list implementation in templates class

#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
    T data;       
    Node* next; 

    Node(T value) {
        data = value;
        next = nullptr;
    }

     void insertAtFront(Node<T>*& head, T value) {
        Node<T>* temp = new Node<T>(value);
        temp->next = head;
        head = temp;
    }

     void insertAtEnd(Node<T>*& head, T value) {
        Node<T>* temp = new Node<T>(value);
        if (head == nullptr) {
            head = temp;
            return;
        }
        Node<T>* curr = head;
        while ( curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = temp;
    }

     void insertAtPosition(Node<T>*& head, T value, int position) {
        if (position < 1) {
            cout << "Invalid position" << endl;
            return;
        }
        Node<T>* temp = new Node<T>(value);
        if (position == 1) {
            temp->next = head;
            head = temp;
            return;
        }
        Node<T>* curr = head;
        for (int i = 1; curr != nullptr && i < position - 1; ++i) {
            curr = curr->next;
        }
        if (curr == nullptr) {
            cout << "Position out of range!" << endl;
            delete temp;
            return;
        }
        temp->next = curr->next;
        curr->next = temp;
    }
    
      void deleteFromFront(Node<T>*& head) {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        Node<T>* temp = head;
        head = head->next;
        delete temp;
    }
    
     void deleteFromEnd(Node<T>*& head) {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        Node<T>* curr = head;
        while (curr->next != nullptr && curr->next->next != nullptr) {
            curr = curr->next;
        }
        delete curr->next;
        curr->next = nullptr;
    }
    
       void deleteFromPosition(Node<T>*& head, int position) {
        if (position < 1) {
            cout << "Invalid position!" << endl;
            return;
        }
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        if (position == 1) {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node<T>* curr = head;
        for (int i = 1; curr != nullptr && i < position - 1; ++i) {
            curr = curr->next;
        }
        if (curr == nullptr || curr->next == nullptr) {
            cout << "Position out of range!" << endl;
            return;
        }
        Node<T>* delNode = curr->next;
        curr->next = curr->next->next;
        delete delNode;
      }
      
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

     void display(Node<T>* head) {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        Node<T>* curr = head;
        while (curr != nullptr) {
            cout << curr->data << " -> ";
            curr = curr->next;
        }
        cout << "NULL" << endl;
    }
    
};

 int main() {
    Node<int>* head = nullptr;
    Node<int> node(0);

    // Insert elements at the front
    node.insertAtFront(head, 10);
    node.insertAtFront(head, 20);
    node.insertAtFront(head, 30);

    // Insert elements at the end
    node.insertAtEnd(head, 40);
    node.insertAtEnd(head, 50);

    // Insert at a specific position
    node.insertAtPosition(head, 60, 3);

    cout << "Linked List: ";
    node.display(head);

    cout << "Is 40 in the list? " << (node.search(head, 40) ? "Yes" : "No") << endl;
    cout << "Is 100 in the list? " << (node.search(head, 100) ? "Yes" : "No") << endl;

    node.deleteFromFront(head);
    cout << "After deleting from the front: ";
    node.display(head);

    // Delete from the end
    node.deleteFromEnd(head);
    cout << "After deleting from the end: ";
    node.display(head);

    // Delete from a specific position
    node.deleteFromPosition(head, 2);
    cout << "After deleting from position 2: ";
    node.display(head);

    return 0;
}

