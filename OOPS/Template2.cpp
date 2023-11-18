#include<iostream>
using namespace std;
template<class T1, class T2>
class A{
    public:
    T1 a;
    T2 b;
    A(T1 x, T2 y){
        a=x;
        b=y;
    }
    void sum(){
        T1 c=  a+b;
        cout<<c<<endl;
    }
};
int main(){
    A<int, int> a(12, 10);
    A<int, float> b(12, 10.23);
    A<float, float> c(12.23, 10.10);
    A<float, int> d(12.12, 10);
    a.sum();
    b.sum();
    c.sum();
    d.sum();
}