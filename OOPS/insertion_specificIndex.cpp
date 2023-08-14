// You are using GCC
# include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int index;
    cin>>index;
    char ch;
    cin>>ch;
    for(int i=n-1; i>=index; i--){
        arr[i+1]=arr[i];
    }
    n++;
    arr[index]=ch;
    cout<<"Updated array after insertion: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}