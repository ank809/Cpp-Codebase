// initialising all values of array to zero
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of size of array:";
    cin>>n;
    int arr [n];
    for(int i=0; i<n; i++){
        arr[i]=0;
    }
    cout<<"Elements in array are"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}