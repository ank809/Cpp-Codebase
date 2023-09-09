#include <iostream>
#include <string>

using namespace std;

// Node structure for linked list
struct Node {
    string data;
    Node* next;
    Node(const string& value) : data(value), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    // Function to insert a new node at the specified position
    void insertNode(const string& data, int position) {
        Node* newNode = new Node(data);

        if (position == 1 || !head) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* current = head;
            int count = 1;

            while (current->next && count < position - 1) {
                current = current->next;
                count++;
            }

            newNode->next = current->next;
            current->next = newNode;
        }
    }

    // Function to print the linked list
    void printLinkedList() {
        Node* current = head;

        while (current) {
            cout << current->data << " ";
            current = current->next;
        }

        cout << endl;
    }
};

int main() {
    int n;
    cin >> n;

    LinkedList linkedList;

    for (int i = 0; i < n; i++) {
        string value;
        cin >> value;
        linkedList.insertNode(value, i + 1);  // Insert at the end initially
    }

    string data;
    int position;
    cin >> data >> position;

    cout << "Current Linked List:" << endl;
    linkedList.printLinkedList();
    
    linkedList.insertNode(data, position);

    cout << "Updated Linked List:" << endl;
    linkedList.printLinkedList();

    return 0;
}
