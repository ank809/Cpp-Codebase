// You are using GCC
# include<iostream>
#include<string>
# include<algorithm>
using namespace std;
int main(){
    int x, y;
    cin>>x;
    string arr1[x];
    for(int i=0; i<x; i++){
        cin>>arr1[i];
        cout<<" ";
    }
    cin>>y;
    string arr2[y];
    string ans[x+y];
    for(int i=0; i<y; i++){
        cin>>arr2[i];
        cout<<" ";
    }
    for(int i=0; i<x; i++){
        ans[i]=arr1[i];
    }
    for(int j=0; j<y; j++){
        ans[x+j]= arr2[j];
    }
    sort(ans, ans+x+y);
    cout<<"Merged and sorted array:";
    for(int i=0; i< x+y; i++){
        cout<<" "<< ans[i];
    }
}