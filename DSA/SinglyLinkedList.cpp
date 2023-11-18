#include<iostream>
using namespace std;
class Node{
    public:
    Node* next;
    int data;
    Node* head;
    Node(){
        head=NULL;
    }
    Node(int val){
        this->data=val;
        next=NULL;
    }
    void insertFirst(int val){
        Node* node= new Node(val);
        node->next=head;
        head=node;
    }

    void insertAfter(int after, int val){
        Node* temp=head;
        while(temp!=NULL){
            if(temp->data==after){
                Node* node= new Node(val);
                node->next=temp->next;
                temp->next=node;
            }
            temp=temp->next;
        }
    }

    void insertEnd(int val){
        Node* temp=head;
        if(head==NULL){
            insertFirst(val);
            return;
        }
        while(temp->next!=NULL){
           temp= temp->next;
        }
        Node* node= new Node(val);
        temp->next=node;
        node->next=NULL;
    }

    void deleteFirst(){
        if(head==NULL){
            return;
        }
        head=head->next;
    }

    void deleteLast(){
        if(head==NULL){
            return;
        }
        Node* temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
    }

    void deleteParticular(int val){
        if(head==NULL){
            return;
        }
        Node* temp=head;
        if(temp->data==val){
            deleteFirst();
            return;
        }
        while(temp->next!=NULL){
            if(temp->next->data==val){
                temp->next=temp->next->next;
            }
            temp=temp->next;
        }
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main(){
     Node* node= new Node();
    node->insertFirst(90);
    node->insertFirst(9);
    node->insertFirst(18);
    node->insertFirst(3);
    node->insertFirst(46);
    node->insertFirst(79);
    node->display();
    cout<<endl;
    node->insertAfter(79, 1);
    node->display();
    node->insertEnd(7);
    cout<<endl;
    node->display();
    cout<<endl;
    node->deleteFirst();
    node->display();
    node->deleteLast();
    cout<<endl;
    node->display();
    node->deleteParticular(46);
    cout<<endl;
    node->display();

}