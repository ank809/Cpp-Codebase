#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*left;
    Node* right;
    Node(){};
    Node(int value){
        this->val= value;
        left=NULL;
        right=NULL;
    }
    Node* root=NULL;
    void insert(int value){
        root=  insert(root, value);
    }
    Node* insert(Node* node, int value){
        if(node==NULL){
            node= new Node(value);
            return node;
        }
        if(value<node->val){
            node->left= insert(node->left, value);
        }
        if(value>node->val){
            node->right= insert(node->right, value);
        }
        return node;
    }
    void display(){
        display(root);
    }
    void display(Node* node){
        if(node==NULL){
            return ;
        }
        cout<<node->val<<" ";
        display(node->left);
        display(node->right);
    }
};
int main(){
    Node* node= new Node();
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        node->insert(a);
    }
    node->display();
}