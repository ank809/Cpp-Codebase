#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
    int a = 11;
    int b = 78;
    int c = 24343;

    cout << "The value of a is without setw " << a << endl;
    cout << "The value of b is without setw " << b << endl;
    cout << "The value of c is without setw " << c << endl;

    // setw() is used to  set the field width used for output operations.
    cout << "The value of a with setw " << setw(5) << a << endl;
    cout << "The value of b with setw " << setw(5) << b << endl;
    cout << "The value of c with setw " << setw(5) << c << endl;

    // Setfill
    cout << "The value of a with setw " << setw(5) <<setfill('*')<< a << endl;
    cout << "The value of b with setw " << setw(5) <<setfill('*')<< b << endl;
    cout << "The value of c with setw " << setw(5) <<setfill('*')<< c << endl;

    //  Setprecision
    float d= 23.454654;
    cout<<"The value of d is "<<fixed<<setprecision(2)<<d<<endl;

    // Setbase to hexadecimal 
    cout<<"The hexadecimal value of a is "<<setbase(16)<<a<<endl;
    cout<<"The hexadecimal value of b is "<<setbase(16)<<b<<endl;
    cout<<"The hexadecimal value of c is "<<setbase(16)<<c<<endl;

    // setbase to oct
    cout<<"The oct value of a is "<<setbase(8)<<a<<endl;
    cout<<"The oct value of b is "<<setbase(8)<<b<<endl;
    cout<<"The oct value of c is "<<setbase(8)<<c<<endl;



}