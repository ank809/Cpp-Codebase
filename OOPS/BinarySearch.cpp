# include<iostream>
using   namespace std;
class Array{
    private:
    int *arr;
    int n;
    public:
    Array(int len){
        n=len;
        arr=new int[n];
    }
    void insert(){
        for(int i=0; i<n; i++){
            cout<<"Enter "<<i+1<<"element: ";
            cin>>arr[i];
        }
    }
    void display(){
        for (int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
    }
    bool binarySearch(int target){
        int start=0;
        int end= n-1;
        while(start<=end){
            int mid= start+(end-start);
            if(arr[mid]==target){
                return true;
            }
            else if(arr[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
    }
};
int main(){
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    Array arr(n);
    arr.insert();
    arr.display();
    int target;
    cout<<"Enter target element:";
    cin>>target;
    bool ans = arr.binarySearch(target);
    cout<<ans;
}