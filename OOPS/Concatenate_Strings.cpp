// You are using GCC
# include<iostream>
using namespace std;
# include<string.h>

void concatenateStrings(char a[30] , char b[50]);
int main(){
    char s1[30];
    char s2[20];
    cin>>s1;
    cin>>s2;
    concatenateStrings(s1, s2);
}
void concatenateStrings(char a[30], char b[20]){
    strcat(a, b);
    cout<<a;
}