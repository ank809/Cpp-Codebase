#include<iostream>
using namespace std;
class CustomArray{
    public :
    int ptr=-1;
    int *arr;
    int n;
    CustomArray(){
        arr= new int[10];  // this is default size 
        // ptr==0;
    }
    CustomArray(int len){
        n=len;
        arr= new int[n];  // this is called when user pass the size 
        // ptr==0;
    }
void pushElement(int val){
        if(isFull()){
            cout<<"Stack is full";
        }
        arr[++ptr]=val;
    }

    int popElement(){
        if(isEmpty()){
            cout<<"Stack is empty";
        }
        return arr[ptr--];
    }

    int peek(){
        if(isEmpty()){
            cout<<"Stack is empty";
        }
        return arr[ptr];
    }

    bool isEmpty(){
        return ptr==-1;
    }
    bool isFull(){
        return ptr==n;
    }
};
 int main(){
    CustomArray arr;
    arr.pushElement(12);
    arr.pushElement(56);
    arr.pushElement(78);
    arr.pushElement(45);
    cout<< arr.popElement()<<endl;
    cout<< arr.popElement()<<endl;
    cout<< arr.popElement()<<endl;
    cout<< arr.popElement()<<endl;
    cout<<arr.peek()<<endl;

    


}