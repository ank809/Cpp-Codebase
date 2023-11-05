#include<iostream>
using namespace std;


void heapify(int arr[], int n, int i){
    int min= i;
    int l= 2*i+1;
    int r= 2*i+2;
    if(l<n && arr[l]<arr[min]){
        min=l;
    }
    if(r<n && arr[r]<arr[min]){
        min=r;
    }
    if(min!=i){
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
        heapify(arr, n,min);
    }
}
void deleteMin(int arr[], int &n){
    arr[0]=arr[n-1];
    n--;
    heapify(arr, n, 0);
}
void buildheap(int arr[], int n){
    for(int i=(n/2)-1; i>=0; i--){
        heapify(arr, n, i);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    buildheap(arr, n);
    deleteMin(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}