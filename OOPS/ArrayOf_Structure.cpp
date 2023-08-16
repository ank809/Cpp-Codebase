# include<iostream>
# include<string>
using namespace std;
struct Student{
        string name;
        int rno;
};
int main(){
    int n=5;
    Student s[n];
    for(int i=0; i<n; i++){
        cin>>s[i].name;
        cin>>s[i].rno;
    }
    cout<<"Details of students: "<<endl;
    for(int i=0; i<n; i++){
        cout<<s[i].name<<" ";
        cout<<s[i].rno<<" ";
        cout<<endl;
    }
}