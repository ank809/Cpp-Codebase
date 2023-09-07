// You are using GCC
#include<iostream>
#include<string>
using namespace std;
int main(){
    int numLessons;
    cin>>numLessons;
    cin.ignore();
    string title[numLessons];
    string content[numLessons];
    for(int i=0; i<numLessons; i++){
        getline(cin,title[i]);
        getline(cin,content[i]);
    }
    int numExercises;
    cin>>numExercises;
    cin.ignore();
    string question[numExercises];
    string ans[numExercises];
    for(int i=0; i<numExercises; i++){
        getline(cin,question[i]);
        getline(cin,ans[i]);
    }
    int userindex;
    cin>>userindex;
    cin.ignore();
    string userans;
    getline(cin,userans);
    for(int i=0; i<numLessons; i++){
        cout<<"Title: "<<title[i]<<endl;
        cout<<"Content: "<<content[i]<<endl;
        cout<<endl;
    }
    if(userans==ans[userindex-1]){
        cout<<"Exercise "<< userindex<<" completed. Correct answer!"; 
    }
    else{
        cout<<"Excersice "<<userindex<<" completed. Wrong answer!";
    }
}