#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream off;
    off.open("country.txt");
    off<<"India";
    off<<"USA";
    off<<"Canada";
    cout<<"Data written into the file successfully\n";
    off.close();

    const int n=30;
    char s[n];
    ifstream fin;
    fin.open("country.txt");
    while(fin){
        fin.getline(s, n);
        cout<<s;
    }
    fin.close();
}