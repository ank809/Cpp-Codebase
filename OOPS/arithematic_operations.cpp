# include <iostream>
using namespace std;

class Operations{
    public:
    int a, s, d ,m;
    void add(int n,int  m){
        a=n+m;
        cout<<"Addition of nos "<<a<<endl;
    }
    void substract(int num1, int num2){
        s=num1-num2;
        cout<<"Substraction of nos"<<s<<endl;
    }
    void mul(int num1, int num2){
        m=num1*num2;
        cout<<"Multiplication is"<<m<<endl;
    }
    void division(int num1, int num2){
        d= num1/num2;
        cout<<"Division is"<<d;
    }
};
int main(){
    Operations op;
    op.add(12,6);
    op.substract(12,6);
    op.mul(12,6);
    op.division(12,6);
}
