# include<iostream>
# include<iomanip>
using namespace std;
void area(int r, float pi=3.14){
    float area= pi*r*r;
    cout<<fixed<<setprecision(5)<<area;
}
int main(){
    int x;
    cin>>x;
    area(x);
}