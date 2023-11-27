#include<iostream>
using namespace std;
#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    
    Node() {
        head = NULL;
        next = NULL; // Initialize 'next' pointer to NULL in the constructor
    }

    Node(int value) {
        this->val = value;
        this->next = NULL;
    }

    // Inserting element in a node
    void insert(int value) {
        Node *node = new Node(value);
        node->next = head;
        head = node; // Update head to the newly inserted node
    }
void display1()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }

private:
    Node *head; // Move head to private section to encapsulate it
};
int main(){
    int n;
    cin>>n;
    Node *node = new Node();
    for(int i=0; i<n; i++){
        int element;
        cin>>element;
        node->insert(element);
    }
    node->display1();
}