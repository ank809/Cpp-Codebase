#include <iostream>

using namespace std;

// Node structure for linked list
struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    // Function to append a node at the beginning of the linked list
    void appendLeft(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Function to append a node at the end of the linked list
    void appendRight(int value) {
        Node* newNode = new Node(value);

        if (!head) {
            head = newNode;
            return;
        }

        Node* current = head;
        while (current->next) {
            current = current->next;
        }

        current->next = newNode;
    }

    // Function to print the contents of the linked list
    void printLinkedList() {
        cout << "Linked List: ";
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList linkedList;

    while (true) {
        int choice;
        cin >> choice;

        if (choice == 1 || choice == 2) {
            int value;
            cin >> value;

            if (choice == 1) {
                linkedList.appendLeft(value);
            } else {
                linkedList.appendRight(value);
            }
        } else if (choice == 3) {
            linkedList.printLinkedList();
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}
