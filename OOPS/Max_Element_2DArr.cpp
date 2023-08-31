#include<iostream>
using namespace std;
int main(){
    int r, c;
    cin>>r;
    cin>>c;
    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    int findMaxElement=arr[0][0];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(arr[i][j]>findMaxElement){
                findMaxElement= arr[i][j];
            }
        }
    }
    cout<<findMaxElement;
}
