#include<iostream>
using namespace std;
int main(){
    int arr[5]={3,6,8,10,12};
    int target=3;
    int s=0;
    int e=5;
    int count=0;
    while(s<=e){
        int m= s+e/2;
        if(arr[m]==target){
            count=1;
        }
        else if(arr[m]>target){
            s=m+1;
        }
        else{
            e=m-1;
        }
    }
    if(count==1){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
}