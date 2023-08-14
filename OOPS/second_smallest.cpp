// You are using GCC
# include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n ;i++){
        cin>>arr[i];
    }
    
    int smallest=arr[0];
    int sec= arr[1];
    for(int i=0; i<n; i++){
        if(arr[i]<smallest){
            sec= smallest;
            smallest=arr[i];
        }
        else if(arr[i]<sec && arr[i]!=smallest){
            sec=arr[i];
        }
    }
    cout<<"Second Smallest Element: "<<sec;
}