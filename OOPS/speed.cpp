# include<iostream>
# include<iomanip>
using namespace std;
void calculateSpeed(double distance, double tim, double acc_train, double acc_plane){
    double speed_car= distance/tim;
    cout<<fixed<<setprecision(2)<<speed_car<<endl;
    double speed_train= (distance/tim)+acc_train*tim;
    cout<<fixed<<setprecision(2)<<speed_train<<endl;
    double speed_plane= (distance/tim)+acc_plane*tim;
    cout<<fixed<<setprecision(2)<<speed_plane;
    
}

int main(){
    double distance;
    double tim;
    double acc_train;
    double acc_plane;
    cin>>distance>>tim>>acc_train>>acc_plane;
    calculateSpeed(distance, tim, acc_train, acc_plane);
    
}