#include<iostream>
using namespace std;
class Array{
    public:
    int n;
    int *arr;
    Array(int len){
        n=len;
        arr= new int[n];
    }

    void insert(){
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
    }

    bool search(int target){
        int start=0;
        int end=n-1;
        while(start<=end){
            int mid= start+end/2;
            if(arr[mid]==target){
                return true;
            }
            else if(arr[mid]<target){
                start=mid+1;
            }
            end = mid-1;
        }
        return false;
    }
};

int main(){
    int n;
    cout<<"Enter number of elements";
    cin>>n;
    cout<<"Insert element in array";
    Array arr(n);
    arr.insert();
    cout<<"Enter target element";
    int target;
    cin>>target;
    bool ans= arr.search(target);
    cout<<"Ans is "<<ans;
}