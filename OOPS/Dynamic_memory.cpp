#include<iostream>
using namespace std;
int main(){
    char ch='q';
    cout<<sizeof(ch)<<endl;
    char *c= &ch;
    cout<<sizeof(c)<<endl;
    // new char will allocate memory dynamically
    char* a= new char;
    cout<<sizeof(a)<<endl;
}