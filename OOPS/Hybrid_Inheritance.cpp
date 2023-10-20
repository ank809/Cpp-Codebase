#include<iostream>
using namespace std;
class A{
    //public:
    protected: 
    void disA(){
        cout<<"I am in A"<<endl;
    }
};
class B: public A{
    //public: 
    protected: 
    void disB(){
        cout<<"I am in B"<<endl;
    }
};
class D{
   // public:
   protected: 
     void disD(){
        cout<<"I am in D"<<endl;
    }
};
class C: public B, public D{
    //public: 
    protected: 
    void disC(){
        cout<<"I am in C"<<endl;
    }
};
int main(){
    C c;
    c.disA();
    c.disB();
    c.disC();
    c.disD();
}
