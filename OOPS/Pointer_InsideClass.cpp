// Pointer inside a class 

# include<iostream>
using namespace std;
class Array{
    int *arr;
    int size;
    int sum=0;
    public:
    void getdata(int n){
        size=n;
        arr= new int[n]; // memory location of n blocks will be dine
        for(int i=0; i<n; i++){
            cin>>*(arr+i);// it is moving the pointer to the next location 
        }
    }
    void add(){
        for(int i=0; i<size; i++){
            sum+=*(arr+i);
        }
        cout<<"Sum is"<<sum;
    }
};
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    Array a;
    a.getdata(n);
    a.add();
}