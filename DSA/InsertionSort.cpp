# include<iostream>
using namespace std;
int main(){
    int arr[5]= {9, 4, 6, 2, 1};
    for(int i=0; i<4; i++){
        for(int j=i+1; j>0; j--){
            if(arr[j]<arr[j-1]){
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}