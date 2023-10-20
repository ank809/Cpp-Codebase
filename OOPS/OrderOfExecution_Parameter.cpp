#include<iostream>
using namespace std;
class A{
    int x;
    public:
    A(int a){
        x=a;
        cout<<"A called"<<endl;
    }
    ~A(){
        cout<<"A ends"<<endl;
    }
};
class B: public A{
    int l;
    public:
    // initializer list 
    B(int p): A(p){
        l=p;
        cout<<"B called"<<endl;
    }
    ~B(){
        cout<<"B ends"<<endl;
    }
};
int main(){
    B obj(9);
}
