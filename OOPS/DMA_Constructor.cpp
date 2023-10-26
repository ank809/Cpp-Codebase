// We need DMA because if in a organisation people are leaving and entering then we use this 
// in static code is not change and you need to write the code again     

// Virtual Destructor:  
#include<iostream>
using namespace std;
class Cons{
    int *arr;
    public:
    Cons(){
        arr=new int[8];
        cout<<" Dynamic Constructor";
    }
};
int main(){
    Cons c;
}