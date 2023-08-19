// with class 
# include<iostream>
using namespace std;
class A{
    public:
    int multi(int a, int b);
    int cubic(int a);
};
inline int A::multi (int a, int b){
    return a*b;
}
inline  int A::cubic(int a){
        return a*a*a;
    }
int main(){
    int a, b;
    cin>>a;
    cin>>b;
    A obj;
    int ans1= obj.multi(a, b);
    cout<<ans1<<endl;
    int ans2=obj.cubic(a);
    cout<<ans2;
}

// # include<iostream>
// using namespace std;
// inline int multi(int a, int b){
//     return a*b;
// }
// inline int cubic(int a){
//     return a*a*a;
// }
// int main(){
//     int a, b;
//     cin>>a;
//     cin>>b;
//     cout<<multi(a, b)<<endl;
//     cout<<cubic(a);

// }