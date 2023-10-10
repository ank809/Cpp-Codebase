// You are using GCC
#include<iostream>
using namespace std;
class A{
    public:
  int n1, n2, n3, n4;
  void get(){
      cin>>n1>>n2;
      cin>>n3>>n4;
  }
  void print(){
      int numerator= n1*n3;
      int deno= n2*n4;
      int commondivisor= gcd(numerator, deno);
      numerator /=commondivisor;
      deno/= commondivisor;
      cout<<"The result of multiplication is: "<<numerator<<"/"<<deno<<endl;
  }
  int gcd(int a, int b){
      if(b==0){
          return a;
      }
      return gcd(b, a%b);
  }
};
int main(){
    A a;
    a.get();
    a.print();
}