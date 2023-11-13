#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // it will create array dynamically
    int* arr= new int[n];
    int sum=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout<<sum;
}
