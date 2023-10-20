#include<iostream>
using namespace std;
class University{
    public:
    string univ_name;
    string school;
    int school_code;
};
class Mechanical: public University{
    public:
    Mechanical(){
    univ_name="LPU";
    school="Mechanical Engineering";
    school_code= 1221;
    }
     void display(){
        cout<<univ_name<<" "<<school<<" "<<school_code<<endl;
    }
};
class Computer_Science: public University{
    public:
    Computer_Science(){
    univ_name= "LPU";
    school= "Computer Science";
    school_code= 1421;
    }
    void display(){
        cout<<univ_name<<" "<<school<<" "<<school_code;
    }
};
int main(){
    Mechanical mec;
    mec.display();
    Computer_Science comp;
    comp.display();
}
