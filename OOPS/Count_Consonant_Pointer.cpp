
# include<iostream>
# include <cctype>
using namespace std;

int countconsonant( char* sentence){
    int count= 0;
    while(*sentence){
        char c= tolower(*sentence);
        if(c>='a' && c<='z' && c!='a'&& c!='e'&& c!='i'&& c!='o' && c!='u'){
            count++;
        }
        sentence++;
    }
    return count;
}
int main(){
    char line[1000];
    cin.getline(line, sizeof(line));
    char* linepointer= line;
    char** pointertolinepointer=&linepointer;
    int count= countconsonant(* pointertolinepointer);
    cout<<count;
}