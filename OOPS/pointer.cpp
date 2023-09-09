#include<iostream>
using namespace std;

int* change(int *ptr){
    *ptr= 6;
    cout<<*ptr;
}

int main(){
    int a=5;
    int *ptr= &a;
    change(ptr);
    cout<<a;
    
}