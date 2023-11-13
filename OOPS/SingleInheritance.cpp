#include<iostream>
using namespace std;
class Parent{
    public:
    int a=9;
    int b=2;
    int mul(){
        int ans= a*b;
        return ans;
    }
};
class Multiplication: public Parent{
    public:
    void putdata(){
        int ans= mul();
        cout<<ans;
    }
};
int main(){
    Multiplication m;
    m.putdata();
}