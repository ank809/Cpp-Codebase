// You are using GCC
# include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        
    }
    int index;
    cin>>index;
    int val;
    cin>>val;
    cout<<"Original array: ";
    for(int i=0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    if(index>n+1){
        cout<<"Invalid Position!";
    }
    else{
    for(int i=n; i>index-1; i--){
        arr[i]=arr[i-1];
    }
    arr[index-1]=val;
    n++;
    cout<<"Updated array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    }
    
}