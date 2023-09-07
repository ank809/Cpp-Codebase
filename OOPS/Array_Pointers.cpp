#include<iostream>
using namespace std;
int main(){
    int n;
    int *ptr;
    cout<<"Enter value of size of array:";
    cin>>n;
    int arr [n];
    for(int i=0; i<n; i++){
        cout<<"Enter value of "<<i+1<<"element:";
        ptr= &arr[i];
        cin>>*ptr;
    }
    cout<<"Elements in array are"<<endl;
    for(int i=0; i<n; i++){
        ptr=&arr[i];
        cout<<*ptr;
    }
}