#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(){};
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
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

    int search(int val){
       int ans= search(root, val);
       return ans;
    }
    int search(Node* node, int val){
        if(node==NULL){
            return 0;
        }
        if(val==node->data){
            return node->data;
        }
        if(val<node->data){
            return search(node->left, val);
        }
        else{
           return search(node->right, val);
        }
    }
    void display(){
        display(root);
    }
    void display(Node* node){
        if(node==NULL){
            return;
        }
        cout<<node->data<<" ";
        display(node->left);
        display(node->right);
    }
};
int main(){
    Node* node= new Node();
    int n, element, val;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>element;
        node->insert(element);
    }
    cin>>val;
    cout<<node->search(val)<<endl;
    node->display();
}