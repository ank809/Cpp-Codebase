#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p= &a;
    int **q= &p;
    cout<<"Value at p is"<<*p<<endl;
    cout<<"Value at q is "<<**q<<endl;

    // printing address of a

    cout<<"Address of a is "<<&a<<endl;
    cout<<"Address of a is "<<p<<endl;
    cout<<"Address of a is "<<*q<<endl;

}

