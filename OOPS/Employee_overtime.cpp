#include<iostream>
using namespace std;
class Employee {
    public:
    char name[30];
    double rate;
    int hours;
};
int main(){
    int n;
    cin>>n;
    Employee emp[n];
    for(int i=0; i<n; i++){
        cin>>emp[i].name;
        cin>>emp[i].rate;
        cin>>emp[i].hours;
    }
    cout<<"Employee Information:"<<endl;
    for(int i=0; i<n; i++){
        cout<<"Employee Name: "<<emp[i].name<<endl;
        double salary;
        if(emp[i].hours>40){
        double overtime= emp[i].hours-40;
        salary= (emp[i].rate * emp[i].hours) + (emp[i].rate * 1.5 * overtime);
        }
        else{
           salary= emp[i].rate*emp[i].hours;
        }
        cout<<"Salary: "<<salary<<endl;
    }
}