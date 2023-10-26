#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int data){
        val=data;
        next=NULL;
    }
    Node* head;
    Node(){
        head=NULL;
    }
    void insertAtFirst(int value){
       Node* node= new Node(value);
       node->prev=NULL;
       if(head!=NULL){
        node->next=head;
       }
       head=node;
    }

    void insertAtLast(int value){
        Node *  temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        Node* node= new Node(value);
        temp->next=node;
        node->prev=temp;
        node->next=NULL;
    }

    Node* find(int value){
          Node * temp=  head;
          while(temp!=NULL){
            if(temp->val==value){
                 return temp;
            }
            temp=temp->next;
        }
        return NULL;
    }
    void deleteFirst(){
        if(head==NULL){
            return;
        }
        head=head->next;
    }
    void deleteAfter(int value){
        Node* temp=head;
        bool found=false;
        while(temp!=NULL){
            if(temp->next!=NULL){
                if(temp->next->val==value){
                    temp->next= temp->next->next;
                    temp->next->prev=temp;
                }
            }
            temp=temp->next;
            found=true;
        }
        if(!found){
            cout<<"Node is not present";
        }
    }
    void insertAfter(int after, int value){
        Node* present= find(after);
        if(present!=NULL){
            Node* node= new Node(value);
                 node->next= present->next;
                 node->prev= present;
                 present->next=node;
                 if(node->next!=NULL){
                    node->next->prev=node;
                 }
        }
        else{
            cout<<"Node does not present";
            return;
        }
        return;
    }
    void display(){
        Node *  temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }

};
int main(){
    Node* node= new Node();
    node->insertAtFirst(90);
    node->insertAtFirst(9);
    node->insertAtFirst(46);
    node->insertAtFirst(321);
    node->insertAtLast(8);
    node->insertAfter(46, 53);
    node->deleteFirst();
    node->deleteAfter(8);
    node->display();
}