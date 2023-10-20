#include<iostream>
using namespace std;
class DMA{
    public:

    // to avoid wild pointer
    float *p=NULL;
    float *t=NULL;
    float *s=NULL;
    float *q=NULL;
    DMA(){
        p= new float;
        t= new float;
        s= new float;
        q= new float;
        cout<<"New memory allocated"<<endl;
    }
    ~DMA(){
        p= new float;
        t= new float;
        s= new float;
        q= new float;
        cout<<"New memory deallocated";
    }
};

int main(){
    DMA d;

}