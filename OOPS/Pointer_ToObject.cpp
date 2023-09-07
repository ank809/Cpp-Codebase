# include<iostream>
using namespace std;
class Student{
    public:
    int rollno;
    int reg;
    void getData(){
        cin>>rollno;
        cin>>reg;
    }
    void putData(){
        cout<<rollno<<" "<<reg;
    }
};
int main(){
    Student stud;
    Student *ptr;
    ptr=&stud;
    ptr->getData();
    ptr->putData();
    // another way
    (*ptr).getData();
    (*ptr).putData();

}