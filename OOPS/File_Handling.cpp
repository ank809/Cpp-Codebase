#include<iostream>
#include<fstream>
using namespace std;
class Student{
    public:
    int regno;
    string name;
    int age;
    void getdata(){
        regno= 12202002;
        name= "Ankita";
        age= 19;
    }
    void putdata(){
        cout<<name<<" "<<regno<<" "<<age;
    }
};
int main(){
    Student obj1;
    Student obj2;
    obj1.getdata();
    fstream file;
    file.open("details.txt", ios::in | ios::out);
    file.write((char*)&obj1, sizeof(obj1));
    file.close();
    file.seekg(0);
    file.read((char*)&obj2, sizeof(obj2));
    obj2.putdata();
    file.close();

}