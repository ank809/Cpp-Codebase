#include<iostream>
using namespace std;

class Circle{
public:
  int r;
  double a;
  float pi=3.14;
  void area(){
   a= pi*r*r;
    cout<<"Area is"<<a;
  }

};
int main(){
    Circle circle;
    cout<<"Enter value of radius";
    cin>>circle.r; 
    circle.area();

}