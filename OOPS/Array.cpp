#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of size of array:";
    cin>>n;
    int arr [n];
    for(int i=0; i<n; i++){
        cout<<"Enter value of "<<i+1<<"element:";
        cin>>arr[i];
    }
    cout<<"Elemets in array are"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}