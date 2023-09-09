/* #include<iostream>
using namespace std;

void swap(int *p, int *q){
    int *temp=p;
    p=q;
    q=temp;
    cout<<"First value is "<<*p<<endl;
    cout<<"Second value is "<<*q<<endl;
}
int main(){
    int value1=2;
    int value2=4;
    int *ptr1= &value1;
    int *ptr2= &value2;
    swap(ptr1, ptr2);
}*/

// Another example
#include<iostream>
using namespace std;

void update(int *p){
    p=p+1;
    cout<<"Updated  value is "<<p<<endl;
}
int main(){
    int value1=2;
    int *ptr1= &value1;
    cout<<"Before calling update"<<ptr1<<endl; 
    update(ptr1);
    cout<<"After calling update"<<ptr1<<endl; // output will be same because we are updating in update  
                                              // function and its scope is local and also not returning anything
}