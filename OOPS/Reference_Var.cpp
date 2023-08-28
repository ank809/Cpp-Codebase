# include<iostream>
using namespace std;
struct student{
    int regno=1221;
    int rno=1;
    char section= 'A';
};
struct school{
    student s;
};
struct university{
    school sch;
};
int main(){
    university u;
    int &reg= u.sch.s.regno;
    int &rno= u.sch.s.rno;
    char & sec= u.sch.s.section;
    cout<<reg<<" "<<rno<<" "<<sec;
}