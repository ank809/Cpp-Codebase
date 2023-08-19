# include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={3, 5, 4, 1, 2};
    int i=0;
    while(i<=5){
        int correct=arr[i]-1;
        if(arr[i]!=correct){
            int temp=arr[correct];
            arr[correct]=arr[i];
            arr[i]=temp;
        }
        else{
            i++;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    
}