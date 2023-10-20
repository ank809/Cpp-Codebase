#include<iostream>
using namespace std;

class Base{
    public:
    
    void hello(){
        cout<<"Hello:";
    }
};
class Derived: public Base{
    public:
    void hello(){
        cout<<"Hello  hi:"<<endl;
    }
};

int main(){
    Derived obj;
    obj.hello();
    //calling the base class function
    obj.Base::hello();
}
