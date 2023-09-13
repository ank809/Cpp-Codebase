#include<iostream>
using namespace std;
class Array{
    public:
    int *arr;
    int n;
    Array(int len){
        n=len;
        arr= new int[n];
    }

    void insertArray(){
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
    }

    int searchIndex(int target){
        int start= 0;
        int end= n-1;
        while(start<=end){
            int mid= start+(end-start)/2;
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]<target){
                start++;
            }
            else{
                end--;
            }
        }
        return -1;
    }

    void deleteIndex(int index){
        for(int i=index; i<n; i++){
            arr[i]=arr[i+1];
        }
        n--;
    }
    void display(){
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
    }


};
int main(){
    int  n;
    cout<<"Enter value of n";
    cin>>n;
    Array array(n);
    cout<<"Insert element in array";
    array.insertArray();
    cout<<"Enter target element";
    int target;
    cin>>target;
    int keyIndex= array.searchIndex(target);
    cout<<"Element present at index ";
    cout<<keyIndex<<endl;
    array.deleteIndex(keyIndex);
    array.display();

}