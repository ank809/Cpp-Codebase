# include<iostream>
# include<iomanip>
using namespace std;
int main(){
    int x, y;
    float  a;
    int z;
    cin>>a;
    cin>>z;
    cin>>x>>y;
    cout<<"Example of hex and oct of x ";
    cout<<hex<<x<<" ";
    cout<<oct<<x;
    cout<<endl;
     cout<<"Example of hex and oct of y ";
    cout<<hex<<y<<" ";
    cout<<oct<<y;
    cout<<endl;
    cout<<"Example of setprecision of a ";
    cout<<fixed<<setprecision(3)<<a;
    cout<<endl;
    cout<<"Example of setw and setfill: ";
    cout<<setw(12)<<z<<setfill('#');
    

}