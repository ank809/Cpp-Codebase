#include<iostream>
using namespace std;

class Node {
    public:
    int val;
    Node* left;
    Node* right;

    Node(int value){
        this->val= value;
        left=NULL;
        right=NULL;
    }
    Node(){}

    Node* root=NULL;
     void insert(int val){
        root= insert(root, val);
     }

     Node* insert(Node* node, int val){
        if(node==NULL){
            node= new Node(val);
            return node;
        }
        if(val<node->val){
            node->left= insert(node->left, val);
        }
        if(val>node->val){
            node->right= insert(node->right, val);
        }
        return node;
     }

    void display(){
        display(root, "This is root node");
    }
     void display(Node* node, string str){
        if(node==NULL){
            return;
        }
        cout<<str<<" "<<node->val<<endl;
        display(node->left, "This is left child ");
        display(node->right, "This is right child ");
     }
    
};
int main(){
    Node* node= new Node();
    node->insert(19);
    node->insert(10);
    node->insert(58);
    node->insert(1);
    node->insert(98);
    node->display();
    }