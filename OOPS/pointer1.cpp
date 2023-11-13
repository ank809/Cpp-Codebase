#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *ptr= &n;
    cout<<"Address of n is "<<ptr<<endl;
    cout<<*ptr;
}