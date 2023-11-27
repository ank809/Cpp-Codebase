#include<iostream>
using namespace std;

void quickSort(int arr[] , int low, int high){
    if(low>=high){
        return;
    }
    int s=low;
    int e= high;
    int pivot= (low+high)/2;
    while(s<=e){
        while(arr[s]<arr[pivot]){
            s++;
        }
        while(arr[e]>arr[pivot]){
            e--
        }
        if(s<=e){
            int temp=arr[s];
            arr[s]=arr[e];
            arr[e]=temp;
            s++;
            e--;
        }
    }
    quicksort(arr, low, e);
    quickSort(arr, s, high);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    quickSort(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}