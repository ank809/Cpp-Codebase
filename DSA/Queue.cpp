#include<iostream>
using namespace std;

class Queue{
    public:
    int *arr;
    int n;
    int ptr;
    Queue(int l){
        n=l;
        arr= new int[n];
        ptr=-1;
    }

    void insert(int val){
        if(isFull()){
            cout<<"Cannot insert , array is full";
            return;
        }
    arr[++ptr]=val;
    }

    int pop(){
        if(isEmpty()){
            cout<<"Cannot pop from empty array"<<endl;
        }
        int remove= arr[0];
        for(int i=0; i<n; i++){
            arr[i]=arr[i+1];
        }
        n--;
        return remove;
    }
    bool isEmpty(){
        return ptr==0;
    }
    bool isFull(){
        return ptr==n;
    }

};

int main(){
    Queue * queue= new Queue(5);
    queue->insert(8);
    queue->insert(78);
    queue->insert(7);
    queue->insert(92);
    queue->insert(23);
    cout<<"Popped element"<<queue->pop();
}
