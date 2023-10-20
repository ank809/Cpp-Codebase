#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node * prev;
    Node *head;
    Node(){
        head=NULL;
    }
    Node(int value){
    next=NULL;
    this->val= value;
    }

    void insertAtFirst(int value){
        Node * node= new Node(value);
        node->prev= NULL;
        if(head!=NULL){
            node->next=head;
        }
        head=node;
    }

    void insertAtLast(int value){
        Node * node= new Node(value);
        Node* temp= head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=node;
        node->prev=temp;
        node->next=NULL;

    }
    void insert(int value1, int value2){
        Node* temp=head;
        bool exist=false;
        while(temp!=NULL){
            if(temp->val==value1){
                Node* node= new Node(value2);
                node->next=temp->next;
                temp->next=node;
                node->prev=temp;
                if(node->next!=NULL){
                    node->next->prev=node;
                }
                exist=true;
            }
            temp=temp->next;

        }
        if(exist==false){
            cout<<"Node doesn't exist";
        }
    }

    void deletefirst(){
        if(head!=NULL){
        head= head->next;
        }
    }

    void deletenode(int value){
        Node* temp= head;
        while(temp!=NULL){
            if(temp->next!=NULL){
            if(temp->next->val==value){
                temp->next= temp->next->next;
                temp->next->prev= temp;
            }
            }
            temp= temp->next;
        }
    }

    void display(){
        Node * temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }


};
int main(){
    Node * node= new Node();
    node->insertAtFirst(23);
    node->insertAtFirst(2);
    node->insertAtFirst(12);
    node->insertAtFirst(34);
    node->insertAtLast(90);
    node->insert(90, 87);
   // node->deletefirst();
    node->deletenode(23);
    node->display();

}