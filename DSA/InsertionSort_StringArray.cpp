#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Initial Order: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j>0; j--){
            if(arr[j]<arr[j-1]){
                string temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
        cout<<"After iteration "<<i+1<<": ";
         for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    cout<<"Sorted Order: "<<": ";
         for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
}