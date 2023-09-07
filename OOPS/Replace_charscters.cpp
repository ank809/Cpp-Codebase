// You are using GCC
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    string ans;
    getline(cin, s);
    int length= s.length();
    for(int i=0; i<length; i++){
        char ch= s[i];
        if(ch=='a' || ch=='A'){
            ans+='4';
        }
        else if(ch=='e' ||ch=='E'){
            ans+='3';
        }
       else if(ch=='i' || ch=='I'){
            ans+='1';
        }
        else if(ch=='o' || ch=='O'){
            ans+='0';
        }
        else if(ch=='u'|| ch=='U'){
            ans+='v';
        }
        else{
            ans+=ch;
        }
    }
    cout<<ans;
}
