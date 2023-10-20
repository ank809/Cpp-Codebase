#include<iostream>
using namespace std;

class Array{
    int *arr;
    int n;
    public:
    Array(int l){
        arr= new int[l];
        n=l;
    }
    void insert(){
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
    }
    void display(){
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        } 
    }
};
int main(){
    Array arr(5);
    arr.insert();
    arr.display();
}
