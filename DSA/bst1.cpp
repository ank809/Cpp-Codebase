#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(){}
    Node(int data){
        this->val=data;
        left=NULL;
        right=NULL;
    }
    Node* root=NULL;
    void insert(int data){
        root= insert(root, data);
    }
    Node* insert(Node* node, int data){
        if(node==NULL){
            node= new Node(data);
            return node;
        }
        if(data<node->val){
            node->left= insert(node->left, data);
        }
        if(data>node->val){
            node->right= insert(node->right, data);
        }
        return node;
    }

    void display(){
        inOrder(root, "Root node: ");
    }
    void preOrder(Node* node, string s){
        if(node==NULL){
            return;
        }
        cout<<s<<" "<<node->val<<endl;
        preOrder(node->left, "This is left child of"+to_string(node->val));
        preOrder(node->right, "This is right child"+to_string(node->val));
    }

    void inOrder(Node* node, string s){
        if(node==NULL){
            return;
        }
        inOrder(node->left, "This is  left child of"+ to_string(node->val));
        cout<<s<< " " << node->val<<endl;
        inOrder(node->right, "This is  right child of"+ to_string(node->val));
    }

    void postOrder(Node* node, string s){
         if(node==NULL){
            return;
        }
        postOrder(node->left, "This is left child of"+to_string(node->val));
        postOrder(node->right, "This is right child of"+to_string(node->val));
        cout<<s<< " " << node->val<<endl;
    }
};

int main(){
    Node* node= new Node();
    node->insert(12);
    node->insert(9);
    node->insert(18);
    node->insert(90);
    node->insert(96);
    node->display();
}