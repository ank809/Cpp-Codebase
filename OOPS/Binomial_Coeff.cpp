// You are using GCC
# include<iostream>
using namespace std;
class BinomialCoeffSum{
    public: 
    BinomialCoeffSum(int n): num(n){}
    long long calculateSum();
    private :
    int num;
};
long long BinomialCoeffSum:: calculateSum(){
    long long result= 1<<num;
    return result;
}
int main(){
    int n;
    cin>>n;
    BinomialCoeffSum  *binomcalc= new BinomialCoeffSum(n);
    long long result= binomcalc-> calculateSum();
    cout<<result;
}