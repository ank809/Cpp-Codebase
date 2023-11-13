#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *ptr;
    ptr= &n;
    int **dp;
    dp= &ptr;
    cout<<"Address of var n is "<<&n<<endl;
    cout<<"Value of n is "<<n<<endl;
    cout<<"Value at ptr is "<<ptr<<endl;
    cout<<"Value at address of ptr is "<<*ptr<<endl;
    cout<<"Value at dp is "<<dp<<endl;
    cout<<"Value at address of dp is "<<**dp;
}