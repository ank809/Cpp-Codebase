
#include <iostream>
# include<string>
using namespace std;

int main() {
    string str;
    cin>>str;
    char c;
    cin>>c;
    cout<<str<<endl;
    cout<<c<<endl;
    int len= str.length();
    int count=0;
    for(int i=0; i<len; i++){
        if(str[i]==c){
            count++;
        }
    }
    cout<<count;
}