// You are using GCC
#include<iostream>
using namespace std;
class Salesperson{
    public:
    char name[30];
    int m;
    int *arr;   
};
int main(){
    Salesperson salesperson;
    Salesperson *Salesperson= &salesperson;
    cin>>salesperson.name;
    cin>>salesperson.m;
    salesperson.arr= new int [salesperson.m];
    for(int i=0; i<salesperson.m; i++){
        cin>>salesperson.arr[i];
    }
    
    cout<<"Salesperson Details: "<<endl;
    cout<<"Name: "<<salesperson.name<<endl;
    int total=0;
    int avg=0;
    for(int i=0; i<salesperson.m; i++){
         total= total+salesperson.arr[i];
    }
    cout<<"Total Sales: "<<total<<endl;
    for(int i=0; i<salesperson.m; i++){
        avg= total/salesperson.m;
    }
    cout<<"Average Sales: "<<avg;
    delete salesperson.arr;
    
}