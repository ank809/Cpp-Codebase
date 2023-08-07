#include<iostream>
using namespace std;
int main(){
    int sum, i, n;
    cin>>n;
    sum=0;
    for(i=1; i<=n; i++){
        sum=sum+i;
    }
    cout<<"sum is"<<sum;
}