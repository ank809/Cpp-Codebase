// You are using GCC
# include<iostream>
using namespace std;
int firstoccur(int arr[], int n, int target){
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int m=(s+e)/2;
        if(arr[m]==target){
            ans=m;
            e=m-1;
            
        }
        else if(arr[m]<target){
            s=m+1;
        }
        else{
            e=m-1;
        }
    }
    return ans;
}
int finaloccur(int arr[], int n, int target){
    int s=0;
    int e=n-1;
    int ans=-1;
    int m=(s+e)/2;
    while(s<=e){
        if(arr[m]==target){
            ans=m;
            s=m+1;
            
        }
        else if(arr[m]<target){
            s=m+1;
        }
        else{
            e=m-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
   
   int first= firstoccur(arr, n, target);
   int last=finaloccur(arr, n, target);
   if(first!=-1 && last!=-1){
       cout<<"The first occurence of "<<target<<" is at index"<<first;
       cout<<"The final occurence of "<<target<<" is at index"<<last;
   }
   else if(first!=-1){
       cout<<"The first occurence of "<<target<<" is at index"<<first;
   }
   else{
       cout<<"Target value "<<target<<" is not found in the array";
   }
    
}