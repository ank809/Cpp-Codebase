#include<iostream>
using namespace std;
int main(){
    char ch='.';
    if(ch>=65 && ch<=91 || ch>=97 && ch<=127){
        if(ch>=65 && ch<=91 ){
            ch= ch+32;
        }
        else{
            ch=ch-32;
        }
    }
    else{
        cout<<"iInvalid input";
    }

    cout<<ch;
}