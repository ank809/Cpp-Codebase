#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) : data(data), next(nullptr) {}
};

class CircularLinkedList {
public:
    Node* head;

    CircularLinkedList() : head(nullptr) {}

    void addFront(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
            head->next = head;  // Point to itself to make it circular
        } else {
            newNode->next = head->next;
            head->next = newNode;
        }
    }

    void addEnd(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
            head->next = head;  // Point to itself to make it circular
        } else {
            newNode->next = head->next;
            head->next = newNode;
            head = newNode;
        }
    }

    void displayScores() {
        if (!head) {
            cout << "List is empty" << endl;
            return;
        }

        Node* current = head->next;
        int count = 0;

        do {
            count++;
            current = current->next;
        } while (current != head->next);

        cout << "Number of nodes in the CLL is " << count << endl;

        current = head->next;
        do {
            cout << current->data << " ";
            current = current->next;
        } while (current != head->next);

        cout << endl;
    }
};

int main() {
    int n, m;
    cin >> n;

    CircularLinkedList playerScores;

    for (int i = 0; i < n; i++) {
        int score;
        cin >> score;
        playerScores.addFront(score);
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        int score;
        cin >> score;
        playerScores.addEnd(score);
    }

    playerScores.displayScores();

    return 0;
}
