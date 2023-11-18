#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Initial order: ";
    for(int i=0; i<n; i++){
        cout<<arr[i];
    } 
    int i=0;
    while(i<n){
        int correct=arr[i]-1;
        if(arr[i]!=correct){
            // swap them
            int temp=arr[i];
            arr[i]=arr[correct];
            arr[correct]=temp;
        }
        i++;

        for(int i=0; i<n; i++){
        cout<<arr[i];
        }
    cout<<endl;
    }
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}