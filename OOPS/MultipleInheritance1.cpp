#include<iostream>
using namespace std;
class A{
    public:
    void display(){
        cout<<"In A class"<<endl;
    }
};
class B{
    public:
    void display(){
        cout<<"In class B"<<endl;
    }
};
class C: public A, public B{
    public:
    void display(){
        cout<<"In class C"<<endl;
    }  
};
int main(){
    C c;
    c.display();
    c.A::display();
    c.B::display();
}