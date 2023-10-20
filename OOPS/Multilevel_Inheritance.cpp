#include<iostream>
using namespace std;
class A{
    public:
    void disA(){
        cout<<"I am in A "<<endl;
    }
};
class B: public A{
    public:
    void disB(){
        cout<<"I am in B"<<endl;
    }
};
// level of access 
class C: public B{
    public:
    void disC(){
        cout<<"I am in C"<<endl;
    }
};
int main(){
    C c;
    c.disA();
    c.disB();
    c.disC();
}