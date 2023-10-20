#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"In A"<<endl;
    }
    ~A(){
        cout<<"end A"<<endl;
    }
};
class B: public A{
     public:
    B(){
        cout<<"In B"<<endl;
    }
    ~B(){
        cout<<"end B"<<endl;
    }

};
class C: public B{
     public:
    C(){
        cout<<"In C"<<endl;
    }
    ~C(){
        cout<<"END C"<<endl;
    }
};
class D: public C{
    public:
    D(){
        cout<<"In D"<<endl;
    }
    ~D(){
        cout<<"END D"<<endl;
    }
};
int main(){
     D obj;
}