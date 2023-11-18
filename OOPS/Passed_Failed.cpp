
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=50){
        cout<<"Exceeding limit!"<<endl;
    }
    int count=0;
    int sum=0;
    for(int i=0; i<n; i++){
        char ch;
        cin>>ch;
        if(ch=='P'){
            count++;
        }
        else{
            sum++;
        }
    }
    cout<<"Passed: "<<count<<endl;
    cout<<"Failed: "<<sum;
    
}