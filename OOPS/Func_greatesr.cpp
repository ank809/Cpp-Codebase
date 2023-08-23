# include<iostream>
using namespace std;
int greatest(int, int , int);
int main(){
    cout<<"Enter three numbers\n";
    int a, b, c;
    cin>>a>>b>>c;
    int ans= greatest(a, b, c);
    cout<<"Ans is"<<ans;

}
int greatest(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }
    else if(a<b && b>c){
        return b;
    }
    else{
        return c;
    }
}