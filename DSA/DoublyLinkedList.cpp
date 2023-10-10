#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node* head;
    Node (){
        head=NULL;
    }
    Node(int value){
        this->val= value;
        this->next=NULL;
    }

    void insertAtFirst(int value){
        Node* node= new Node(value);
        node->prev=NULL;
        node->next=head;
        if(head!=NULL){
            head->prev=node;
        }
        head=node;
    }

    void insertAtLast(int value){
        Node* node= new Node(value);
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=node;
        if(temp!=NULL){
            node->prev=temp;
        }
        node->next=NULL;
    }

    void insertAfter(int val1, int val2){
        Node*temp= head;
        bool found=false;
        while(temp!=NULL){
            if(temp->val==val1){
                Node* node=new Node(val2);
                node->next=temp->next;
                temp->next=node;
                node->prev=temp;
                if(node->next!=NULL){
                    node->next->prev=node;
                }
                found=true;
            }
            temp=temp->next;
        }
        if(!found){
            cout<<"Node does not exist"<<endl;
        }
    }

    void deleteFirst(){
        head=head->next;
    }
    void deleteLast(){
        Node *temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;

    }

    void display(){
        Node *temp= head;
        while(temp!=NULL){
            cout<<temp->val<<" -> ";
            temp=temp->next;
        }
    }
    };

    int main(){
        Node *node= new Node();
        node->insertAtFirst(12);
        node->insertAtFirst(2);
        node->insertAtFirst(89);
        node->insertAtFirst(25);
        node->insertAtFirst(41);
        node->insertAtLast(97);
        node->insertAfter(10, 70);
        node->deleteFirst();
        node->deleteLast();
        node->display();
    }
