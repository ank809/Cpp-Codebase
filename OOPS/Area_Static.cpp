# include<iostream>
using namespace std;
class A{
    static int a;
    public:
     static void area(){
        int ans=3.14*a*a;
        cout<<ans;
    }
};
int A::a=2;
int main(){
    A::area();
}