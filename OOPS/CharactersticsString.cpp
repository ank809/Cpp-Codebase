#include<iostream>
#include<string>
using namespace std;
int main(){
    string str= "welcome";
    cout<<"Length= "<<str.length()<<endl;
    cout<<"Size= "<<str.size()<<endl;
    cout<<"MaX Size "<<str.max_size()<<endl;
    cout<<"Empty "<<(str.empty()? " yes":" no")<<endl;
}