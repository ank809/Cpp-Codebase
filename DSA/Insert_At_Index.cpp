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
    int pos;
    cin>>pos;
    char c;
    cin>>c;
    for(int i=n; i>pos; i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=c;
    n++;
    cout<<"Updated array after insertion: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    
}