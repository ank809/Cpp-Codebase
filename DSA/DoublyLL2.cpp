#include <iostream>
using namespace std;
class Node
{
public:
    Node *next;
    int data;
    Node *prev;
    Node *head;
    Node()
    {
        head = NULL;
    }
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
        this->prev = NULL;
    }

    void insertFirst(int val)
    {
        Node *node = new Node(val);
        node->next = head;
        if (head != NULL)
        {
            head->prev = node;
        }
        head = node;
    }

    void insertAfter(int after, int val)
    {
        Node *temp = head;
        bool isthere = false;
        while (temp != NULL)
        {
            if (temp->data == after)
            {
                isthere = true;
                Node *node = new Node(val);
                node->next = temp->next;
                temp->next = node;
                node->prev = temp;
                if (node->next != NULL)
                {
                    node->next->prev = node;
                }
            }
            temp = temp->next;
        }
        if (isthere == false)
        {
            cout << "Value doesn't exist";
        }
    }

    void deleteNode(int val)
    {
        Node *temp = head;
        if (head != NULL && temp->data == val)
        {
            head = head->next;
        }
        bool isthere = false;
        while (temp != NULL)
        {
            if (temp->next != NULL)
            {
                if (temp->next->data == val)
                {
                    isthere = true;
                    temp->next = temp->next->next;
                    temp->next->prev = temp;
                }
            }
            temp = temp->next;
        }
        if (!isthere)
        {
            cout << "Node doesn't exist";
        }
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
};

int main()
{
    Node *node = new Node();
    node->insertFirst(90);
    node->insertFirst(9);
    node->insertFirst(79);
    node->insertFirst(11);
    node->display();
    cout << endl;
    node->insertAfter(9, 6);
    node->display();
    node->deleteNode(9);
    cout<<endl;
    node->display();
}