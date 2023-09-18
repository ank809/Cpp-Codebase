#include<iostream>
using namespace std;
class Counter{
    int id;
    public:
    Counter(int l){
        id=l;
        cout<<"constructor with id: "<<id<<endl;
    }
    ~Counter(){
        cout<<"destructor with id: "<<id<<endl;
    }
};

int main(){
    Counter c1(1);
    Counter c2(2);
    Counter c3(3);
    cout<<"main ends"<<endl;
}

// destructor execute when life of object ends 
