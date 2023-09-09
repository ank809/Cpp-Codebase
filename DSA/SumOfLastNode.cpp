#include <iostream>

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

    void append(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }
};

int sumLastMNodes(LinkedList& linkedList, int m) {
    if (!linkedList.head) {
        return 0;
    }

    int length = 0;
    Node* current = linkedList.head;
    
    while (current) {
        length++;
        current = current->next;
    }

    if (m >= length) {
        current = linkedList.head;
    } else {
        current = linkedList.head;
        for (int i = 0; i < length - m; i++) {
            current = current->next;
        }
    }

    int total = 0;
    while (current) {
        total += current->data;
        current = current->next;
    }

    return total;
}

int main() {
    int n, m;
    cin >> n;
    LinkedList linkedList;
    
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        linkedList.append(data);
    }

    cin >> m;
    int result = sumLastMNodes(linkedList, m);
    cout << result << endl;

    return 0;
}
