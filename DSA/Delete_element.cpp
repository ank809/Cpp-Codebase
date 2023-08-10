// create an array and sort it 
// then search an element if it is present then delete it

# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements";
    cin>>n;
    int arr[n];
    // input from user
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // sorting
    for(int i=0; i<n; i++){
        for(int j=1; j<n; j++){
            if(arr[j]<arr[j-1]){
                int temp=arr[j-1];
                arr[j-1]= arr[j];
                arr[j]= temp;
            }
        }
    }
    // search the element 
    int target;
    cout<<"Enter the target element";
    cin>>target;
    int s=0, e=n-1;
    while(s<=e){
        int mid= s+e/2;
        if(arr[mid]==target){ 
            for(int i=mid; i<n; i++){
                arr[i]=arr[i+1];
            }
            n=n-1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]+" ";
    }

}