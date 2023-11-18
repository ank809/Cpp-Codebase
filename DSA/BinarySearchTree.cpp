#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node* root= NULL;
    Node(){};
    Node(int val){
        this->data=val;
        left=NULL;
        right=NULL;
    }

    void insert(int val){
        root=insert(root, val);
    }
    Node* insert(Node* node, int val){
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
    node->insert(12);
    node->insert(7);
    node->insert(5);
    node->insert(45);
    node->display();
}