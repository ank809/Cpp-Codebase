#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int num, rep;
    cin>>num>>rep;
    for(int i=0; i<n; i++){
        if(arr[i]==num){
            arr[i]=rep;
        }
    }
   for(int i=n-1; i>=0; i--){
    cout<<arr[i]<<" ";
   }
}