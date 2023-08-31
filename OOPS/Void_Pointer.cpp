// void pointer can store the address of any type of variable and while printing just typecast that
// in c we can assign void pointer to any other pointer datatype but in C++ we need to typecast it 
#include<iostream>
using namespace std;
int main(){
    int a=10;
    float b=45.67;
    void *ptr;
    ptr=&a;
    cout<<"Value of a is "<<(*(int *)ptr)<<endl; // dereferencing or typecasting from void to the type of datatype stored in variable
    ptr=&b;
    cout<<"Value of b is "<<(*(float *) ptr);
}
