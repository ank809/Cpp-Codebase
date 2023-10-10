// You are using GCC
#include<iostream>
using namespace std;
class Bicycle{
    public:
  int gear, speed;
  void get(){
      cin>>gear>>speed;
  }
};
class MountainBike: public Bicycle{
    public:
    int seatheight;
    void get(){
        Bicycle::get();
        cin>>seatheight;
    }
    void print(){
        cout<<"No of gears are "<<gear<<endl;
        cout<<"Speed of bicycle is "<<speed<<endl;
        cout<<"Seat height is "<<seatheight;
    }
};
int main(){
    MountainBike m;
    m.get();
    m.print();
}