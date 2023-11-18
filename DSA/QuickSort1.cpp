#include<iostream>
using namespace std;

void quickSort(int arr[], int low, int high){
    if(low>=high){
        return;
    }
    int start=0;
    int end= high;
    int pivot=(high+low)/2;
    while(start<=end){
        while(arr[start]<arr[pivot]){
            start++;
        }
    while(arr[end]>arr[pivot]){
        end--;
    }
    if(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    }
    quickSort(arr, low, end);
    quickSort(arr, start, high);
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
        cout<<arr[i]<<" ";
    }
}