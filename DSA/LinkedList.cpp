#include<iostream>
using namespace std;

class Node {
    public:
    Node* head;
    int data;
    Node *next;
    int size;


    Node(){
        head=NULL;
        size=0;
    }

    Node(int n){
        this->data=n;
        this->next= NULL;
    }

    void insertAtFirst(int val){
        Node *node= new Node(val); // constructor will call 
        node->next= head; // address
        head=node;
        size++; 
    }
    void display(){
        Node *temp= head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
        cout<<size;
    }
};

int main(){
    Node *node = new Node();
    node->insertAtFirst(2);
    node->insertAtFirst(21);
    node->insertAtFirst(18);
    node->insertAtFirst(16);
    node->display();
    
}
