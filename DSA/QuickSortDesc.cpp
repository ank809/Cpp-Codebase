// You are using GCC
#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
}

int partition(int arr[], int low, int high) {
    int pivot= arr[high];
    int i=low-1;
    for(int j=low; j<high; j++){
        if(arr[j]>=pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
    
}

void quickSort(int arr[], int low, int high) {
    if(low<high){
        int pivot= partition(arr, low, high);
        quickSort(arr, low, pivot-1);
        quickSort(arr, pivot+1, high);
    }
    
}

int main() {
    int n;
    cin >> n;

    int *scores = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    quickSort(scores, 0, n - 1);
    printArray(scores, n);

    delete[] scores;
    return 0;
}