#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* head;
    int size;

    Node(){
        head=NULL;
        size=0;
    }

    Node(int val){
        this->data=val;
        this->next=NULL;
    }

    void insertAtFirst(int val){
        Node* node= new Node(val);
        node->next=head;
        head=node;
    }

    void insertAtLast(int val){
        Node* node = new Node(val);
        Node* temp=head;
        if(head==NULL){
            insertAtFirst(val);
        }
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=node;
        size++;
    }

    void insertAtIndex(int index, int val){
        Node * node= new Node(val);
        if(index==0){
            insertAtFirst(val);
        }
        if(index==size){
            insertAtLast(val);
        }
        Node *temp=head;
        for(int i=1; i<index; i++){
            temp=temp->next;
        }
        Node *tempnext= temp->next;
        temp->next=node;
        node->next= tempnext;
        size++;
    }

    void deleteAtFirst(){
        if(head==NULL){
            return;
        }
        head=head->next;
        size--;
    }

    void deleteAtLast(){
        Node *temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
        size--;
    }

    void deleteAtIndex(int index){
        if(index==0){
            deleteAtFirst();
        }
        if(index==size){
           deleteAtLast();
        }
        Node *temp= head;
        for(int i=1; i<index; i++){
            temp=temp->next;
        }
        // Node *tempNext= temp->next;
        // temp->next=tempNext->next;

        temp->next= temp->next->next;
        size--;
        

    }

    void display(){
        Node* temp= head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"End";
    }

};

int main(){
    Node *node = new Node();
    node->insertAtFirst(10);
    node->insertAtFirst(13);
    node->insertAtFirst(102);
    node->insertAtFirst(17);
    node->display();
    cout<<endl;
    node->insertAtLast(12);
    node->insertAtIndex(2, 34);
    node->display();
    node->deleteAtFirst();
    cout<<endl;
    node->display();
    node->deleteAtLast();
    cout<<endl;
    node->display();
    node->deleteAtIndex(2);
    cout<<endl;
    node->display();
    
}


