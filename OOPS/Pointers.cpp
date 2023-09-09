#include<iostream>
using namespace std;
int main(){

    /* arr[i]= *(arr+i);
     i[arr]=* (i+arr); it will not give any error
    int arr[10]={2, 3, 5, 6 ,8, 2, 10};
    cout<<"Address of first block of array is "<<arr<<endl;
    cout<<"Address of first block of array is "<<&arr[0]<<endl;
    cout<<""<<*arr; //  dereferencing first value get printed;
    cout<<*arr+1<<endl;
    cout<<(*arr)+1<<endl;
    int i=3;
    cout<<i[arr]<<endl;
    cout<<*(i+arr)<<endl;

    size of pointer
    int *ptr= &arr[0];
    cout<<sizeof(ptr)<<endl;
    */

   int arr[5]={1, 2, 3, 4, 5};
   char ch[6]= "abcde";
   cout<<arr<<endl;  // will print address of first location
   cout<<ch<<endl;      //will print the characters 

   cout<<ch[1]<<endl;

   int *ptr= &arr[0];
   char *c= &c[0];
   cout<<ptr <<" ->" << c <<endl;
   }