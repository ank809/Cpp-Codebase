#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"Hi"<<endl;
    }
    ~A(){
        cout<<"End of A"<<endl;
    }
};
class B: public A{
    public:
    B(){
        cout<<"Hello"<<endl;
    }
    ~B(){
        cout<<"End of B"<<endl;
    }
};
int main(){
    B obj;
}