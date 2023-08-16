// You are using GCC
# include<iostream>
# include<string>
using namespace std;
int getMin(string arr[], int start, int end){
    int min= start;
    for(int i=start+1; i<=end; i++){
        if(arr[i]<arr[min]){
            min=i;
        }
    }
    return min;
    
};
int main(){
    int n;
    cin>>n;
    string arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Initial order: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    for(int i=0; i<n-1; i++){
        int min= getMin(arr, i, n-1);
        string temp= arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        cout<<"After Iteration "<<i+1<<": ";
        for(int j=0; j<n; j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Sorted order: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}