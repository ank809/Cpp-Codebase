# include<iostream>
using namespace std;
void display(int &r, int &n){
    int temp=r;
    r=n;
    n=temp;
    cout<<"Registration number"<<r<<endl;
    cout<<"Roll number"<<n;
}
int main(){
    int regno= 1204004;
    int rno=13;
    display(regno, rno); 
   
}