#include<iostream>
using namespace std;
#include<fstream>

int main(){
    ofstream off("result.txt");
    off<<"Hello World!";
    off.close();

    cout<<"data saved "<<endl;

    char s[20];
    ifstream iff("result.txt");
    iff>>s;
    cout<<s;
    iff.close();

}