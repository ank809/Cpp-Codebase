# include<iostream>
using namespace std;
void swap(int *x, int *y){ // datatype in front of * is pointer else it is value at
    int temp= *x;    // value at x;
    *x= *y;
    *y=temp;
    cout<<*x <<" "<< *y<<endl+;
}
int main(){
    int a=10;
    int b=200;
    swap(&a, &b); // address of variables 
    cout<<a <<" "<< b;
}