#include<iostream>
using namespace std;

void merge(int arr[], int s, int m, int e){
    int n1= m-s+1;
    int n2= e-m;
    int a[n1];
    int b[n2];
    // copy the elements form start till mid in array a
    for(int i=0; i<n1; i++){
        a[i]= arr[s+i];
    }

    for(int j=0; j<n2; j++){
        b[j]= arr[m+1+j];
    }

    int i=0, j=0, k=s;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            i++;
        }
        else{
            arr[k]=b[j];
            j++;
        }
        k++;
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

void mergeSort(int arr[], int s, int e){
    if(s<e){
        int mid= (s+e)/2;
        mergeSort(arr, s, mid);
        mergeSort(arr, mid+1, e);
        merge(arr, s, mid, e);
    }
}
int main(){
    int arr[]= {2, 5, 178, 54, 32, 79};
    int n= sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0 ,n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}