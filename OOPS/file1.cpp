#include<iostream>
#include<fstream>
using namespace std;

class Stud{
    public:
    string name;
    int rno;

    void get(){
        //cin>>name>>rno;
        name="ankita";
        rno= 45;
    }

    void put(){
        cout<<name<<" "<<rno;
    }
};
int main(){
    Stud obj1;
    Stud obj2;
    obj1.get();
    fstream file;
    file.open("ankita.txt", ios::in| ios::out);
    file.write((char*)&obj1, sizeof(obj1));
    file.seekg(0);
    file.read((char*)&obj2, sizeof(obj2));
    obj2.put();
    file.close();
}