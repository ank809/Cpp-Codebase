#include<iostream>
using namespace std;
class Animal{
    public:
    void eating(){
        cout<<"Animal is eating"<<endl;
    }
};
class Dog: public Animal{
    public:
    void bark(){
        cout<<"Dog is barking"<<endl;
    }
};
class BabyDog: public Dog{
    public:
    void crying(){
        cout<<"Baby Dog is crying"<<endl;
    }
};
int main(){
    BabyDog b;
    b.eating();
    b.bark();
    b.crying();
}