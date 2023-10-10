// You are using GCC
#include<iostream>
using namespace std;
class SilverStall{
    public:
    string name;
    string detail;
    string owner;
    int cost;
    void get(){
        cin>>name>>detail>>owner>>cost;
    }
    void print(){
        cout<<cost;
    }
};
class GoldStall: public SilverStall{
    public:
    int tvset;
    int cost=100;
    void get(){
        SilverStall::get();
        cin>>tvset;
        cost=tvset*cost+SilverStall::cost;
    }
    void print(){
        cout<<cost;
    }
    
};
class PlatinumStall: public GoldStall{
    public:
    int projector;
    int cost=500;
    void get(){
        GoldStall::get();
        cin>>projector;
    cost=projector*cost+GoldStall::cost;
    }
    void print(){
        cout<<cost;
    }
};
int main(){
    int n;
    cin>>n;
    switch(n){
        case 1:{
        SilverStall s;
        s.get();
        s.print();
        }
        break;
        case 2:{
        GoldStall g;
        g.get();
        g.print();}
        break;
        case 3:{
        PlatinumStall p;
        p.get();
        p.print();
        break;
        }
        default:
        cout<<"Invalid Input";
    }
    
}








