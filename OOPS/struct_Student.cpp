#include<iostream>
#include<string>
using namespace std;
struct Student{
        string name;
        int regno;
        int age;
};
int main(){
    Student student;
    cin>>student.name;
    cin>>student.age;
    cin>>student.regno;
    cout<<"Student name is:"<<student.name<<endl;
    cout<<"Student's age is :"<<student.age<<endl;
    cout<<"Registration number is:"<<student.regno<<endl;
    Student s2;
     cin>>s2.name;
    cin>>s2.age;
    cin>>s2.regno;
    cout<<"Student name is:"<<s2.name<<endl;
    cout<<"Student's age is :"<<s2.age<<endl;
    cout<<"Registration number is:"<<s2.regno<<endl;
    Student s3;
     cin>>s2.name;
    cin>>s2.age;
    cin>>s2.regno;
    cout<<"Student name is:"<<s2.name<<endl;
    cout<<"Student's age is :"<<s2.age<<endl;
    cout<<"Registration number is:"<<s2.regno;
}