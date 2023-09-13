#include<iostream>
using namespace std;
class Shapes{
    public:
    int a;
    int b;
    Shapes(int len, int breadth){
        a=len;
        b= breadth;
    }

    void area(){
        int area= a*b;
        cout<<"Area of rectangle is "<<area;
    }
};

int main(){
    Shapes rectangle(5, 6);
    rectangle.area();
}