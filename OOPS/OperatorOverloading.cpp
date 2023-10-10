#include<iostream>
using namespace std;
class ABC{
    public:
    int x, y, z;
    ABC(int a, int b, int c){
        x=a;
        y=b;
        z=c;
    }
    void operator-(){
        x=-x;
        y=-y;
        z=-z;
    }
    void display(){
        cout<<x<<" ";
        cout<<y<<" ";
        cout<<z<<endl;
    }
};
int main(){
    ABC a(10, -46, -8);
    a.display();
    -a;
    a.display();
}