#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Initial order";
    for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    // for every pass the largest element came in the end
    for(int i=0; i<n; i++){
        // this loop is  used to compare the adjacent element 
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                // swap them
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        cout<<"Pass no. "<<i+1;
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    cout<<"Final order";
    for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
}