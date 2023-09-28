#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char s[30];
    ofstream off;
    off.open("hello.txt", ios::out);
    off<<"Hello World";
    off.close();

   fstream iff;
    iff.open("hello.txt", ios::in| ios::out);
    cout<<iff.tellg()<<endl;
    cout<<iff.tellp()<<endl;

    iff.seekg(7);
    iff.seekp(7);
    cout<<iff.tellg()<<endl;
    cout<<iff.tellp()<<endl;
    iff>>s;
    cout<<s;

}