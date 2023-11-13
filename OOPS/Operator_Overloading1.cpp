#include<iostream>
using namespace std;
class Y{
    public:
    int x;
    int y;
    Y(int a, int b){
        x=a;
        y=b;
    }
    Y operator +(Y s){
        int m= x+s.x;
        int n= y+s.y;
       return Y(m, n);
    }
    void display(){
        cout<<x<<" "<<y;
    }
};
int main(){
    Y y1(12, 23);
    Y y2(10, 11);
    Y y3= y2+y1;
    y3.display();

}