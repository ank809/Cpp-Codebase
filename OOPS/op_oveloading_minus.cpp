#include<iostream>
using namespace std;
class D{
    int a;
    public:
    D(int y){
        a=y;
    }

    void operator -(D d){
        int ans= d.a-a;
        cout<<ans;
    }
};
int main(){
    D d1(82);
    D d2(97);
    d2-d1;
}