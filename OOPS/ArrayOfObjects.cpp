# include<iostream>
using namespace std;
class Student{
    public:
    char name[30];
    int rno;
  
void getData(){
            cin>>name;
            cin>>rno;
        
}
void putData(){
        cout<<name<<" ";
        cout<<rno;
    
}
};

int main()
{
    Student stud[10];
    for(int i=0; i<10; i++){
        cout<<"Enter details of student "<<i+1<<endl;
        stud[i].getData();
        cout<<endl;
    }
    for(int i=0; i<10; i++){
        cout<<"Detail of student "<<i+1<<" ";
        stud[i].putData();
        cout<<endl;
    }


}