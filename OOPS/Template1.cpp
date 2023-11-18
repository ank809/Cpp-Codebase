#include<iostream>
using namespace std;
template<class T>
class A{
    public:
    T a;
    A(T x){
        a=x;
    }
    void display(){
        cout<<a;
    }
};
int main(){
    A<int> a(12);
    a.display();
}