# include<iostream>
using namespace std;
class Student{
    private:
    static int a;
    static int b;
    public:
    static void print(){
        cout<<a<<" "<<b;
    }
};
int Student::a=10;
int Student::b=20;
int main(){
    Student::print();
}