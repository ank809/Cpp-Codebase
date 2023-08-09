#include<iostream>
using namespace std;
class Circle{
    public:
    int r;
    float pi=3.14;
    int a;
    void area(){
        a= pi*r*r;
        cout<<"Area is "<<a;
    }

};
int main(){
    int i;
    Circle circle1;
    Circle circle2;
    Circle circle3;
    circle1.r=3;
    circle2.r=5;
    circle3.r=7;
    circle1.area();
    circle2.area();
    circle3.area();
    }