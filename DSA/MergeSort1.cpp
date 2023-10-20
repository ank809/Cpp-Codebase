#include<iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end){
    int n1=mid-start+1;
    int n2=end-mid;
    int a[n1];
    int b[n2];

    for(int i=0; i<n1; i++){
        a[i]=arr[start+i];
    }
    for(int j=0; j<n2; j++){
        b[j]=arr[mid+1+j];
    }
    int i=0, j=0, k=start;

    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            i++;
            k++;
        }
        else{
            arr[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=b[j];
        j++;
        k++;
    }

}

void mergeSort(int arr[],int start,  int end){
    if(start>=end){
        return;
    }
    int mid= (start+end)/2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, start, mid, end);

}
int main() {
    int arr[] = {45, 278, 67, 23, 80};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
