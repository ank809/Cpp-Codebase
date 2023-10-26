#include<iostream>
using namespace std;
#include<string>

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
    Node(){}
    Node* root= NULL;
    void insert(int val){
        root= insert(root, val);
    }
    Node* insert(Node* node, int val){
        if(node==NULL){
            return new Node(val);
        }
        if(val<node->data){
            node->left= insert(node->left, val);
        }
        if(val>node->data){
            node->right= insert(node->right, val);
        }
        return node;
    }

    void display(){
        // display(root, "Root node: ");
        inOrder(root, "Root node: ");
        cout<<"ENDL"<<endl;
        postOrder(root, "Root node: ");
    }
    void display(Node* node, string s){
        if(node==NULL){
            return;
        }
        cout<<s<< " "<<node->data<<endl;
        display(node->left, "Left child of "+ to_string(node->data));
        display(node->right, "Right child of "+ to_string(node->data));
    }

    void inOrder(Node* node, string s){
        if(node==NULL){
            return;
        }
        inOrder(node->left, "Left child of "+ to_string(node->data) );
        cout<<s<< " "<<node->data<<endl;
        inOrder(node->right, "Right child of "+ to_string(node->data) );
    }
    void postOrder(Node* node, string s){
        if(node==NULL){
            return;
        }
        postOrder(node->left, "Left child of "+ to_string(node->data) );
        postOrder(node->right, "Right child of "+ to_string(node->data) );
        cout<<s<< " "<<node->data<<endl;
    }
};
int main(){
    Node* node= new Node();
    node->insert(34);
    node->insert(84);
    node->insert(8);
    node->insert(26);
    node->insert(1);
    node->insert(37);
    node->display();
}