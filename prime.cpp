#include<iostream>
using namespace std;
int main(){
    int i, count=0, n;
    cin>>n;
    for(i=1; i<=n; i++){
        if(n%i==0){
            count+=1;
        }
    }
    if(count==2){
        cout<<n<<"is prime";
    }
    else{
        cout<<n<<"is not prime";
    }

}