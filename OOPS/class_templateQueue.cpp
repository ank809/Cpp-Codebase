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
            cout<<"Cannot insert queue is full";
            return;
        }
        arr[++ptr]=val;
        ptr++;
    }

    int remove(){
        if(isEmpty()){
            cout<<"Cannot delete queue is full";
            return -1;
        }
        int remove= arr[0];
        for(int i=0; i<n; i++){
            arr[i]=arr[i+1];
        }
        n--;
        return remove;

    }

    bool isEmpty(){
            return ptr==-1;
    }
    bool isFull(){
        return ptr==n;
    }
};
int main(){
    int n;
    cin>>n;
    Queue q(n);
    for(int i=0; i<n; i++){
        q.insert(i+1);
    }
    q.insert(67);
   cout<<q.remove();
}