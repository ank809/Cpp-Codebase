#include<iostream>
using namespace std;
int main(){
    int *ptr= NULL; // pointer initialized to NULL
    ptr= new int; // request memory for variable
    *ptr= 23; // value assigned at allocated address
    cout<<"Address where ptr is pointing before deletion "<<ptr<<endl;
    delete ptr; // deleted address
    cout<<"Address where ptr is pointing after deletion "<<ptr<<endl; // still pointing to the deleted memory 
    // address so here it is dangling pointer

    ptr=NULL;// no longer a dangling pointer
}