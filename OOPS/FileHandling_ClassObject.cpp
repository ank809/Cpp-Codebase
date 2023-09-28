// You are using GCC
#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
class Student{
    public:
    int regno;
    string name;
    int rno;

    void getdata(){
        cout<<"Enter name of student:";
        cin>>name;
        cout<<"Enter reg no:";
        cin>>regno;
        cout<<"Enter roll no:";
        cin>>rno;
    }

    void putdata(){
        cout<<name<<endl;
        cout<<regno<<endl;
        cout<<rno;
    }
};

int main(){
    Student obj1, obj2;
    obj1.getdata();
    fstream file;
    file.open("student1.txt", ios::in| ios::out);
    file.write((char*)&obj1, sizeof(obj1));
    file.seekg(0);
    file.read((char*)&obj2, sizeof(obj2));
    obj2.putdata();
}   