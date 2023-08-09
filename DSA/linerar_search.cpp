#include <iostream>
using namespace std;
int main(){
    int i, target, position=-1;
    int arr[5]={12,10,8,4,6};
    target=1;

    for(i=0; i<5; i++){
        if(arr[i]==target){
            cout<<"Element found";
            position=i;
            break;
        }
    }
    if(position==-1){
        cout<<"Element not found";
    }
}