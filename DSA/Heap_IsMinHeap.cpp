// You are using GCC
#include <iostream>
using namespace std;
int min_heap(int arr[],int n) 
{
    //Type your code here
    for(int i=0; i<n; i++){
        int l= 2*i+1;
        int r= 2*i+2;
        if(l<n && arr[l]<arr[i]){
            return 0;
        }
        if(r<n && arr[r]< arr[i]){
            return 0;
        }
    }
    return 1;
}
int main() {
    int n;
    cin>>n;
    int keys[n];
    for (int i = 0; i < n; i++) {
        cin>>keys[i];
    }
    if(min_heap(keys, n)==1)
    {
        cout<<"The players are arranged in min heap order";
    }
    else 
    {
        cout<<"The players are not arranged in min heap order";
    }
}