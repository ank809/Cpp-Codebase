#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="helloworld";
    char ch= 'o';
    int count=0;
    int len= str.length();
    for(int i=0; i<len; i++){
        if(str[i]==ch){
            count++;
        }
    }
    cout<<"Number of time "<<ch<<" is present in string is "<< count;
}