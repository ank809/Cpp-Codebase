// created a min heap and sorted in descending order
#include<iostream>
using namespace std;

void heapify(int arr[], int n, int i){
    int s=i;
    int l= 2*i+1;
    int r= 2*i+2;
    if(l<n && arr[l]<arr[s]){
        s=l;
    }
    if(r<n && arr[r]<arr[s]){
        s=r;
    }
    if(s!=i){
        int temp= arr[s];
        arr[s]=arr[i];
        arr[i]=temp;
        heapify(arr, n, s);
    }
}

void heapSort(int arr[], int n){
    for(int i=n-1; i>=0; i--){
        int temp=arr[i];
        arr[i]=arr[0];
        arr[0]=temp;
        heapify(arr, i, 0);
    }
}
void buildheap(int arr[], int n){
    for(int i= n/2-1; i>=0; i--){
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
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    cout<<endl;
    heapSort(arr, n);
     for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}