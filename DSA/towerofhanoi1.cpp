#include<iostream>
using namespace std;
int count=0;
void towerofhanoi(int n, char s, char a, char d){
    count++;
    if(n==1){
        cout<<"Move the disk 1 from "<<s<< " to "<<d<<endl;
        return;
    }
    towerofhanoi(n-1, s, d, a);
    cout<<"Move the disk "<< n << " from "<< s<< " "<<" to "<<d<<endl;
    towerofhanoi(n-1, a, s, d);
}
int main(){
    int n;
    n=3;
    towerofhanoi(n, 'A', 'B', 'C');
    cout<<"Total number of moves "<<count;

}