#include <iostream>
#include <unordered_set>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) : data(data), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    // Insert data into the sorted linked list, avoiding duplicates
    void insert(int data) {
        if (!head || data < head->data) {
            Node* newNode = new Node(data);
            newNode->next = head;
            head = newNode;
        } else if (data > head->data) {
            Node* current = head;
            while (current->next && data > current->next->data) {
                current = current->next;
            }
            if (!current->next || data < current->next->data) {
                Node* newNode = new Node(data);
                newNode->next = current->next;
                current->next = newNode;
            }
        }
    }

    // Print the sorted linked list
    void print() {
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    int n, newData;
    cin >> n;

    LinkedList linkedList;

    // Read the initial data points
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        linkedList.insert(data);
    }

    cin >> newData;

    cout << "Original data points: ";
    linkedList.print();

    // Insert the new data point into the sorted linked list
    linkedList.insert(newData);

    cout << "Updated data points: ";
    linkedList.print();

    return 0;
}
