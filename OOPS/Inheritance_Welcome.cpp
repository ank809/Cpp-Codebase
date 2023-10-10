// You are using GCC
#include<iostream>
using namespace std;
class Welcome{
    public:
    Welcome(){
    cout<<"Welcome!! ";
    }
};
class Hello:public Welcome{
    public:
    string name;
    void get(){
        cin>>name;
    }
    void print(){
    cout<<"Hi, "; 
    cout<<name;
    }
};
int main(){
    Hello h;
    h.get();
    h.print();
}