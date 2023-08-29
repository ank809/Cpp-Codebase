// You are using GCC
# include<iostream>
# include<cmath>
# include<iomanip>
using namespace std;
double distanceTo(double x1, double y1, double x2, double y2){
    double dx= x2-x1;
    double dy= y2-y1;
    return sqrt(dx*dx+ dy*dy);
}
int main(){
    double x1, x2, y1, y2;
    cin>>x1>>y1;
    cin>>x2>>y2;
    double distance= distanceTo(x1, y1, x2, y2);
    cout<<fixed<<setprecision(2)<<distance;
}
