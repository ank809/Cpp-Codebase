#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n ;i++){
        int val;
        cin>>val;
        if(val<=5){
            cout<<"Rating: "<<val<<"/10";
             cout<<endl;
            cout<<"Category :  Poor";
        }
        else if (val>=6 && val<=7){
             cout<<"Rating: "<<val<<"/10";
              cout<<endl;
            cout<<"Category :  Average";
        }
        else{
             cout<<"Rating: "<<val<<"/10";
              cout<<endl;
            cout<<"Category :  Excellent";
        }
        cout<<endl;
    }
}