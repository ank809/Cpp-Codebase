#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* head;
    Node* tail;
    int size;
    Node(){
        head=NULL;
        size=0;
    }
    Node (int val){
        this->data= val;
        this->head= NULL;
    }

    void insertAtFirst(int val){
        Node* node= new Node(val);
        if(head==NULL){
            node->next= node;
            head=node;
            tail=node;
        }
        else{
        node->next=head;
        head=node;
        tail->next=node;
        }
        
        size++;
    }
    void display(){
        Node* temp= head;
        do{
            cout<<temp->data<<" ";
            temp=temp->next;
        }while(temp!=head);
    }
};
int main(){
    Node* node=  new Node();
    node->insertAtFirst(12);
    node->insertAtFirst(234);
    node->insertAtFirst(324);
    node->insertAtFirst(34);
    node->insertAtFirst(44);
    node->display();

}