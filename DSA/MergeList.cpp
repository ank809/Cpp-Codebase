#include <iostream>
#include <sstream>

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

    void print() {
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

LinkedList mergeLists(LinkedList list1, LinkedList list2) {
    LinkedList mergedList;
    Node* current1 = list1.head;
    Node* current2 = list2.head;

    while (current1 || current2) {
        if (current1) {
            mergedList.append(current1->data);
            current1 = current1->next;
        }

        if (current2) {
            mergedList.append(current2->data);
            current2 = current2->next;
        }
    }

    return mergedList;
}

int main() {
    int n, m;
    cin >> n;
    LinkedList list1;

    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        list1.append(data);
    }

    cin >> m;
    LinkedList list2;

    for (int i = 0; i < m; i++) {
        int data;
        cin >> data;
        list2.append(data);
    }

    cout << "List 1: ";
    list1.print();

    cout << "List 2: ";
    list2.print();

    LinkedList mergedList = mergeLists(list1, list2);

    cout << "Merged List: ";
    mergedList.print();

    return 0;
}
