#include<iostream>
using namespace std;
int main(){
    int x, y, z;
    cout<<"Enter first number";
    cin>>x;
    cout<<"Enter second number";
    cin>>y;
    cout<<"Enter third number";
    cin>>z;
    if(x>y && x>z){
        cout<<x<<"is greater";
    }
    else if (y>x && y>z){
        cout<< y<<"is greater";
    }
    else{
        cout<< y<<"is greater";
    }
    

}