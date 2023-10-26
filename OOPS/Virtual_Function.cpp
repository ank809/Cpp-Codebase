// when you have func with same name in both derived and base class and if you want to access the derived func
// then make the function present in the  base class virtual otherwise the function in base class will be
// called automatically
// and it executes during runtime or binds at runtime and non-virtual function binds at compile time
//  Early Binding - compile time
// Late Binding - run time 
// virtual function - can't be static, friend func of another class , should be accessed using pointer or reference 
// of base class

#include<iostream>
using namespace std;
class base{
    public:
    virtual void print(){
        cout<<"print base class "<<endl;
    }
    // virtual void show(){
    //     cout<<"show base class"<<endl;
    // }
    void show(){
        cout<<"show base class"<<endl;
    }
};
class derived: public base{
public:
    virtual void print(){
        cout<<"print derived class "<<endl;
    }
    void show(){
        cout<<"show derived class"<<endl;
    }
};
int main(){
    // base* ptr;
    // derived d;
    // ptr=&d;
    base *ptr= new derived();
    ptr->print();
    ptr->show();
}