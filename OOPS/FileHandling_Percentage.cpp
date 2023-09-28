#include<iostream>
#include<fstream>
using namespace std;
class Student{
    public:
    int mark1, mark2, mark3, mark4, mark5;
    void getData(){
        cout<<"Enter marks of student:";
        cin>>mark1>>mark2>>mark3>>mark4>>mark5;
    }

    void putData(){
        cout<<"Marks of student are"<<mark1<< " "<< mark2<<" " << mark3<<" " << mark4<<"  " << mark5<<endl;
        cout<<"Percentage is ";
        int total= (mark1+mark2+mark3+mark4+mark5)/5;
        cout<<total<<"%";
    }

};
int main(){
    Student obj1, obj2;
    fstream file;
    //obj1.getData();
    file.open("percentage.txt", ios::in| ios::out);
    file.write((char*) &obj1, sizeof(obj1));
    file.seekg(0);
    file.read((char*) &obj2, sizeof(obj2));
    obj2.putData();
}