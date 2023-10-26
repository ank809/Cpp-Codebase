#include<iostream>
using namespace std;
class S{
    public:
    string s;
    S(){}
    S(string str){
        s=str;
    }

    S operator +( S str){
        S name;
        name= s+str.s;
        return name;
    }
};
int main(){
    S s1("Ankita ");
    S s2("Thakur");
    S s3;
    s3=s1+s2;
    cout<<s3.s;

}