#include<iostream>
using namespace std;
class Node{
    public:
    char data;
    Node* left;
    Node* right;
    Node* root= NULL;
    Node(){};
    Node(char val){
        this->data=val;
        left=NULL;
        right=NULL;
    }

    void insert(char val){
        root=insert(root, val);
    }
    Node* insert(Node* node, char val){
        if(node==NULL){
            node= new Node(val);
            return node;
        }
        if(val<node->data){
            node->left= insert(node->left, val);
        }
        else{
            node->right= insert(node->right, val);
        }
        return node;
    }

    bool search(char val){
        search (root, val);
    }
    bool search(Node* root, char val){
        if(root==NULL){
            return false;
        }
        if(val==root->data){
            return true;
        }
        if(val<root->data){
            return search(root->left, val);
        }
        else{
            return search(root->right, val);
        }
        return false;
    }

    void display(){
        display(root);
    }
    void display(Node* node){
        if(node==NULL){
            return;
        }
        display(node->left);
        cout<<node->data<<" ";
        display(node->right);
         
    }
    
};
int main(){
    Node* node= new Node();
    node->insert('x');
    node->insert('z');
    node->insert('p');
    node->insert('d');
    node->display();
    cout<<node->search('y');
}