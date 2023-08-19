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
    int count=0;
    int id=-1;
    for(int i=0; i<n-1; i++){
        if(arr[i]==arr[i+1]){
            count+=1;
            id=arr[i];
        }
    }
    if(count!=0){
        cout<<" The majority candidate  is ID "<<id;
    }
    else{
        cout<<"No majority candidate found";
    }
}