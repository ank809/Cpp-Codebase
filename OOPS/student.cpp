#include<iostream>
using namespace std;
class Student{
    public:
      char name[10];
      int rno;
      int age;
      void getdata(){
          cout<<"Enter name ";
           cin>>name;
           cout<<"\n Enter rno ";
           cin>>rno;
           cout<<"\n Enter age ";
           cin>>age;
           displaydata(name, rno, age);
      }
      void displaydata(char name[], int rno, int age){
          cout<<"Name is ";
          cout<<name;
          cout<<"Roll no. ";
          cout<<rno;
          cout<<"age ";
          cout<<age;
      }
      };
      int main(){
          Student x; 
          x.getdata();
          }
          
