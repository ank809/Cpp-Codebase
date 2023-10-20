#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int l;
    int ptr;

    Stack(int len){
        this->l= len;
        arr= new int[len];
        ptr=-1;
    }
   
    void pushElement(int val){
        if (isFull()){
            cout<<"Cannot push array is full";
            return;
        }
        ptr++;
        arr[ptr]=val;
    }

    int popElement(){
        if (isEmpty()){
            cout<<"Cannot pop from empty array";
            return -1;
        }
        int remove= arr[ptr];
        ptr--;
        return remove;
    }
    int peek(){
        return arr[ptr];
    }

    bool isFull(){
        return ptr==l-1;
    }
    bool isEmpty(){
        return ptr==-1;
    }
};
int main(){
    Stack *stack= new Stack(5);
    stack->pushElement(12);
    stack->pushElement(8);
    stack->pushElement(56);
    stack->pushElement(2);
    stack->pushElement(91);
   cout<< "Popped element is "<< stack->popElement()<<endl;
   cout<<"Peek Element is "<<stack->peek();

}