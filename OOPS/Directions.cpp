// You are using GCC
# include<iostream>
using namespace std;
class Navigator{
    public:
    int n;
    enum directons{North, East, West, South};
    void get(){
        cin>>n;
    }
    void ans(){
    switch (n){
        case 1:
        cout<<"We are headed towards North.";
        break;
        case 2:
        cout<<"We are headed towards East.";
        break;
        case 3:
        cout<<"We are headed towards West.";
        break;
        case 4:
        cout<<"We are headded towards South.";
        break;
    }
    if(n!=1 && n!=2 && n!=3 && n!=4){
        cout<<"Invalid Input";
    }
    }
};
int main(){
    Navigator navi;
    navi.get();
    navi.ans();
}
