// When you are allocating a memory but you are nit de allocating it in that case system 
// run out of memory and memory leak happens 

//Dangling Pointer : pointer which points to deleted or deallocated memory locations
//void pointer: do not have datatype and can store address of any time of variable and for dereferening it you need 
//typecasting for storing the value
//Null pointerL; pints to null location
//Wild [pointer: declared but not initialized
#include<iostream>
using namespace std;
class Array{
    public:
    int n;
    int* arr;
    int *sum;
    
    // double sum;
    Array(int l){
        n=l;
        arr= new int[l];
        sum=  new int;
        *sum=0;
        //sum=0;
    }
    void get(){
        cout<<"Enter values in array"<<endl;
        for(int i=0;i<n; i++){
            cin>>arr[i];
        }
    }
    void sumArray(){
        for(int i=0; i<n; i++){
           // sum=sum+arr[i];
            *sum=*sum+arr[i];
        }
    }

    void print(){
        cout<<"Sum of elements of array is "<<*sum<<endl;
    }
    delete arr[];
    
};
int main(){
    int n;
    cin>>n;
    Array arr(n);
    arr.get();
    arr.sumArray();
    arr.print();
}