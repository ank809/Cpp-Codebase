#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(){}
    Node(int value){
        this->val=value;
        left=NULL;
        right=NULL;
    }
    Node* root=NULL;
    void insert(int value){
        root= insert(root, value);
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
   void  display(){
    display(root);
   }
   void display(Node* node){
    if(node==NULL){
        return;
    }
    display(node->left);
    display(node->right);
    cout<<node->val<<" ";
   }
    int sum=0;
   void sumLeafNode(Node* node){
    if(node==NULL){
        return;
    }
    if(node->left==NULL && node->right==NULL){
        sum+=node->val;
    }
    sumLeafNode(node->left);
    sumLeafNode(node->right);
   }
   void printSum(){
    sumLeafNode(root);
    cout<<"Sum of leaf nodes is "<<sum;
   }
};
int main(){
    int element;
    Node* node= new Node();
    // do{
    //     cin>>element;
    //     if(element!=-1){
    //         node->insert(element);
    //     }
    // }while(element!=-1);
    while(true){
        cin>>element;
        if(element<0){
            break;
        }
        node->insert(element);
    }
    node->printSum();
}