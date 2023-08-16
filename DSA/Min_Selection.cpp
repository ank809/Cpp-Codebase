// You are using GCC
# include<iostream>
using namespace std;
int getMin(int arr[],int start, int end ){
    int min= start;
    for(int i=start+1; i<=end; i++){
        if(arr[i]<arr[min]){
            min=i;
        }
    }
    return min;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Unsorted heights: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        int min= getMin(arr, i, n-1);
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
        if(arr[i]==arr[min]){
            continue;
        }
        else{
        cout<<"Swapping "<<arr[i]<<" and "<<arr[min]<<":";
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        }
        cout<<endl;
    }
    cout<<"Sorted heights: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}