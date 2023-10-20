#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream file("Ofstream.txt");
    file<<"Hello my name is ankita";
    file.close();

    char s[100];
    string c;
   
     ifstream iff("Ofstream.txt");
    iff>>s;
    cout<<s;
    iff.close();
}