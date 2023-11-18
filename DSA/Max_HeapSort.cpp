#include<iostream>
using namespace std;
void maxheapify(int arr[], int n, int i){
    int max= i;
    int l= 2*i+1;
    int r= 2*i+2;
    if(l<n && arr[l]>arr[max]){
        max=l;
    }
    if(r<n && arr[r]>arr[max]){
        max=r;
    }
    if(max!=i){
        int temp=arr[i];
        arr[i]=arr[max];
        arr[max]=temp;
        maxheapify(arr, n, max);
    }
}
void heapSort(int arr[], int n){
    for(int i=n-1; i>=0; i--){
        int temp=arr[i];
        arr[i]=arr[0];
        arr[0]=temp;
        maxheapify(arr, i, 0);
    }
}

void buildheap(int arr[], int n){
    for(int i=n/2-1; i>=0; i--){
        maxheapify(arr, n, i);
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
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    heapSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}