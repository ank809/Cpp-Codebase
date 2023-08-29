// You are using GCC
# include<iostream>
# include<string>
using namespace std;
void BankAccount(int *bal){
    cout<<"Account Balance: $"<<*bal<<endl;
    cout<<"Error: Dangling pointer detected!";
}
int main(){
    int account;
    cin>>account;
    int bal;
    cin>>bal;
    int *ptr= &bal;
    BankAccount(ptr);
    
}