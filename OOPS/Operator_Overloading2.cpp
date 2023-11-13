#include<iostream>
using namespace std;
class A{
    public:
    int n;
    A():n(14){}
    void operator ++(){
        --n;
        cout<<n;
    }
};
int main(){
    A a;
    ++a;

}