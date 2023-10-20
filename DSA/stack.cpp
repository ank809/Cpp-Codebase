#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int n;
    int ptr;
    Stack(int l){
        n=l;
        arr= new int[n];
        ptr=-1;
    }
    void insert(int data){
        if(isFull()){
            cout<<"Can't insert stack is full";
            return;
        }
        arr[++ptr]=data;
    }
    int pop(){
        if(isEmpty()){
             cout<<"Can't pop stack is empty";
            return -1 ;
        }
        int remove= arr[ptr];
        n--;
        ptr--;
        return remove;
    }
    bool isFull(){
        return ptr==n;
    }
    bool isEmpty(){
        return ptr==-1;
    }
};
int main(){
    Stack stack(5);
    stack.insert(90);
    stack.insert(10);
    stack.insert(78);
    stack.insert(54);
    cout<<stack.pop();
}