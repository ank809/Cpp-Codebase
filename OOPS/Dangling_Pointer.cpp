#include<iostream>
using namespace std;
int main(){
    int *ptr;
    {
        int v=23;
        ptr=&v;
        cout<<"Address is inside block"<<endl;
        // here outside the block we cannot access the v so it is deleted but the ptr is still pointing to it
    }

   // cout<<v;
    cout<<*ptr<<endl;
    ptr=NULL;
    cout<<"Outside block";
}