#include<iostream>
using namespace std;


void swap(int arr[], int a, int b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}
int getmin(int arr[], int s, int e){
    int min=s;
    for(int i=s; i<=e; i++){
        if(arr[i]<arr[min]){
            min=i;
        }
    }
    return min;
}
int main(){
    // int n;
    // cin>>n;
    // int arr[n];
    int arr[6]= {3, 9, 16, 74, 53, 2};
    int n=6;
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    for(int i=0; i<n-1; i++){
        int start=i;
        int min= getmin(arr, start, n-1);
        swap(arr, start, min);
        for(int j=0; j<n; j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    for(int j=0; j<n; j++){
            cout<<arr[j]<<" ";
        }
}