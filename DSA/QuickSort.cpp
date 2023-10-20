#include<iostream>
using namespace std;

void quickSort(int arr[], int low, int high){
    
    if(low>=high){
        return;
    }
    int start=low;
    int end= high;
    int pivot = (low + high) / 2;

    while(start<=end){
        while(arr[start]<arr[pivot]){
            start++;
        }
        while(arr[end]>arr[pivot]){
            end--;
        }
        if(arr[start]<=arr[end]){
            int temp= arr[start];
            arr[start]= arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
    }

    quickSort(arr, low, end);
    quickSort(arr, start, high);
}
int main() {
    int arr[] = {2, 8, 7, 1, 19, 27, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
