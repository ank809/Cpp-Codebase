#include<iostream>
using namespace std;
class Array{
    public:
    int n;
    int *arr;
    Array(int len){
        n= len;
        arr= new int[n];
    }
    void insert(){
        for(int i=0; i<n; i++){
            cout<<"Enter elements at "<<i+1;
            cin>>arr[i];
        }
    }
    void display(){
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
    }
    bool search (int target){
        for(int i=0; i<n; i++){
            if(arr[i]==target){
                return true;
            }
        }
        return false;
    }
};
int main(){
    int n;
    cin>>n;
     Array arr(n);
    arr.insert();
    arr.display();
    int target;
    cin>>target;
    bool ans=arr.search(target);
    cout<<"Ans"<<ans;
}