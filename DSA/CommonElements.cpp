// You are using GCC
# include<iostream>
# include<cmath>
using namespace std;
int main(){
    int n1;
    cin>>n1;
    int arr1[n1];
    for(int i=0; i<n1; i++){
        cin>>arr1[i];
    }
    int n2;
    cin>>n2;
    int arr2[n2];
    for(int i=0; i<n2; i++){
        cin>>arr2[i];
    }
    int maximum= max(n1, n2);
    int n=0;
    int ans[maximum];
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(arr1[i]==arr2[j]){
                ans[n++]=arr1[i];
                break;
            }
        }
    }
    if(n==0){
        cout<<"Common Elements: None";
    }
    else{
    cout<<"Common Elements: ";
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    }
}