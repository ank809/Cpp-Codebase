// You are using GCC
# include<iostream>
using namespace std;
class Student{
    public:
    int rno;
    int mark1, mark2, mark3;
};
int main(){
    int n;
    cin>>n;
    Student stud[n];
    int maxtotal=-1;
    int maxtotalr=-1;
    for(int i=0; i<n; i++){
        cin>>stud[i].rno;
        cin>>stud[i].mark1>>stud[i].mark2>>stud[i].mark3;
    }
    for(int i=0; i<n; i++){
        int total= stud[i].mark1+stud[i].mark2+stud[i].mark3;
        if(total>maxtotal){
            maxtotal=total;
            maxtotalr=i+1;
        }
        cout<<total<<endl;
    }
    int marks1=-1;
    int marks2=-1;
    int marks3= -1;
    int rollno1=0;
    int rollno2=0;
    int rollno3=0;
    for(int i=0; i<n; i++){
        if(marks1<stud[i].mark1){
            marks1= stud[i].mark1;
            rollno1=i+1;
        }
        if(marks2<stud[i].mark2){
            marks2=stud[i].mark2;
            rollno2=i+1;
        }
        if(marks3<stud[i].mark3){
            marks3=stud[i].mark3;
            rollno3=i+1;
        }
    }
    cout<<rollno1<<" "<< marks1<<endl;
    cout<<rollno2<<" "<<marks2<<endl;
    cout<<rollno3<<" "<<marks3<<endl;
    cout<<maxtotalr<<" " <<maxtotal;
}