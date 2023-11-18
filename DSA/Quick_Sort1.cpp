#include<iostream>
using namespace std;
void quicksort(int arr[], int low, int high){
    if(low>=high){
        return;
    }
    int s=low;
    int e=high;
    int pivot= s+(e-s)/2;

    while(s<=e){
        while(arr[s]<arr[pivot]){
            s++;
        }
        while(arr[e]>arr[pivot]){
            e--;
        }
        if(s<=e){
            // swap
            int temp= arr[s];
            arr[s]=arr[e];
            arr[e]=temp;
            s++;
            e--;
        }
    }
    quicksort(arr, low , e);
    quicksort(arr, s, high);
}

int main(){
    int n=5;
   int arr[n] = {2, 8, 7, 1, 19};
    quicksort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}