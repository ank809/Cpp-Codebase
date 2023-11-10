#include<iostream>
#include<vector>
using namespace std;
// here auto is a generic type 
int main(){
    // creating an object of vector class 
    vector<int>arr;
    for(int i=0; i<5; i++){
        arr.push_back(i);
    }
    cout<<"Output of begin and end ";
    for(auto i=arr.begin(); i!=arr.end(); ++i){
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"Output of cbegin and cend ";
    for(auto i= arr.cbegin(); i!=arr.cend(); ++i){
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"Output of rbegin and rend ";
    for(auto i= arr.rbegin(); i!=arr.rend(); ++i){
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"Output of crbegin and crend ";
    for(auto i= arr.crbegin(); i!=arr.crend(); ++i){
        cout<<*i<<" ";
    }
}