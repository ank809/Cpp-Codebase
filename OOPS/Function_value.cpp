 // the actual parameters does not change when we change the formal ones
# include<iostream>
using namespace std;
void display(int regno, int rno){ // formal parameters
    cout<<"Registration number"<<regno<<endl;
    cout<<"Roll number"<<rno;
}
int main(){
    int regno= 1204004;
    int rno=13;
    display(regno, rno); // actual parameters 
   
}