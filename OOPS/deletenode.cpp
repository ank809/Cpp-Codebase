#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* head;
   Node(){
    head=NULL;
   }
    Node(val){
       this-> data=val;
        this->next=NULL;
    }

    void insert(int val){
        Node *node= new Node(val);
        node->next=head;
        head=node;
    }

    void deletedata(){
        if(next!-NULL){
        head= head->next;
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
    node->insert(12);
    node->insert(1);
    node->insert(10);
    node->insert(17);
    node->insert(2);
    node->insert(79);
    node->display();
    node->deletedata();
    node->display();
}