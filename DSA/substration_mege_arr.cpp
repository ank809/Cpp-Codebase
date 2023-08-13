// You are using GCC
# include<iostream>
# include <cmath>
using namespace std;
int main(){
    int x, y;
    cin>>x;
    int arr1[x];
    int arr2[y];
    for(int i=0; i<x; i++){
        cin>>arr1[i];
    }
    cin>>y;
    for (int i=0; i<y; i++){
        cin>>arr2[i];
    }
    int n= max(x, y);
    int ans[n];
    for(int i=0; i<n ; i ++){
        int value1= (i<x)? arr1[i]:0;
        int value2= (i<y) ? arr2[i]:0;
        ans[i]= -(value2+value1);
    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    
}