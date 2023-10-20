#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        this->data= val;
        next= NULL;
    }
};
class Stack{
     public:
    Node* top= NULL;

    void push(int val){
        Node* node= new Node(val);
        node->next=top;
        top=node;
    }
    int pop(){
        if(isEmpty()){
            cout<<"Cannot pop from empty stack";
            return -1;
        }
        int popped= top->data;
        top=top->next;
        return popped;
    }

    bool isEmpty(){
        return top==NULL;
    }

    int peek(){
        if(isEmpty()){
            cout<<"Cannot peek from empty stack";
            return -1;
        }
        return top->data;
    }
};
int main(){
    Stack stack;
    stack.push(90);
    stack.push(45);
    stack.push(9);
    stack.push(6);
    stack.push(91);
    cout<<"Popped element is "<<stack.pop()<<endl;
    cout<<"Peek element is "<<stack.peek();

}
