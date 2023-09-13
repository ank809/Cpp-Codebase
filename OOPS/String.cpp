#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1="1234";
    string s2=  "abcd";
    cout<<s1.append(s2)<<endl;

    cout<<s1.append(s2, 1, 2)<<endl;

    cout<<s1.insert(4, s2)<<endl;  // after fourth location array is inserted or 4 here is the index

    cout<<s1.erase(4, 5)<<endl;

    cout<<s2.replace(1, 3, s1)<<endl;
}