#include <iostream>
using namespace std;
class Node
{
public:
    Node *next;
    Node *head;
    int data;

    Node()
    {
        head = NULL;
    }
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }

    void insertAtFirst(int val)
    {
        Node *node = new Node(val);
        node->next = head;
        head = node;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    void deleteval(int val){
        Node *temp = head;

        // Check if the head itself contains the value to be deleted
        while (temp != NULL && temp->data == val)
        {
            head = temp->next;
            delete temp;
            temp = head;
        }
        // Traverse the list to find and delete the value
        while (temp != NULL && temp->next != NULL)
        {
            if (temp->next->data == val)
            {
                Node *tempNode = temp->next;
                temp->next = tempNode->next;
                delete tempNode;
            }
            else
            {
                temp = temp->next;
            }
        }
    }
};
int main()
{
    Node *node = new Node();
    node->insertAtFirst(12);
    node->insertAtFirst(1);
    node->insertAtFirst(90);
    node->insertAtFirst(12);
    node->display();
    cout << endl;
    node->deleteval(12);
    node->display();
}