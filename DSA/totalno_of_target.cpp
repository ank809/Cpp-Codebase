#include <iostream>
using namespace std;
int main(){
    int i, target, position=-1, count=0;
    int arr[5]={1,10,12,4,6};
    target=12;

    for(i=0; i<5; i++){
        if(arr[i]==target){
            count+=1;
        }
    }
    if(count==0){
        cout<<"Element not present";
    }
    else{
        cout<<"Element present "<<count<<" times";
    }
}