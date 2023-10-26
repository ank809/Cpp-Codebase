// in this code the order of calling og cons and desc is getting disturbed so for that reason we are using virtual 
// base class constructor

#include<iostream>
using namespace std;
 class base{
    public:
    base(){
        cout<<"Constructor of base class"<<endl;
    }
    virtual ~base(){
        cout<<"Destructor of base class"<<endl;
    }
 };
 class derived: public base{
    public:
    derived(){
         cout<<"Constructor of derived class"<<endl;
    }
    ~derived(){
         cout<<"Destructor of derived class"<<endl;
    }

 };
 int main(){
    base *b=  new derived();
    delete b;
 }