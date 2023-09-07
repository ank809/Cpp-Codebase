// You are using GCC
#include<iostream>
# include<string>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n;
    cin>>n;
    int length= str.length();
    string encrypt;
    for(int i=0; i<length; i++){
        char encryptedchar= str[i]+n;
        encrypt+=encryptedchar;
    }
    cout<<encrypt;
}
