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
}