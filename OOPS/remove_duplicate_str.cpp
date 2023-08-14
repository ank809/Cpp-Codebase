// You are using GCC
# include<iostream>
# include <string>
# include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    string arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Updated array: ";
    for(int i=0; i<n; i++){
        bool isduplicate= false;
        for(int j=0; j<i; j++){
            if(arr[i]==arr[j]){
              isduplicate=  true;
              break;
            }
        }
        if(!isduplicate){
            cout<<arr[i]<<" ";
        }
}
}