#include<iostream>
using namespace std;

void merge(string arr[], int s, int m, int e){
    int n1= m-s+1;
    int n2= e-m;
    string a[n1];
    string b[n2];
    for(int i=0; i<n1; i++){
        a[i]=arr[i+s];
    }
    for(int j=0; j<n2; j++){
        b[j]=arr[m+j+1];
    }
    int i=0, j=0, k=s;
    while(i<n1 && j<n2 ){
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

void mergeSort(string arr[], int s, int e){
    if(s<e){
        int mid= (s+e)/2;
        mergeSort(arr, s, mid);
        mergeSort(arr, mid+1, e);
        merge(arr, s, mid, e);
    }
}
int main(){
    int n;
    cin>>n;
    string arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    mergeSort(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
      return 0; 
}