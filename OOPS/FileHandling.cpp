// file accept data in form of stream 
// stream is  sequence of characters that are transferred between the program and input/output (I/O) devices.

// file is a structure and it is a inbuilt datatype

#include<iostream>
using namespace std;
#include<fstream>
int main(){

    // here ofstream is a class and we are creating object of this class 
    // ofstream is used to write into the file 
    // ifstream is  used to read from the file

    ofstream of("data.txt");
    of<<"hello";
    of<<"World";
    of.close();

    char s[2];
    ifstream iff("data.txt");
    iff>>s;
    iff.close();
    cout<<s<<endl;
}