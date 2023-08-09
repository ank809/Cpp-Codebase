# include<iostream>
using namespace std;

class Calculator{
    public:
    void add(int num1, int num2){
        cout<<"Addition is"<<num1+num2<<endl;
    }
    void substract(int num1, int num2){
        cout<<"Substraction of nos"<<num1-num2<<endl;
    }
    void mul(int num1, int num2){
        cout<<"Multiplication is"<<num1*num2<<endl;
    }
    void division(int num1, int num2){
        cout<<"Division is"<<num1/num2;
    }
};
int main(){
    Calculator cal;
    int i;
    cout<<"Enter 1 for addition \n";
    cout<<"Enter 2 for substraction \n";
    cout<<"Enter 3 for multiplication \n";
    cout<<"Enter 3 for division \n";
    cin>>i;
    switch(i){
        case 1:
            cal.add(12,6);
            break;
        case 2:
        cal.substract(12,6),
        break;
        case 3:
        cal.mul(12,6);
        break;
        case 4:
        cal.division(12,6);
        break;
    }
}
