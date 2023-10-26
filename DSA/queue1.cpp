#include<iostream>
using namespace std;
class Queue{
    public:
    int n;
    int ptr;
    int *arr;
    Queue(int l){
         n=l;
        arr= new int[n];
        ptr=-1;
    }

 bool isFull(){
        return ptr==n;
    }
    bool isEmpty(){
        return ptr==-1;
    }
    void insert(int val){
        if(isFull()){
            cout<<"Cannot  insert  queue is full";
            return;
        }
        arr[++ptr]=val;
    }

    int pop(){
        if(isEmpty()){
            cout<<"Cannot remove array is empty";
            return -1;
        }
        int remove= arr[0];
        for(int i=0; i<n; i++){
            arr[i]=arr[i+1];
        }
        n--;
        return remove;
    }
    int peek(){
        return arr[ptr];
    }
   
};
int main(){
    Queue *q=  new Queue(5);
    q->insert(112);
    q->insert(11);
    q->insert(1);
    q->insert(29);
    q->insert(90);
    cout<<q->pop();

}