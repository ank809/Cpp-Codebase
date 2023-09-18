// We use initializer list when we want to initialize the data members before the constructor starts executing

// if we make constructor private then the we are not able to call constructor explicitly thats why ae code does not work
#include<iostream>
using namespace std;
class Rectangle{
    int l, b;
    public:
    Rectangle(int x, int y): l(x),b(y){
        // empty body of the constructor
    }
    void area(){
        cout<<"Area is "<<l*b;
    }

};

int main(){
    Rectangle rectangle(12, 14);
    rectangle.area();
}