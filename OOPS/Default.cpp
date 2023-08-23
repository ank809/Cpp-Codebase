# include<iostream>
using namespace std;
void add(int a, int b, int c=8){
    int ans= a+b+c;
    cout<<ans;
}
int main(){
    cout<<"Enter two numbers";
    int x, y;
    cin>>x>>y;
    add(x, y);
}
