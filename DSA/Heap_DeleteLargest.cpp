#include<iostream>
using namespace std;

void heapify(int arr[], int n, int i){
    int min=i;
    int l= 2*i+1;
    int r= 2*i+2;
    if(l<n && arr[l]<arr[min]){
        min=l;
    }
    if(r<n && arr[r]<arr[min]){
        min=r;
    }
    if(min!=i){
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        heapify(arr, n, min);
    }
}

int removeelement(int arr[], int n){
    int remove= arr[0];
    arr[0]=arr[n-1];
    n--;
    heapify(arr, n, 0);
    return remove;
}
void heapSort(int arr[], int n){
    for(int i=n-1; i>=0 ; i--){
        int temp=arr[0];
        arr[0]=arr[i];
        arr[i]=temp;
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
    heapSort(arr, n);
    cout<<removeelement(arr, n)<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}