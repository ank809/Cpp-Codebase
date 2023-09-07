# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n";
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"Enter element at index"<<i+1<<" ";
        cin>>arr[i];
    }
    cout<<"Enter index and element to be inserted";
    int index, element;
    cin>>index>>element;
    for(int i=n-1; i>=index; i--){
        arr[i+1]= arr[i];
    }
    arr[index]=element;
    n++;
    cout<<"Elements are";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}