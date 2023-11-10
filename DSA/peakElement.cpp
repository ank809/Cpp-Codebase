// You are using GCC
# include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[4];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int peak= arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1]){
            peak=arr[i];
            break;
        }
    }
    cout<<peak;
}