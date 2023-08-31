// You are using GCC
#include<iostream>
using namespace std;
class FitnessData{
public:
  char name[30];
  double init;
  double update;
};

int main(){
    FitnessData FitnessData;
    double *weightPtr= &FitnessData.update;
    cin>>FitnessData.name;
    cin>>FitnessData.init;
    cin>>FitnessData.update;
    cout<<"Updated fitness information: "<<endl;
    cout<<"Name: "<<FitnessData.name<<endl;
    cout<<"Weight: "<<*weightPtr;
}