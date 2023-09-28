#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class RecordStudent{
    public:
    string name;
    int regno
    
    string subject;
    RecordStudent(string sname, int rno, string sub){
        name= sname;
        regno= rno;
        subject=sub;
    }
    
};

int main(){
    RecordStudent record("ankita", 12, "cse");
    ofstream off;
    off.open("student.txt");
    off<<record.name;
    off<<record.regno;
    off<<record.subject;
    cout<<"DATA WRITTEN ";
    off.close();

    // read

    int n=40;
    char s[n];

    ifstream fin;
    fin.open("student.txt");
    while(fin){
        fin.getline(s, n);
        cout<<s;
    }
    fin.close();


}