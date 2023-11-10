#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[15];
    int hashtable[15];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<10; i++){
        hashtable[i]=-1;
    }
    for(int i=0; i<n; i++){
        int index= arr[i]%10;
        while(hashtable[index]!=-1){
            index= (index+1)%10;
        }
        hashtable[index]=arr[i];
    }
    cout<<"Hash table"<<endl;
    for(int i=0; i<10; i++){
        if(hashtable[i]!=-1){
            cout<<"Slot "<<i<<":"<<hashtable[i]<<endl;
        }
    }

}