#include<iostream>
#include<string>
using namespace std;
void checkPasswordStrength(string password){
    int i=0;
    int length=password.length();
    if(length<=6){
        cout<<"Weak";
    }
    if(length>6 && length<8){
        cout<<"Medium";
    }
    if(length>=8){
        cout<<"Strong";
    }
}
int main(){
    string password;
    cin>>password;
    checkPasswordStrength(password);
}