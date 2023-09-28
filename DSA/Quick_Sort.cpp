#include<iostream>
using namespace std;

static void quickSort(int arr[], int low, int high){
    if(low>=high){
        return;
    }
    int s=low;
    int e=high;
    int pivot= s+(e-s)/2;
    while(s<=e){
        while(arr[pivot]>arr[s]){
            s++;
        }
        while(arr[pivot]<arr[e]){
            e--;
        }

        if(s<=e){
            int temp= arr[s];
            arr[s]= arr[e];
            arr[e]=temp;
            s++;
            e--;
        }
    }
     quickSort(arr, low, e);
     quickSort(arr, s, high);
}
int main(){
    int n=5;
    int arr[n]= {5, 3, 4, 1, 2};
    quickSort(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
