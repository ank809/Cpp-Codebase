// You are using GCC
#include<iostream>
#include<string>
using namespace std;
class RepeatableString{
    public:
  string str; 
  void getData(){
      cin>>str;
  }
  RepeatableString operator *(int n){
      RepeatableString result;
      result.str= this->str;
      for(int i=1; i<n; i++){
          result.str+=this->str;
      }
      return result;
  }
  void print(int n){
      RepeatableString repeat= *this*n;
      cout<<"Result: "<<repeat.str;
  }
};
int main(){
    RepeatableString s;
    s.getData();
    int n;
    cin>>n;
    s.print(n);
}