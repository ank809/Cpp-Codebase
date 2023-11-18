#include<iostream>
using namespace std;
int main(){
    int age=23;
    try{
        if(age>=24){
            cout<<"You are allowed to drink alcohol";
        }
        else{
            throw(age);
        }
    }
    catch(int age){
        cout<<"You are not allowed to drink as your age is less than 24";
    }
   
}