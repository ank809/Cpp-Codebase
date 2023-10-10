#include<iostream>
using namespace std;
class AB{
    public:
    int a, b;
    AB(int x, int y){
        a=x;
        b=y;
    }
    void operator --(){
        a=a+5;
        b=b*2;
    }
    void display(){
        cout<<a<<" ";
        cout<<b<<" "<<endl;
    }
};
int main(){
    AB a(6, 4);
    a.display();
    --a;
    a.display();
}