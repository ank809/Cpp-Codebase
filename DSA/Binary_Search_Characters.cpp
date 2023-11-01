#include<iostream>
using namespace std;
#include <iostream>
using namespace std;

class Node {
public:
    char val;
    Node* left;
    Node* right;
    Node(){};
    Node(char value) {
        this->val = value;
        this->left = NULL;
        this->right = NULL;
    }
    Node* root = NULL;

void insert(char value){
    root= insert(root, value);
}
Node* insert(Node* root, char value) {
    if (root == NULL) {
        return new Node(value);
    }
    if(value<node->val){
        root->left = insert(root->left, value);
    }
    if(value>node->val){
        root->right = insert(root->right, value);
    }
    return root;
}
void display(){
    display(root);
}
void display(Node* node) {
    if (node == NULL) {
        return;
    }
    display(node->left);
    display(node->right);
    cout << node->val << " ";
}
};

int main() {
    Node* node= new Node();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char element;
        cin >> element;
        node->insert(element);
      
    }
    node->display();
    return 0;
}
