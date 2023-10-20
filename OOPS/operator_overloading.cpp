#include<iostream>
using namespace std;
class A{
    int x;
    public:
    A(int y){
        x=y;
    }

    void operator +(A a){
        int m= x+a.x;
        cout<<m<<" "<<a.x;
    }

};
int main(){
    A a1(78);
    A a2(4);
    a1+a2;

}