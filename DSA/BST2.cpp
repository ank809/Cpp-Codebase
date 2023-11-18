#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node() {}
    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
    Node *root = NULL;
    void insert(int val)
    {
        root = insert(root, val);
    }
    Node *insert(Node *node, int val)
    {
        if (node == NULL)
        {
            node = new Node(val);
            return node;
        }
        if (node->data < val)
        {
            node->right = insert(node->right, val);
        }
        if (val < node->data)
        {
            node->left = insert(node->left, val);
        }
        return node;
    }

    bool search(int val)
    {
        bool ans = search(root, val);
        return ans;
    }

    bool search(Node *root, int val)
    {
        if(root==NULL){
            return false;
        }
        if (root->data == val)
        {
            return true;
        }
        if (val < root->data)
        {
             return search(root->left, val);
           
        }
        if (val > root->data)
        {
            return search(root->right, val);
           
        }
        return false;
    }

    void display()
    {
        displayPre(root);
    }
    void displayIN(Node *node)
    {
        if (node == NULL)
        {
            return;
        }
        // inorder
        displayIN(node->left);
        cout << node->data << " ";
        displayIN(node->right);
    }
    void displayPre(Node *node)
    {
        if (node == NULL)
        {
            return;
        }
        // postorder
        cout << node->data << " ";
        displayPre(node->left);
        displayPre(node->right);
    }
};
int main()
{
    Node *node = new Node();
    node->insert(90);
    node->insert(108);
    node->insert(69);
    node->insert(21);
    node->display();
    cout << endl;
    cout << node->search(100);
}