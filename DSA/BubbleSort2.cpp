#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    float arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        // this loop is  used to compare the adjacent element 
        for(int j=0; j<n-1; j++){
            if(arr[j]<arr[j+1]){
                // swap them
                float temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
     for(int i=0; i<n; i++){
            cout<<fixed<<setprecision(2)<<arr[i]<<" ";
        }
}